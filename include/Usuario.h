#ifndef USUARIO_H
#define USUARIO_H
#include <string>
using namespace std;

class Usuario {
public:
	Usuario(
			long id,
			string usuario,
			string password,
			bool isAdmin
		   );
	Usuario(
			string usuario,
			string password,
			bool isAdmin
			);
	
	string validarDatos();
	
	// Getters
	long getId();
	string getUsuario();
	string getPassword();
	bool getIsAdmin();
	
	// Setters
	void setId(long id);
	void setUsuario(string usuario);
	void setPassword(string password);
	void setIsAdmin(bool isAdmin);

private:
	long id;
	string usuario;
	string password;
	bool isAdmin;
};

#endif

