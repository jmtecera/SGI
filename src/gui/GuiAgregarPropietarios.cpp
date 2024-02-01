#include "../../include/GuiAgregarPropietarios.h"
#include "../../include/string_conv.h"
#include <string>
#include "../../include/Propietario.h"
#include "../../include/ioPropietario.h"
#include "../../include/GuiMenuPropietarios.h"
#include <wx/msgdlg.h>
using namespace std;

GuiAgregarPropietarios::GuiAgregarPropietarios(wxWindow *parent) : AgregarPropietarios(parent) {

}

void GuiAgregarPropietarios::OnClickPropNuevoSave( wxCommandEvent& event )  {	
	unsigned short sFrenteIVA = (unsigned short)(choNuevoPropSitIva->GetSelection());
	unsigned int dni = atoi(camPropNuevoDni->GetValue());
	unsigned int tel = atoi(camPropNuevoTel->GetValue());
	string nombre = wx_to_std(camPropNuevoNom->GetValue());
	string apellido = wx_to_std(camPropNuevoApe->GetValue());
	string CUIx = wx_to_std(camPropNuevoCuix->GetValue());
	string domicilio = wx_to_std(camPropNuevoDom->GetValue());
	string email = wx_to_std(camPropNuevoEmail->GetValue());
	float comision = (spinPropNuevoCam->GetValue());
	
	Propietario Nuevo(sFrenteIVA, dni, tel, nombre, apellido, CUIx, domicilio, email, comision);
	string error = Nuevo.validarDatos();
	
	if (error == "") {
		wxMessageBox("El propietario se ha guardado correctamente.", "SGI - Advertencia", wxOK | wxICON_INFORMATION);
		IoPropietario::guardarDatosProp(Nuevo);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiAgregarPropietarios::OnClickPropNuevoCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK | wxICON_INFORMATION);
	EndModal(0);
}

GuiAgregarPropietarios::~GuiAgregarPropietarios() {
	
}

