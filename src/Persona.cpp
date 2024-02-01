#include "../include/Persona.h"
#include <string>
using namespace std;

Persona::Persona(
        long id,
        unsigned short sFrenteIVA,
        unsigned int dni,
        unsigned int tel,
        string nombre,
        string apellido,
        string CUIx,
        string domicilio,
        string email
        ){
    this->id = id;
    this->sFrenteIVA = sFrenteIVA;
    this->dni = dni;
    this->tel = tel;
    this->nombre = nombre;
    this->apellido = apellido;
    this->CUIx = CUIx;
    this->domicilio = domicilio;
    this->email = email;
}

Persona::Persona(
		unsigned short sFrenteIVA,
		unsigned int dni,
		unsigned int tel,
		string nombre,
		string apellido,
		string CUIx,
		string domicilio,
		string email
		){
	this->id = -1;
	this->sFrenteIVA = sFrenteIVA;
	this->dni = dni;
	this->tel = tel;
	this->nombre = nombre;
	this->apellido = apellido;
	this->CUIx = CUIx;
	this->domicilio = domicilio;
	this->email = email;
}


long Persona::getId(){
    return this->id;
}
unsigned short Persona::getSFrenteIVA(){
    return this->sFrenteIVA;
}
unsigned int Persona::getDni(){
    return this->dni;
}
unsigned int Persona::getTel(){
    return this->tel;
}
string Persona::getNombre(){
    return this->nombre;
}
string Persona::getApellido(){
    return this->apellido;
}
string Persona::getCUIx(){
    return this->CUIx;
}
string Persona::getDomicilio(){
    return this->domicilio;
}
string Persona::getEmail(){
    return this->email;
}
//
void Persona::setId(long id){
    this->id = id;
}
void Persona::setSFrenteIVA(unsigned short sFrenteIVA){
    this->sFrenteIVA = sFrenteIVA;
}
void Persona::setDni(unsigned int dni){
    this->dni = dni;
}
void Persona::setTel(unsigned int tel){
    this->tel = tel;

}
void Persona::setNombre(string nombre){
    this->nombre = nombre;
}
void Persona::setApellido(string apellido){
    this->apellido = apellido;
}
void Persona::setCUIx(string CUIx){
    this->CUIx = CUIx;
}
void Persona::setDomicilio(string domicilio){
    this->domicilio = domicilio;
}
void Persona::setEmail(string email){
    this->email = email;
}
