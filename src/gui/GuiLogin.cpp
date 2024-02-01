#include "../../include/GuiLogin.h"
#include "../../include/ioUsuario.h"
#include "../../include/string_conv.h"
#include <wx/panel.h>
#include <vector>
#include <string>	
#include <wx/msgdlg.h>
#include "../../include/GuiMenuUsers.h"
#include "../../include/GuiMenuPropietarios.h"
#include <wx/icon.h>
#include "../../include/GuiMenuInmuebles.h"
#include "../../include/GuiMenuInquilinos.h"
using namespace std;

GuiLogin::GuiLogin(wxWindow *parent) : MenuLogin(parent) {
	wxIcon icono;
	icono.LoadFile("../../assets/icon.ico", wxBITMAP_TYPE_ICO);
	SetIcon(icono);
}

GuiLogin::~GuiLogin() {
}	

void GuiLogin::OnClickLoginLogin( wxCommandEvent& event )  {
	
	vector <Usuario> usuarios = IoUsuario::leerDatosUsuar();
	
	string user = wx_to_std(camLoginUser->GetValue());
	string pass =  wx_to_std(camLoginPass->GetValue());
	unsigned int returnValues;
	unsigned int posOnTrue;
	
	if (user == "" || pass == "") {
		returnValues = Empty;
	}
	
	if (returnValues != Empty) {
		returnValues = Bad;
	}
	
	for(unsigned int i=0; i < usuarios.size(); i++) { 
		if (usuarios[i].getUsuario() == user && usuarios[i].getPassword() == pass) {
			returnValues = Successful;
			posOnTrue = i;
			break;
		}
	}
	switch (returnValues) {
	case Successful:
		// Borrar campos por si se cierra sesion
		camLoginUser->Clear();
		camLoginPass->Clear();
		
		// Cambiamos el wxPanel ocultando uno y mostrando el otro
		Login->Hide();
		MenuPrincipal->Show();
		
		if (usuarios[posOnTrue].getIsAdmin() == true) {
			botMenuAdmin->Show();
		} else {
			botMenuAdmin->Hide();
		}
		
		Layout();
		
		break;
		
	case Empty:
		wxMessageBox("�Los campos no pueden estar vacios!", "SGI - Error", wxOK | wxICON_ERROR);
		break;
		
	case Bad:
		wxMessageBox("�Usuario o contrase�a incorrectos!", "SGI - Error", wxOK | wxICON_ERROR);
		break;
	}
}

void GuiLogin::OnClickLoginExit( wxCommandEvent& event )  {
	Close();
}

void GuiLogin::OnClickInq( wxCommandEvent& event )  {
	GuiMenuInquilinos gminq;
	if (gminq.ShowModal() == 0) gminq.Close();
}

void GuiLogin::OnClickInm( wxCommandEvent& event )  {
	GuiMenuInmuebles gmi;
	if (gmi.ShowModal() == 0) gmi.Close();
}

void GuiLogin::OnClickProp( wxCommandEvent& event )  {
	GuiMenuPropietarios gmp;
	if (gmp.ShowModal() == 0) gmp.Close();
}

void GuiLogin::OnClickMenuAdmin( wxCommandEvent& event )  {
	Login->Hide();
	MenuPrincipal->Hide();
	MenuAdmin->Show();
	Layout();
}

void GuiLogin::OnClickMenuLogout( wxCommandEvent& event )  {
	int button = wxMessageBox("�Est� seguro que desea cerrar sesi�n?", "SGI - Advertencia", wxYES_NO| wxICON_QUESTION);
	if (button == wxYES){
		MenuPrincipal->Hide();
		Login->Show();
		Layout();
	}
}

void GuiLogin::OnTextLoginUserMax( wxCommandEvent& event )  {
	wxMessageBox("�El m�ximo de caracteres para el usuario es de 16!", "SGI - Error", wxOK| wxICON_ERROR);
}

void GuiLogin::OnTextLoginPassMax( wxCommandEvent& event )  {
	wxMessageBox("�El m�ximo de caracteres para la contrase�a es de 16!", "SGI - Error", wxOK| wxICON_ERROR);
}

void GuiLogin::OnClickAdminUsers( wxCommandEvent& event )  {
	GuiMenuUsers gmu;
	if (gmu.ShowModal() == 0){
		gmu.Close();
	}
}

void GuiLogin::OnClickAdminExit( wxCommandEvent& event )  {
	Login->Hide();
	MenuAdmin->Hide();
	MenuPrincipal->Show();
}

void GuiLogin::OnTextLoginUserEnter( wxCommandEvent& event )  {
	OnClickLoginLogin(event);
}

void GuiLogin::OnTextLoginPassEnter( wxCommandEvent& event )  {
	OnClickLoginLogin(event);
}

