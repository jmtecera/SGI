#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

enum SitFrenteIVA{ResponsableInscripto = 0, Monotributista = 1, ConsumidorFinal = 2, Exento = 3};


class Persona {
protected:
    long id;
    unsigned short sFrenteIVA;
    unsigned int dni;
    unsigned int tel;
    string nombre;
    string apellido;
    string CUIx;
    string domicilio;
    string email;
public:
    Persona(
            long id,
            unsigned short sFrenteIVA,
            unsigned int dni,
            unsigned int tel,
            string nombre,
            string apellido,
            string CUIx,
            string domicilio,
            string email
            );
	Persona(
			unsigned short sFrenteIVA,
			unsigned int dni,
			unsigned int tel,
			string nombre,
			string apellido,
			string CUIx,
			string domicilio,
			string email
			);
	
	// Getters
    long getId();
    unsigned short getSFrenteIVA();
    unsigned int getDni();
    unsigned int getTel();
    string getNombre();
    string getApellido();
    string getCUIx();
    string getDomicilio();
    string getEmail();
    // Setters
    void setId(long id);
    void setSFrenteIVA(unsigned short sFrenteIVA);
    void setDni(unsigned int dni);
    void setTel(unsigned int tel);
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setCUIx(string CUIx);
    void setDomicilio(string domicilio);
    void setEmail(string email);
};
#endif
