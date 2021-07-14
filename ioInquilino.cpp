#include "ioInquilino.h"
#include "Inquilino.h"
#include <cstring>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

Inquilino IoInquilino::structAObjeto(struct SInquilino i){
	return Inquilino(
			   i.id,
			   i.sFrenteIVA,
			   i.dni,
			   i.tel,
			   string(i.nombre),
			   string(i.apellido),
			   string(i.CUIx),
			   string(i.domicilio),
			   string(i.email)
			   );
}

struct SInquilino IoInquilino::objetoAStruct(Inquilino i){
	
	struct SInquilino *si = new struct SInquilino;
	
	si->id = i.getId();
	si->sFrenteIVA = i.getSFrenteIVA();
	si->dni = i.getDni();
	si->tel = i.getTel();
	
	strcpy(si->nombre, i.getNombre().c_str());
	strcpy(si->apellido, i.getApellido().c_str());
	strcpy(si->CUIx, i.getCUIx().c_str());
	strcpy(si->domicilio, i.getDomicilio().c_str());
	strcpy(si->email, i.getEmail().c_str());
	
	return *si;
}

bool IoInquilino::archivoExiste(){
	struct stat buf;
	return (stat("./data/Inquilinos.dat", &buf) == 0);
}

bool IoInquilino::crearArchivo(){
	remove("./data/Inquilinos.dat");
	ofstream nuevoArchi("./data/Inquilinos.dat", ios::binary|ios::out);
	if (nuevoArchi.fail()) {
		return false;
	}
	nuevoArchi.close();
	return true;
}

bool IoInquilino::guardarDatosInq(Inquilino i) {
	
	if (IoInquilino::archivoExiste() == false) {
		if (IoInquilino::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiInq("./data/Inquilinos.dat", ios::binary|ios::in);
	
	if (archiInq.fail()) {
		return false;
	}
	
	if (i.getId() != -1) {
		archiInq.seekp(i.getId() * sizeof(struct SInquilino));
	} else {
		archiInq.seekp(0, ios_base::end);
		i.setId(archiInq.tellp() / sizeof(struct SInquilino));
	}
	
	struct SInquilino sInq = IoInquilino::objetoAStruct(i);
	
	archiInq.write(reinterpret_cast<char*>(&sInq), sizeof(struct SInquilino));
	
	if (archiInq.fail()) {
		return false;
	}
	
	archiInq.close();
	return true;
}

vector <Inquilino> IoInquilino::leerDatosInq() {
	
	vector <Inquilino> inquilinos;
	
	if (IoInquilino::archivoExiste() == false) {
		if (IoInquilino::crearArchivo() == false) {
			return inquilinos;
		}
	}
	
	ifstream archiInq("./data/Inquilinos.dat", ios::binary);
	
	if (archiInq.fail()) {
		return inquilinos;
	}
	
	archiInq.seekg(0, ios_base::end);
	streampos end = archiInq.tellg();
	
	unsigned long i = 0;
	struct SInquilino aux;
	
	archiInq.seekg(0);
	
	while (archiInq.tellg() != end) {
		archiInq.seekg(i * sizeof(struct SInquilino));
		archiInq.read(reinterpret_cast<char*>(&aux), sizeof(struct SInquilino));
		if (((struct SInquilino)aux).deleted == false) {
			inquilinos.push_back(IoInquilino::structAObjeto(aux));
		}
		i++;
	}
	
	archiInq.close();
	return inquilinos;
}

bool IoInquilino::borrarInq(Inquilino i) {
	
	if (IoInquilino::archivoExiste() == false) {
		if (IoInquilino::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiInq("./data/Inquilinos.dat", ios::binary|ios::in);
	
	if (archiInq.fail()) {
		return false;
	}
	
	if (i.getId() != -1) {
		archiInq.seekp(i.getId() * sizeof(struct SInquilino));
	} else {
		archiInq.close();
		return false;
	}
	
	struct SInquilino sInq = IoInquilino::objetoAStruct(i);
	
	sInq.deleted = true;
	archiInq.write(reinterpret_cast<char*>(&sInq), sizeof(struct SInquilino));
	
	if (archiInq.fail()) {
		return false;
	}
	
	archiInq.close();
	return true;
}


