#include "GuiAgregarInquilinos.h"
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/msgdlg.h>
#include <string>
#include "string_conv.h"
#include "Inquilino.h"
#include "GuiMenuInquilinos.h"
#include "ioInquilino.h"
using namespace std;

GuiAgregarInquilinos::GuiAgregarInquilinos(wxWindow *parent) : AgregarInquilinos(parent) {
	
}

void GuiAgregarInquilinos::OnClickInqNuevoSave( wxCommandEvent& event )  {
	unsigned short sFrenteIVA = (unsigned short)(choNuevoInqSitIva->GetSelection());
	unsigned int dni = atoi(camInqNuevoDni->GetValue());
	unsigned int tel = atoi(camInqNuevoTel->GetValue());
	string nombre = wx_to_std(camInqNuevoNom->GetValue());
	string apellido = wx_to_std(camInqNuevoApe->GetValue());
	string CUIx = wx_to_std(camInqNuevoCuix->GetValue());
	string domicilio = wx_to_std(camInqNuevoDom->GetValue());
	string email = wx_to_std(camInqNuevoEmail->GetValue());
	
	Inquilino Nuevo(sFrenteIVA, dni, tel, nombre, apellido, CUIx, domicilio, email);
	string error = Nuevo.validarDatos();
	
	if (error == "") {
		wxMessageBox("El inquilino se ha guardado correctamente.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
		IoInquilino::guardarDatosInq(Nuevo);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiAgregarInquilinos::OnClickInqNuevoCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
	EndModal(0);
}

GuiAgregarInquilinos::~GuiAgregarInquilinos() {
	
}

