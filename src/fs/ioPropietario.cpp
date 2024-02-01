#include "../../include/ioPropietario.h"
#include "../../include/Propietario.h"
#include <cstring>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

Propietario IoPropietario::structAObjeto(struct SPropietario p){
	return Propietario(
				p.id,
				p.sFrenteIVA,
				p.dni,
				p.tel,
				string(p.nombre),
				string(p.apellido),
				string(p.CUIx),
				string(p.domicilio),
				string(p.email),
				p.comision
				);
}

struct SPropietario IoPropietario::objetoAStruct(Propietario p){
	
	struct SPropietario *sp = new struct SPropietario;
	
	sp->id = p.getId();
	sp->sFrenteIVA = p.getSFrenteIVA();
	sp->dni = p.getDni();
	sp->tel = p.getTel();
	
	strcpy(sp->nombre, p.getNombre().c_str());
	strcpy(sp->apellido, p.getApellido().c_str());
	strcpy(sp->CUIx, p.getCUIx().c_str());
	strcpy(sp->domicilio, p.getDomicilio().c_str());
	strcpy(sp->email, p.getEmail().c_str());
	
	sp->comision = p.getComision();

	return *sp;
}

bool IoPropietario::archivoExiste(){
	struct stat buf;
	return (stat("./data/Propietarios.dat", &buf) == 0);
}

bool IoPropietario::crearArchivo(){
	remove("./data/Propietarios.dat");
	ofstream nuevoArchi("./data/Propietarios.dat", ios::binary|ios::out);
	if (nuevoArchi.fail()) {
		return false;
	}
	nuevoArchi.close();
	return true;
}

bool IoPropietario::guardarDatosProp(Propietario p) {
	
	if (IoPropietario::archivoExiste() == false) {
		if (IoPropietario::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiProp("./data/Propietarios.dat", ios::binary|ios::in);
	
	if (archiProp.fail()) {
		return false;
	}
	
	if (p.getId() != -1) {
		archiProp.seekp(p.getId() * sizeof(struct SPropietario));
	} else {
		archiProp.seekp(0, ios_base::end);
		p.setId(archiProp.tellp() / sizeof(struct SPropietario));
	}
	
	struct SPropietario sProp = IoPropietario::objetoAStruct(p);
	
	archiProp.write(reinterpret_cast<char*>(&sProp), sizeof(struct SPropietario));
	
	if (archiProp.fail()) {
		return false;
	}
	
	archiProp.close();
	return true;
}

vector <Propietario> IoPropietario::leerDatosProp(){
	
	vector <Propietario> propietarios;
	
	if (IoPropietario::archivoExiste() == false) {
		if (IoPropietario::crearArchivo() == false) {
			return propietarios;
		}
	}
	
	ifstream archiProp("./data/Propietarios.dat", ios::binary);
	
	if (archiProp.fail()) {
		return propietarios;
	}
	
	archiProp.seekg(0, ios_base::end);
	streampos end = archiProp.tellg();
	
	unsigned long i = 0;
	struct SPropietario aux;
	
	archiProp.seekg(0);
	
	while (archiProp.tellg() != end) {
		archiProp.seekg(i * sizeof(struct SPropietario));
		archiProp.read(reinterpret_cast<char*>(&aux), sizeof(struct SPropietario));
		if (((struct SPropietario)aux).deleted == false) {
			propietarios.push_back(IoPropietario::structAObjeto(aux));
		}
		i++;
	}

	archiProp.close();
	return propietarios;
}

bool IoPropietario::borrarProp(Propietario p) {
	
	if (IoPropietario::archivoExiste() == false) {
		if (IoPropietario::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiProp("./data/Propietarios.dat", ios::binary|ios::in);
	
	if (archiProp.fail()) {
		return false;
	}
	
	if (p.getId() != -1) {
		archiProp.seekp(p.getId() * sizeof(struct SPropietario));
	} else {
		archiProp.close();
		return false;
	}
	
	struct SPropietario sProp = IoPropietario::objetoAStruct(p);
	
	sProp.deleted = true;
	archiProp.write(reinterpret_cast<char*>(&sProp), sizeof(struct SPropietario));
	
	if (archiProp.fail()) {
		return false;
	}
	
	archiProp.close();
	return true;
}

