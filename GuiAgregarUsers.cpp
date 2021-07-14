#include "GuiAgregarUsers.h"
#include <wx/msgdlg.h>
#include <string>
#include "string_conv.h"
#include "Usuario.h"
#include "ioUsuario.h"
#include <vector>
using namespace std;

GuiAgregarUsers::GuiAgregarUsers(wxWindow *parent) : AgregarUsers(parent) {
	
}

void GuiAgregarUsers::OnClickUserNuevoSave( wxCommandEvent& event )  {
	
	vector <Usuario> vUsuario = IoUsuario::leerDatosUsuar(); 

	string usuario = wx_to_std(camUserNuevoUser->GetValue());
	string password = wx_to_std(camUserNuevoPass->GetValue());
	bool isAdmin = selUserNuevoAdmin->GetSelection();
	
	Usuario Nuevo(vUsuario.size(), usuario, password, isAdmin);
	string error = Nuevo.validarDatos();
	
	if (error == "") {
		wxMessageBox("El usuario se ha guardado correctamente.", "SGI - Advertencia", wxOK | wxICON_INFORMATION);
		IoUsuario::guardarDatosUsuar(Nuevo);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiAgregarUsers::OnClickUserNuevoCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK | wxICON_INFORMATION);
	EndModal(0);
}

GuiAgregarUsers::~GuiAgregarUsers() {
	
}

