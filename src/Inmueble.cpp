#include "../include/Inmueble.h"
#include <string>
using namespace std;

Inmueble::Inmueble(
		long id,
		long idProp,
		long idInq,
		string domicilio,
		float montoAlq
		){
	this->id = id;
	this->idProp = idProp;
	this->idInq = idInq;
	this->domicilio = domicilio;
	this->montoAlq = montoAlq;
}

Inmueble::Inmueble(
		long idProp,
		long idInq,
		string domicilio,
		float montoAlq
		){
	this->id = -1;
	this->idProp = idProp;
	this->idInq = idInq;
	this->domicilio = domicilio;
	this->montoAlq = montoAlq;
}

// Getters
long Inmueble::getId(){
	return this->id;
}
long Inmueble::getIdProp(){
	return this->idProp;
}
long Inmueble::getIdInq(){
	return this->idInq;
}
string Inmueble::getDomicilio(){
	return this->domicilio;
}
float Inmueble::getMontoAlq(){
	return this->montoAlq;
}

// Setters
void Inmueble::setId(long id){
	this->id = id;
}
void Inmueble::setIdProp(long idProp){
	this->idProp = idProp;
}
void Inmueble::setIdInq(long idInq){
	this->idInq = idInq;
}
void Inmueble::setDomicilio(string domicilio){
	this->domicilio = domicilio;
}
void Inmueble::setMontoAlq(float montoAlq){
	this->montoAlq = montoAlq;
}

string Inmueble::validarDatos() {
	string error = "";
	
	if (this->domicilio == "") error.append("- Ingrese un domicilio valido\n");
	if (this->domicilio.size() > 64) error.append("- El domicilio es demasiado largo\n");
	
	return error;
}








