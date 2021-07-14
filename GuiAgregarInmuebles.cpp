#include "GuiAgregarInmuebles.h"
#include "GuiMenuInmuebles.h"
#include <wx/textctrl.h>
#include "string_conv.h"
#include <string>
#include <vector>
#include "ioPropietario.h"
#include "Propietario.h"
#include "Inquilino.h"
#include "ioInquilino.h"
#include <wx/combobox.h>
#include "Inmueble.h"
#include "ioInmueble.h"
#include <iostream>
#include <wx/msgdlg.h>
using namespace std;

GuiAgregarInmuebles::GuiAgregarInmuebles(wxWindow *parent) : AgregarInmuebles(parent) {
	vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
	vector <Propietario> propietarios = IoPropietario::leerDatosProp();
	
	for (unsigned int i = 0; i < propietarios.size(); i++) {
		camInmNuevoProp->Append(propietarios[i].getApellido() + ", " + propietarios[i].getNombre());		
	}
	for (unsigned int i = 0; i < inquilinos.size(); i++) {
		camInmNuevoInq->Append(inquilinos[i].getApellido() + ", " + inquilinos[i].getNombre());
	}
}

void GuiAgregarInmuebles::OnClickInmNuevoSave( wxCommandEvent& event )  {
	
	float montoAlq = (spinInmNuevoMA->GetValue());
	string domicilio = wx_to_std(camInmNuevoDom->GetValue());
	long idProp = (camInmNuevoProp->GetSelection());
	long idInq = (camInmNuevoInq->GetSelection());	
	
	Inmueble Nuevo(idProp, idInq, domicilio, montoAlq);
	string error = Nuevo.validarDatos();
	
	if (error == "") {
		wxMessageBox("El inmueble se ha guardado correctamente.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
		IoInmueble::guardarDatosInm(Nuevo);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiAgregarInmuebles::OnClickInmNuevoCancel( wxCommandEvent& event )  {
	
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
	EndModal(0);
}

GuiAgregarInmuebles::~GuiAgregarInmuebles() {
	
}

