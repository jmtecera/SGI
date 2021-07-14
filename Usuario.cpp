#include "Usuario.h"
#include <string>
using namespace std;

Usuario::Usuario(
						 long id,
						 string usuario,
						 string password,
						 bool isAdmin
						)
{
	this->id = id;
	this->usuario = usuario;
	this->password = password;
	this->isAdmin = isAdmin;
}
Usuario::Usuario(
				 string usuario,
				 string password,
				 bool isAdmin
				 )
{
	this->usuario = usuario;
	this->password = password;
	this->isAdmin = isAdmin;
}


// Getters
long Usuario::getId() {
	return this->id;
}
string Usuario::getUsuario() {
	return this->usuario;
}
string Usuario::getPassword() {
	return this->password;
}
bool Usuario::getIsAdmin() {
	return this->isAdmin;
}

// Setters
void Usuario::setId(long id) {
	this->id = id;
}
void Usuario::setUsuario(string usuario) {
	this->usuario = usuario;
}
void Usuario::setPassword(string password) {
	this->password = password;
}
void Usuario::setIsAdmin(bool isAdmin) {
	this->isAdmin = isAdmin;
}

string Usuario::validarDatos() {
	string error = "";
	
	if (this->usuario == "") error.append("- Ingrese un usuario valido\n");
	if (this->usuario.size() > 16) error.append("- El nombre es demasiado largo\n");
	
	if (this->password == "") error.append("- Ingrese una contraseña valida\n");
	if (this->password.size() > 16) error.append("- La contraseña es demasiado larga\n");
	
	return error;
}
