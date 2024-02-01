#ifndef INQUILINO_H
#define INQUILINO_H
#include <string>
#include "Persona.h"
using namespace std;

class Inquilino : public Persona {
public:
	Inquilino(long id,
				unsigned short sFrenteIVA,
				unsigned int dni,
				unsigned int tel,
				string nombre,
				string apellido,
				string CUIx,
				string domicilio,
				string email);
	Inquilino(unsigned short sFrenteIVA,
			  unsigned int dni,
			  unsigned int tel,
			  string nombre,
			  string apellido,
			  string CUIx,
			  string domicilio,
			  string email);
	
	
	string validarDatos();
};

#endif

