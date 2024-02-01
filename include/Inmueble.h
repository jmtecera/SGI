#ifndef INMUEBLE_H
#define INMUEBLE_H
#include <string>
using namespace std;

class Inmueble {
private:
	long id;
	long idProp;
	long idInq;
	string domicilio;
	float montoAlq;
public:
	Inmueble(
			long id,
			long idProp,
			long idInq,
			string domicilio,
			float montoAlq
			);
	Inmueble(
			long idProp,
			long idInq,
			string domicilio,
			float montoAlq
			);	
	
	string validarDatos();
	
	long getId();
	long getIdProp();
	long getIdInq();
	string getDomicilio();
	float getMontoAlq();
	//
	void setId(long id);
	void setIdProp(long idProp);
	void setIdInq(long idInq);
	void setDomicilio(string domicilio);
	void setMontoAlq(float montoAlq);
};

#endif

