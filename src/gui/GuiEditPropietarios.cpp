#include "../../include/GuiEditPropietarios.h"
#include <wx/textctrl.h>
#include "../../include/string_conv.h"
#include "../../include/Propietario.h"
#include <cstdlib>
#include <string>
#include "../../include/ioPropietario.h"
#include <wx/msgdlg.h>
using namespace std;

GuiEditPropietarios::GuiEditPropietarios(wxWindow *parent) : EditPropietarios(parent) {

}

void GuiEditPropietarios::Inicializar(Propietario *prop) {
	
	camPropEditNom->SetValue(std_to_wx(prop->getNombre()));
	camPropEditApe->SetValue(std_to_wx(prop->getApellido()));
	camPropEditDni->SetValue(std_to_wx(to_string(prop->getDni())));
	camPropEditApe->SetValue(std_to_wx(prop->getApellido()));
	camPropEditDom->SetValue(std_to_wx(prop->getDomicilio()));
	camPropEditTel->SetValue(std_to_wx(to_string(prop->getTel())));
	camPropEditApe->SetValue(std_to_wx(prop->getApellido()));
	choEditPropSitIva->SetSelection((int)prop->getSFrenteIVA());
	spinPropEditCam->SetValue((double)prop->getComision());
	camPropEditCuix->SetValue(std_to_wx(prop->getCUIx()));
	camPropEditEmail->SetValue(std_to_wx(prop->getEmail()));
	
	this->prop = prop;
}

void GuiEditPropietarios::OnClickPropEditSave( wxCommandEvent& event )  {
	
	Propietario propAux(prop->getId(), prop->getSFrenteIVA(), prop->getDni(), prop->getTel(), prop->getNombre(),
						prop->getApellido(), prop->getCUIx(), prop->getDomicilio(), prop->getEmail(), prop->getComision());
	
	propAux.setSFrenteIVA((unsigned short)(choEditPropSitIva->GetSelection()));
	propAux.setDni(atoi(camPropEditDni->GetValue()));
	propAux.setTel(atoi(camPropEditTel->GetValue()));
	propAux.setNombre(wx_to_std(camPropEditNom->GetValue()));
	propAux.setApellido(wx_to_std(camPropEditApe->GetValue()));
	propAux.setCUIx(wx_to_std(camPropEditCuix->GetValue()));
	propAux.setDomicilio(wx_to_std(camPropEditDom->GetValue()));
	propAux.setEmail(wx_to_std(camPropEditEmail->GetValue()));
	propAux.setComision((spinPropEditCam->GetValue()));
	
	string error = propAux.validarDatos();

	if (error == "") {
		wxMessageBox("El propietario se ha editado correctamente.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
		IoPropietario::guardarDatosProp(propAux);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiEditPropietarios::OnClickPropEditCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK | wxICON_INFORMATION);
	EndModal(0);
}




GuiEditPropietarios::~GuiEditPropietarios() {
	
}

