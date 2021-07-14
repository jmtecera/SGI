#ifndef IOPROPIETARIO_H
#define IOPROPIETARIO_H
#include "Propietario.h"
#include <vector>
using namespace std;

struct SPropietario {
	long id;
	unsigned short sFrenteIVA;
	unsigned int dni;
	unsigned int tel;
	char nombre[32];
	char apellido[32];
	char CUIx[16];
	char domicilio[64];
	char email[64];
	float comision;
	bool deleted = false;
};


class IoPropietario {
public:

	static bool guardarDatosProp(Propietario p);
	static vector <Propietario> leerDatosProp();
	static bool borrarProp(Propietario p);
	static bool archivoExiste();
	static bool crearArchivo();
	
private:
	
	static Propietario structAObjeto(struct SPropietario p);
	static struct SPropietario objetoAStruct(Propietario p);

};

#endif

