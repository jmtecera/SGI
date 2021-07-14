#include "ioUsuario.h"
#include "Usuario.h"
#include <cstring>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <sys/types.h>
#include <sys/stat.h>
#include <string>
using namespace std;


Usuario IoUsuario::structAObjeto(struct SUsuario u){
	return Usuario(
				    u.id,
					string(u.usuario),
					string(u.password),
					u.isAdmin
				  );
}

struct SUsuario IoUsuario::objetoAStruct(Usuario u){
	
	struct SUsuario *su = new struct SUsuario;
	
	su->id = u.getId();
	su->isAdmin = u.getIsAdmin();
	
	strcpy(su->usuario, u.getUsuario().c_str());
	strcpy(su->password, u.getPassword().c_str());

	return *su;
}

bool IoUsuario::archivoExiste(){
	struct stat buf;
	return (stat("./data/Usuarios.dat", &buf) == 0);
}

bool IoUsuario::crearArchivo(){
	remove("./data/Usuarios.dat");
	ofstream nuevoArchi("./data/Usuarios.dat", ios::binary|ios::out);
	if (nuevoArchi.fail()) {
		return false;
	}
	nuevoArchi.close();
	return true;
}

bool IoUsuario::guardarDatosUsuar(Usuario u) {
	
	if (IoUsuario::archivoExiste() == false) {
		if (IoUsuario::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiUsuar("./data/Usuarios.dat", ios::binary|ios::in);
	
	if (archiUsuar.fail()) {
		return false;
	}
	
	if (u.getId() != -1) {
		archiUsuar.seekp(u.getId() * sizeof(struct SUsuario));
	} else {
		archiUsuar.seekp(0, ios_base::end);
		u.setId(archiUsuar.tellp() / sizeof(struct SUsuario));
	}
	
	struct SUsuario sUsuar = IoUsuario::objetoAStruct(u);
	
	archiUsuar.write(reinterpret_cast<char*>(&sUsuar), sizeof(struct SUsuario));
	
	if (archiUsuar.fail()) {
		return false;
	}
	
	archiUsuar.close();
	return true;
}
vector <Usuario> IoUsuario::leerDatosUsuar() {
	
	vector <Usuario> usuarios;
	
	if (IoUsuario::archivoExiste() == false) {
		if (IoUsuario::crearArchivo() == false) {
			return usuarios;
		}
	}
	
	ifstream archiUsuar("./data/Usuarios.dat", ios::binary);
	
	if (archiUsuar.fail()) {
		return usuarios;
	}
	
	archiUsuar.seekg(0, ios_base::end);
	streampos end = archiUsuar.tellg();
	
	unsigned long i = 0;
	struct SUsuario aux;
	
	archiUsuar.seekg(0);
	
	while (archiUsuar.tellg() != end) {
		archiUsuar.seekg(i * sizeof(struct SUsuario));
		archiUsuar.read(reinterpret_cast<char*>(&aux), sizeof(struct SUsuario));
		if (((struct SUsuario)aux).deleted == false) {
			usuarios.push_back(IoUsuario::structAObjeto(aux));
		}
		i++;
	}
	
	archiUsuar.close();
	return usuarios;
}

bool IoUsuario::borrarUsuar(Usuario u) {
	
	if (IoUsuario::archivoExiste() == false) {
		if (IoUsuario::crearArchivo() == false) {
			return false;
		}
	}
	
	ofstream archiUsuar("./data/Usuarios.dat", ios::binary|ios::in);
	
	if (archiUsuar.fail()) {
		return false;
	}
	
	if (u.getId() != -1) {
		archiUsuar.seekp(u.getId() * sizeof(struct SUsuario));
	} else {
		archiUsuar.close();
		return false;
	}
	
	struct SUsuario sUsuar = IoUsuario::objetoAStruct(u);
	
	sUsuar.deleted = true;
	archiUsuar.write(reinterpret_cast<char*>(&sUsuar), sizeof(struct SUsuario));
	
	if (archiUsuar.fail()) {
		return false;
	}
	
	archiUsuar.close();
	return true;
}


