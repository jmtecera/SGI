#ifndef IOINMUEBLE_H
#define IOINMUEBLE_H
#include <vector>
#include "Inmueble.h"
using namespace std;

struct SInmueble {
		long id;
		long idProp;
		long idInq;
		char domicilio[64];
		float montoAlq;
		bool deleted = false;
};

class IoInmueble {
public:

	static bool guardarDatosInm(Inmueble i);
	static vector <Inmueble> leerDatosInm();
	static bool borrarInm(Inmueble i);
	static bool archivoExiste();
	static bool crearArchivo();
	
private:
	
	static Inmueble structAObjeto(struct SInmueble i);
	static struct SInmueble objetoAStruct(Inmueble i);
	
};

#endif

