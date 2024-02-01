#include "../../include/GuiEditInmuebles.h"
#include "../../include/Inmueble.h"
#include <vector>
#include "../../include/Inquilino.h"
#include "../../include/Propietario.h"
#include "../../include/ioInquilino.h"
#include "../../include/ioPropietario.h"
#include "../../include/string_conv.h"
#include "../../include/ioInmueble.h"
#include <wx/msgdlg.h>
using namespace std;

GuiEditInmuebles::GuiEditInmuebles(wxWindow *parent) : EditInmuebles(parent) {
	vector <Inquilino> inquilinos = IoInquilino::leerDatosInq();
	vector <Propietario> propietarios = IoPropietario::leerDatosProp();
	
	for (unsigned int i = 0; i < propietarios.size(); i++) {
		camInmEditProp->Append(propietarios[i].getApellido() + ", " + propietarios[i].getNombre());		
	}
	for (unsigned int i = 0; i < inquilinos.size(); i++) {
		camInmEditInq->Append(inquilinos[i].getApellido() + ", " + inquilinos[i].getNombre());
	}
}

void GuiEditInmuebles::Inicializar(Inmueble *inm) {
	
	camInmEditDom->SetValue(std_to_wx(inm->getDomicilio()));
	camInmEditProp->SetSelection((long)inm->getIdProp());
	camInmEditInq->SetSelection((long)inm->getIdInq());
	spinInmEditMA->SetValue((double)inm->getMontoAlq());
	
	this->inm = inm;
}

void GuiEditInmuebles::OnClickInmEditSave( wxCommandEvent& event )  {
	
	Inmueble inmAux(inm->getId(), inm->getIdProp(), inm->getIdInq(), inm->getDomicilio(), inm->getMontoAlq());
	
	inmAux.setDomicilio(wx_to_std(camInmEditDom->GetValue()));
	inmAux.setIdProp((unsigned short)(camInmEditProp->GetSelection()));
	inmAux.setIdInq((unsigned short)(camInmEditInq->GetSelection()));
	inmAux.setMontoAlq((spinInmEditMA->GetValue()));
	
	string error = inmAux.validarDatos();
	
	if (error == "") {
		wxMessageBox("El inmueble se ha editado correctamente.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
		IoInmueble::guardarDatosInm(inmAux);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiEditInmuebles::OnClickInmEditCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
	EndModal(0);
}

GuiEditInmuebles::~GuiEditInmuebles() {
	
}

