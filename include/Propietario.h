#ifndef PROPIETARIO_H
#define PROPIETARIO_H
#include <string>
#include "Persona.h"
using namespace std;

class Propietario : public Persona {
public:
	Propietario(long id,
				unsigned short sFrenteIVA,
				unsigned int dni,
				unsigned int tel,
				string nombre,
				string apellido,
				string CUIx,
				string domicilio,
				string email,
				float comision);
	
	Propietario(unsigned short sFrenteIVA,
				unsigned int dni,
				unsigned int tel,
				string nombre,
				string apellido,
				string CUIx,
				string domicilio,
				string email,
				float comision);
	
	string validarDatos();
	
	// Getters
	float getComision();
	
	// Setters
	void setComision(float comision);
	
private:
	float comision;
};

#endif

