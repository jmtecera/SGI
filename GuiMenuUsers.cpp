#include "GuiMenuUsers.h"
#include <wx/event.h>
#include <wx/msgdlg.h>
#include "GuiAgregarUsers.h"
#include <vector>
#include "ioUsuario.h"
#include "string_conv.h"
#include <string>
#include "GuiEditUsers.h"
using namespace std;

GuiMenuUsers::GuiMenuUsers(wxWindow *parent) : MenuUsers(parent) {
	this->RefreshGrid();
	GrillaUsuarios->SetSelectionMode(wxGrid::wxGridSelectRows);	
}

void GuiMenuUsers::RefreshGrid() {
	vector <Usuario> usuarios = IoUsuario::leerDatosUsuar();
	
	GrillaUsuarios->DeleteRows(0, GrillaUsuarios->GetNumberRows(), true);
	
	GrillaUsuarios->ClearGrid();
	
	for(unsigned int i = 0; i < usuarios.size(); i++) { 
		GrillaUsuarios->AppendRows();
		GrillaUsuarios->SetCellValue(i, 0, std_to_wx(usuarios[i].getUsuario()));
		if (usuarios[i].getIsAdmin() == true) {
			GrillaUsuarios->SetCellValue(i, 1, std_to_wx("Si"));
		} else {
			GrillaUsuarios->SetCellValue(i, 1, std_to_wx("No"));
		}
	}
}

void GuiMenuUsers::OnClickUserBuscar( wxCommandEvent& event )  {
	vector <Usuario> usuarios = IoUsuario::leerDatosUsuar();
	
	string campo = wx_to_std(campoBusUser->GetValue());
	if (campo != "") {
		for (unsigned int i = 0; i < usuarios.size(); i++) {
			string usuario = usuarios[i].getUsuario();
			
			if (usuario.find(campo, 0) != std::string::npos){
				GrillaUsuarios->SetGridCursor(i, 0);
				GrillaUsuarios->SelectRow(i);
			}
		}
	} else {
		wxMessageBox("¡Debe escribir algo para buscar!", "SGI - Error", wxOK | wxICON_ERROR);
	}
}

void GuiMenuUsers::OnClickUserNuevo( wxCommandEvent& event )  {
	GuiAgregarUsers gau(this);
	if (gau.ShowModal() == 1) {
		RefreshGrid();
	}
	
	gau.Close();
}

void GuiMenuUsers::OnClickUserEditar( wxCommandEvent& event )  {
	if (GrillaUsuarios->IsSelection() == true && GrillaUsuarios->GetSelectedRows().GetCount() == 1){
		vector <Usuario> usuarios = IoUsuario::leerDatosUsuar();
		Usuario user = usuarios[GrillaUsuarios->GetGridCursorRow()];
		GuiEditUsers geu(this);
		geu.Inicializar(&user);
		
		if (geu.ShowModal() == 1) {
			RefreshGrid();
		}
		
		geu.Close();
	}
}

void GuiMenuUsers::OnClickUserElim( wxCommandEvent& event )  {
	if (GrillaUsuarios->IsSelection() == true && GrillaUsuarios->GetSelectedRows().GetCount() == 1){
		vector <Usuario> usuarios = IoUsuario::leerDatosUsuar();
		Usuario user = usuarios[GrillaUsuarios->GetGridCursorRow()];
		
		int button = wxMessageBox("¿Está seguro que desea eliminar el usuario seleccionado?", "SGI - Advertencia", wxYES_NO | wxICON_QUESTION);
		
		if (button == wxYES){
			IoUsuario::borrarUsuar(user);
			RefreshGrid();
		}
	}
}

void GuiMenuUsers::OnClickAdminSalir( wxCommandEvent& event )  {
	EndModal(0);
}

GuiMenuUsers::~GuiMenuUsers() {
	
}

