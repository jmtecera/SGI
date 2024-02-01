#include "../../include/ioInmueble.h"
#include "../../include/Inmueble.h"
#include <string>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <vector>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

Inmueble IoInmueble::structAObjeto(struct SInmueble i) {
	return Inmueble(
					i.id,
					i.idProp,
					i.idInq,
					string(i.domicilio),
					i.montoAlq
					);
}

struct SInmueble IoInmueble::objetoAStruct(Inmueble i){
	
	struct SInmueble *si = new struct SInmueble;
	
	si->id = i.getId();
	si->idProp = i.getIdProp();
	si->idInq = i.getIdInq();
	si->montoAlq = i.getMontoAlq();
		
	strcpy(si->domicilio, i.getDomicilio().c_str());
	
	return *si;
}

bool IoInmueble::archivoExiste(){
	struct stat buf;
	return (stat("./data/Inmuebles.dat", &buf) == 0);
}

bool IoInmueble::crearArchivo(){
	remove("./data/Inmuebles.dat");
	ofstream nuevoArchi("./data/Inmuebles.dat", ios::binary|ios::out);
	if (nuevoArchi.fail()) {
		return false;
	}
	nuevoArchi.close();
	return true;
}

bool IoInmueble::guardarDatosInm(Inmueble i) {
	
	if (IoInmueble::archivoExiste() == false) {
		if (IoInmueble::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiInm("./data/Inmuebles.dat", ios::binary|ios::in);
	
	if (archiInm.fail()) {
		return false;
	}
	
	if (i.getId() != -1) {
		archiInm.seekp(i.getId() * sizeof(struct SInmueble));
	} else {
		archiInm.seekp(0, ios_base::end);
		i.setId(archiInm.tellp() / sizeof(struct SInmueble));
	}
	
	struct SInmueble sInm = IoInmueble::objetoAStruct(i);
	
	archiInm.write(reinterpret_cast<char*>(&sInm), sizeof(struct SInmueble));
	
	if (archiInm.fail()) {
		return false;
	}
	
	archiInm.close();
	return true;
}

vector <Inmueble> IoInmueble::leerDatosInm(){
	
	vector <Inmueble> inmuebles;
	
	if (IoInmueble::archivoExiste() == false) {
		if (IoInmueble::crearArchivo() == false) {
			return inmuebles;
		}
	}
	
	ifstream archiInm("./data/Inmuebles.dat", ios::binary);
	
	if (archiInm.fail()) {
		return inmuebles;
	}
	
	archiInm.seekg(0, ios_base::end);
	streampos end = archiInm.tellg();
	
	unsigned long i = 0;
	struct SInmueble aux;
	
	archiInm.seekg(0);
	
	while (archiInm.tellg() != end) {
		archiInm.seekg(i * sizeof(struct SInmueble));
		archiInm.read(reinterpret_cast<char*>(&aux), sizeof(struct SInmueble));
		if (((struct SInmueble)aux).deleted == false) {
			inmuebles.push_back(IoInmueble::structAObjeto(aux));
			
		}
		i++;
	}
	
	archiInm.close();
	return inmuebles;
}

bool IoInmueble::borrarInm(Inmueble i) {
	
	if (IoInmueble::archivoExiste() == false) {
		if (IoInmueble::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiInm("./data/Inmuebles.dat", ios::binary|ios::in);
	
	if (archiInm.fail()) {
		return false;
	}
	
	if (i.getId() != -1) {
		archiInm.seekp(i.getId() * sizeof(struct SInmueble));
	} else {
		archiInm.close();
		return false;
	}
	
	struct SInmueble sInm = IoInmueble::objetoAStruct(i);
	
	sInm.deleted = true;
	archiInm.write(reinterpret_cast<char*>(&sInm), sizeof(struct SInmueble));
	
	if (archiInm.fail()) {
		return false;
	}
	
	archiInm.close();
	return true;
}



