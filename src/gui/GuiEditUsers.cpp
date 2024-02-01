#include "../../include/GuiEditUsers.h"
#include "../../include/Usuario.h"
#include <wx/msgdlg.h>
#include "../../include/string_conv.h"
#include <string>
#include "../../include/ioUsuario.h"
using namespace std;

GuiEditUsers::GuiEditUsers(wxWindow *parent) : EditUsers(parent) {
	
}

void GuiEditUsers::Inicializar(Usuario *user) {
	
	camUserEditUser->SetValue(std_to_wx(user->getUsuario()));
	camUserEditPass->SetValue(std_to_wx(user->getPassword()));
	selUserEditAdmin->SetSelection(user->getIsAdmin());
	
	this->user = user;
}

void GuiEditUsers::OnClickUserEditSave( wxCommandEvent& event )  {
	
	Usuario userAux(user->getId(), user->getUsuario(), user->getPassword(), user->getIsAdmin());
	
	userAux.setUsuario(wx_to_std(camUserEditUser->GetValue()));
	userAux.setPassword(wx_to_std(camUserEditPass->GetValue()));
	userAux.setIsAdmin(selUserEditAdmin->GetSelection());
	
	string error = userAux.validarDatos();
	
	if (error == "") {
		wxMessageBox("El usuario se ha editado correctamente.", "SGI - Advertencia", wxOK| wxICON_INFORMATION);
		IoUsuario::guardarDatosUsuar(userAux);
		
		EndModal(1);
	} else {
		wxMessageBox(error, "SGI - Error", wxOK| wxICON_ERROR);
	}
}

void GuiEditUsers::OnClickUserEditCancel( wxCommandEvent& event )  {
	wxMessageBox("No se han realizado cambios.", "SGI - Advertencia", wxOK | wxICON_INFORMATION);
	EndModal(0);
}

GuiEditUsers::~GuiEditUsers() {
	
}

