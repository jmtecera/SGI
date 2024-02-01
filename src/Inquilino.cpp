#include "../include/Inquilino.h"
#include <string>
using namespace std;
	
Inquilino::Inquilino(
						 long id,
						 unsigned short sFrenteIVA,
						 unsigned int dni,
						 unsigned int tel,
						 string nombre,
						 string apellido,
						 string CUIx,
						 string domicilio,
						 string email) : 
	Persona(id, sFrenteIVA, dni, tel, nombre, apellido, CUIx, domicilio, email) {};

Inquilino::Inquilino(
						 unsigned short sFrenteIVA,
						 unsigned int dni,
						 unsigned int tel,
						 string nombre,
						 string apellido,
						 string CUIx,
						 string domicilio,
						 string email) : 
	Persona(sFrenteIVA, dni, tel, nombre, apellido, CUIx, domicilio, email) {};

string Inquilino::validarDatos() {
	string error = "";
	
	if (this->nombre == "") error.append("- Ingrese un nombre valido\n");
	if (this->nombre.size() > 32) error.append("- El nombre es demasiado largo\n");
	
	if (this->apellido == "") error.append("- Ingrese un apellido valido\n");
	if (this->apellido.size() > 32) error.append("- El apellido es demasiado largo\n");
	
	if (this->CUIx == "") error.append("- Ingrese un CUIT/CUIL valido\n");
	if (this->CUIx.size() > 11) error.append("- El CUIT/CUIL es demasiado largo\n");
	
	if (this->domicilio == "") error.append("- Ingrese un domicilio valido\n");
	if (this->domicilio.size() > 64) error.append("- El domicilio es demasiado largo\n");
	
	if (this->email == "") error.append("- Ingrese un email valido\n");
	if (this->email.size() > 64) error.append("- El email es demasiado largo\n");
	
	return error;	
}

