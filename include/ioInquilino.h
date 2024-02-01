#ifndef IOINQUILINO_H
#define IOINQUILINO_H
#include "Inquilino.h"
#include <vector>
using namespace std;

struct SInquilino {
	long id;
	unsigned short sFrenteIVA;
	unsigned int dni;
	unsigned int tel;
	char nombre[32];
	char apellido[32];
	char CUIx[16];
	char domicilio[64];
	char email[64];
	bool deleted = false;
};

class IoInquilino {
public:
	
	static bool guardarDatosInq(Inquilino i);
	static vector <Inquilino> leerDatosInq();
	static bool borrarInq(Inquilino i);
	static bool archivoExiste();
	static bool crearArchivo();
	
private:
	
	static Inquilino structAObjeto(struct SInquilino i);
	static struct SInquilino objetoAStruct(Inquilino i);
	
};

#endif

