///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/statline.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/dialog.h>
#include <wx/radiobox.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MenuLogin
///////////////////////////////////////////////////////////////////////////////
class MenuLogin : public wxFrame
{
	private:

	protected:
		wxPanel* Login;
		wxStaticText* m_staticText13;
		wxTextCtrl* camLoginUser;
		wxStaticText* m_staticText12;
		wxTextCtrl* camLoginPass;
		wxButton* m_button13;
		wxButton* m_button12;
		wxPanel* MenuPrincipal;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxStaticLine* m_staticline8;
		wxButton* botMenuInq;
		wxButton* botMenuInm;
		wxButton* botMenuPro;
		wxStaticLine* m_staticline6;
		wxButton* botMenuAdmin;
		wxButton* botMenuLogout;
		wxPanel* MenuAdmin;
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText61;
		wxStaticLine* m_staticline81;
		wxButton* botMenuUser;
		wxStaticLine* m_staticline61;
		wxButton* botMenuSalir;

		// Virtual event handlers, overide them in your derived class
		virtual void OnTextLoginUserEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextLoginUserMax( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextLoginPassEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextLoginPassMax( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickLoginLogin( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickLoginExit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInq( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickProp( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickMenuAdmin( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickMenuLogout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAdminUsers( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAdminExit( wxCommandEvent& event ) { event.Skip(); }


	public:

		MenuLogin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Sistema de Gestión Inmobiliaria"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MenuLogin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MenuUsers
///////////////////////////////////////////////////////////////////////////////
class MenuUsers : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* campoBusUser;
		wxButton* botBuscarUser;
		wxStaticLine* m_staticline21;
		wxGrid* GrillaUsuarios;
		wxStaticLine* m_staticline2;
		wxButton* botUserNuevo;
		wxButton* botUserEditar;
		wxButton* botUserElim;
		wxStaticLine* m_staticline7;
		wxButton* botAdminMenu;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickUserBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickUserNuevo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickUserEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickUserElim( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAdminSalir( wxCommandEvent& event ) { event.Skip(); }


	public:

		MenuUsers( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Usuarios - Nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~MenuUsers();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AgregarUsers
///////////////////////////////////////////////////////////////////////////////
class AgregarUsers : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* camUserNuevoUser;
		wxStaticText* m_staticText5;
		wxTextCtrl* camUserNuevoPass;
		wxRadioBox* selUserNuevoAdmin;
		wxButton* botUserNuevoSave;
		wxButton* botUserNuevoCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickUserNuevoSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickUserNuevoCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		AgregarUsers( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Usuarios - Nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~AgregarUsers();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EditUsers
///////////////////////////////////////////////////////////////////////////////
class EditUsers : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* camUserEditUser;
		wxStaticText* m_staticText5;
		wxTextCtrl* camUserEditPass;
		wxRadioBox* selUserEditAdmin;
		wxButton* botUserEditSave;
		wxButton* botUserEditCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickUserEditSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickUserEditCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		EditUsers( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Usuarios - Ver/Editar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~EditUsers();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MenuPropietarios
///////////////////////////////////////////////////////////////////////////////
class MenuPropietarios : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* campoBusProp;
		wxButton* botbuscarProp;
		wxStaticLine* m_staticline21;
		wxGrid* GrillaPropietarios;
		wxStaticLine* m_staticline2;
		wxButton* botPropMenu;
		wxStaticLine* m_staticline7;
		wxButton* botPropNuevo;
		wxButton* botPropEditar;
		wxButton* botPropElim;
		wxStaticLine* m_staticline6;
		wxButton* botPropLiq;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickPropBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropNuevo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropEdit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropElim( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropLiq( wxCommandEvent& event ) { event.Skip(); }


	public:

		MenuPropietarios( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Propietarios"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~MenuPropietarios();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AgregarPropietarios
///////////////////////////////////////////////////////////////////////////////
class AgregarPropietarios : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* camPropNuevoNom;
		wxStaticText* m_staticText5;
		wxTextCtrl* camPropNuevoApe;
		wxStaticText* m_staticText6;
		wxTextCtrl* camPropNuevoDni;
		wxStaticText* m_staticText7;
		wxTextCtrl* camPropNuevoDom;
		wxStaticText* m_staticText8;
		wxTextCtrl* camPropNuevoTel;
		wxStaticText* m_staticText9;
		wxChoice* choNuevoPropSitIva;
		wxStaticText* m_staticText10;
		wxSpinCtrlDouble* spinPropNuevoCam;
		wxStaticText* m_staticText11;
		wxTextCtrl* camPropNuevoCuix;
		wxStaticText* m_staticText16;
		wxTextCtrl* camPropNuevoEmail;
		wxButton* botPropNuevoSave;
		wxButton* botPropNuevoCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickPropNuevoSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropNuevoCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		AgregarPropietarios( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Propietarios - Nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~AgregarPropietarios();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EditPropietarios
///////////////////////////////////////////////////////////////////////////////
class EditPropietarios : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* camPropEditNom;
		wxStaticText* m_staticText5;
		wxTextCtrl* camPropEditApe;
		wxStaticText* m_staticText6;
		wxTextCtrl* camPropEditDni;
		wxStaticText* m_staticText7;
		wxTextCtrl* camPropEditDom;
		wxStaticText* m_staticText8;
		wxTextCtrl* camPropEditTel;
		wxStaticText* m_staticText9;
		wxChoice* choEditPropSitIva;
		wxStaticText* m_staticText10;
		wxSpinCtrlDouble* spinPropEditCam;
		wxStaticText* m_staticText11;
		wxTextCtrl* camPropEditCuix;
		wxStaticText* m_staticText16;
		wxTextCtrl* camPropEditEmail;
		wxButton* botPropEditSave;
		wxButton* botPropEditCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickPropEditSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickPropEditCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		EditPropietarios( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Propietarios - Ver/Editar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~EditPropietarios();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MenuInmuebles
///////////////////////////////////////////////////////////////////////////////
class MenuInmuebles : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* campoBusInm;
		wxButton* botbuscarInm;
		wxStaticLine* m_staticline21;
		wxGrid* GrillaInmuebles;
		wxStaticLine* m_staticline2;
		wxButton* botInmMenu;
		wxStaticLine* m_staticline7;
		wxButton* botInmNuevo;
		wxButton* botInmEditar;
		wxButton* botInmElim;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickInmBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInmMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInmNuevo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInmEdit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInmElim( wxCommandEvent& event ) { event.Skip(); }


	public:

		MenuInmuebles( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Inmuebles"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~MenuInmuebles();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AgregarInmuebles
///////////////////////////////////////////////////////////////////////////////
class AgregarInmuebles : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText7;
		wxTextCtrl* camInmNuevoDom;
		wxStaticText* m_staticText86;
		wxComboBox* camInmNuevoProp;
		wxStaticText* m_staticText87;
		wxComboBox* camInmNuevoInq;
		wxStaticText* m_staticText88;
		wxSpinCtrlDouble* spinInmNuevoMA;
		wxButton* botInmNuevoSave;
		wxButton* botInmNuevoCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickInmNuevoSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInmNuevoCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		AgregarInmuebles( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Inmuebles - Nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~AgregarInmuebles();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EditInmuebles
///////////////////////////////////////////////////////////////////////////////
class EditInmuebles : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText7;
		wxTextCtrl* camInmEditDom;
		wxStaticText* m_staticText86;
		wxComboBox* camInmEditProp;
		wxStaticText* m_staticText87;
		wxComboBox* camInmEditInq;
		wxStaticText* m_staticText88;
		wxSpinCtrlDouble* spinInmEditMA;
		wxButton* botInmEditSave;
		wxButton* botInmEditCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickInmEditSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInmEditCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		EditInmuebles( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Inmuebles - Ver/Editar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~EditInmuebles();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MenuInquilinos
///////////////////////////////////////////////////////////////////////////////
class MenuInquilinos : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* campoBusInq;
		wxButton* botbuscarInq;
		wxStaticLine* m_staticline21;
		wxGrid* GrillaInquilinos;
		wxStaticLine* m_staticline2;
		wxButton* botInqMenu;
		wxStaticLine* m_staticline7;
		wxButton* botInqNuevo;
		wxButton* botInqEditar;
		wxButton* botInqElim;
		wxStaticLine* m_staticline6;
		wxButton* botPropLiq;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickInqBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqNuevo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqEdit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqElim( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqLiq( wxCommandEvent& event ) { event.Skip(); }


	public:

		MenuInquilinos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Inquilinos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~MenuInquilinos();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AgregarInquilinos
///////////////////////////////////////////////////////////////////////////////
class AgregarInquilinos : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* camInqNuevoNom;
		wxStaticText* m_staticText5;
		wxTextCtrl* camInqNuevoApe;
		wxStaticText* m_staticText6;
		wxTextCtrl* camInqNuevoDni;
		wxStaticText* m_staticText7;
		wxTextCtrl* camInqNuevoDom;
		wxStaticText* m_staticText8;
		wxTextCtrl* camInqNuevoTel;
		wxStaticText* m_staticText9;
		wxChoice* choNuevoInqSitIva;
		wxStaticText* m_staticText11;
		wxTextCtrl* camInqNuevoCuix;
		wxStaticText* m_staticText16;
		wxTextCtrl* camInqNuevoEmail;
		wxButton* botInqNuevoSave;
		wxButton* botInqNuevoCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickInqNuevoSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqNuevoCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		AgregarInquilinos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Inquilinos - Nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~AgregarInquilinos();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EditInquilinos
///////////////////////////////////////////////////////////////////////////////
class EditInquilinos : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* camInqEditNom;
		wxStaticText* m_staticText5;
		wxTextCtrl* camInqEditApe;
		wxStaticText* m_staticText6;
		wxTextCtrl* camInqEditDni;
		wxStaticText* m_staticText7;
		wxTextCtrl* camInqEditDom;
		wxStaticText* m_staticText8;
		wxTextCtrl* camInqEditTel;
		wxStaticText* m_staticText9;
		wxChoice* choEditInqSitIva;
		wxStaticText* m_staticText11;
		wxTextCtrl* camInqEditCuix;
		wxStaticText* m_staticText16;
		wxTextCtrl* camInqEditEmail;
		wxButton* botInqEditSave;
		wxButton* botInqEditCanc;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClickInqEditSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickInqEditCancel( wxCommandEvent& event ) { event.Skip(); }


	public:

		EditInquilinos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SGI - Módulo Inquilinos - Editar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_DIALOG_STYLE );
		~EditInquilinos();

};

