#ifndef IOUSUARIO_H
#define IOUSUARIO_H
#include "Usuario.h"
#include <string>
#include <vector>
using namespace std;

struct SUsuario {
	long id;
	char usuario[16];
	char password[16];
	bool isAdmin;
	bool deleted = false;
};

class IoUsuario {
public:
	
	static bool guardarDatosUsuar(Usuario u);
	static vector <Usuario> leerDatosUsuar();
	static bool borrarUsuar(Usuario u);
	static bool archivoExiste();
	static bool crearArchivo();
	
private:

	static Usuario structAObjeto(struct SUsuario u);
	static struct SUsuario objetoAStruct(Usuario u);
};

#endif

