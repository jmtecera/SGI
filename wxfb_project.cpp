///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

MenuLogin::MenuLogin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	Login = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	Login->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	Login->SetMinSize( wxSize( 800,600 ) );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );


	bSizer23->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( Login, wxID_ANY, wxT("Usuario:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer21->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camLoginUser = new wxTextCtrl( Login, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !camLoginUser->HasFlag( wxTE_MULTILINE ) )
	{
	camLoginUser->SetMaxLength( 16 );
	}
	#else
	camLoginUser->SetMaxLength( 16 );
	#endif
	bSizer21->Add( camLoginUser, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer23->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( Login, wxID_ANY, wxT("Contraseña:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer22->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camLoginPass = new wxTextCtrl( Login, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD );
	#ifdef __WXGTK__
	if ( !camLoginPass->HasFlag( wxTE_MULTILINE ) )
	{
	camLoginPass->SetMaxLength( 16 );
	}
	#else
	camLoginPass->SetMaxLength( 16 );
	#endif
	bSizer22->Add( camLoginPass, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer23->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_button13 = new wxButton( Login, wxID_ANY, wxT("Iniciar Sesión"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button12 = new wxButton( Login, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button12, 0, wxALL, 5 );


	bSizer23->Add( bSizer20, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer23->Add( 0, 0, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	Login->SetSizer( bSizer23 );
	Login->Layout();
	bSizer23->Fit( Login );
	bSizer19->Add( Login, 1, wxEXPAND | wxALL, 5 );

	MenuPrincipal = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	MenuPrincipal->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	MenuPrincipal->Hide();
	MenuPrincipal->SetMinSize( wxSize( 800,600 ) );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText5 = new wxStaticText( MenuPrincipal, wxID_ANY, wxT("Sistema de Gestión Inmobiliaria"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont( wxFont( 36, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer8->Add( m_staticText5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_staticText6 = new wxStaticText( MenuPrincipal, wxID_ANY, wxT("Menú Principal"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer8->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline8 = new wxStaticLine( MenuPrincipal, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer8->Add( m_staticline8, 0, wxEXPAND | wxALL, 5 );


	bSizer->Add( bSizer8, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	botMenuInq = new wxButton( MenuPrincipal, wxID_ANY, wxT("Inquilinos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer->Add( botMenuInq, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	botMenuInm = new wxButton( MenuPrincipal, wxID_ANY, wxT("Inmuebles"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer->Add( botMenuInm, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	botMenuPro = new wxButton( MenuPrincipal, wxID_ANY, wxT("Propietarios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer->Add( botMenuPro, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline6 = new wxStaticLine( MenuPrincipal, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );

	botMenuAdmin = new wxButton( MenuPrincipal, wxID_ANY, wxT("Administrar"), wxDefaultPosition, wxDefaultSize, 0 );
	botMenuAdmin->Hide();

	bSizer24->Add( botMenuAdmin, 0, wxALL, 5 );


	bSizer24->Add( 0, 0, 1, wxEXPAND, 5 );

	botMenuLogout = new wxButton( MenuPrincipal, wxID_ANY, wxT("Cerrar Sesión"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( botMenuLogout, 0, wxALL, 5 );


	bSizer->Add( bSizer24, 0, wxEXPAND, 5 );


	MenuPrincipal->SetSizer( bSizer );
	MenuPrincipal->Layout();
	bSizer->Fit( MenuPrincipal );
	bSizer19->Add( MenuPrincipal, 1, wxEXPAND | wxALL, 5 );

	MenuAdmin = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	MenuAdmin->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	MenuAdmin->Hide();
	MenuAdmin->SetMinSize( wxSize( 800,600 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );

	m_staticText51 = new wxStaticText( MenuAdmin, wxID_ANY, wxT("Sistema de Gestión Inmobiliaria"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	m_staticText51->SetFont( wxFont( 36, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer81->Add( m_staticText51, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_staticText61 = new wxStaticText( MenuAdmin, wxID_ANY, wxT("Administración"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	m_staticText61->SetFont( wxFont( 24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer81->Add( m_staticText61, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline81 = new wxStaticLine( MenuAdmin, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer81->Add( m_staticline81, 0, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer81, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	botMenuUser = new wxButton( MenuAdmin, wxID_ANY, wxT("Usuarios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( botMenuUser, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	m_staticline61 = new wxStaticLine( MenuAdmin, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer1->Add( m_staticline61, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxVERTICAL );

	botMenuSalir = new wxButton( MenuAdmin, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( botMenuSalir, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer1->Add( bSizer241, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	MenuAdmin->SetSizer( bSizer1 );
	MenuAdmin->Layout();
	bSizer1->Fit( MenuAdmin );
	bSizer19->Add( MenuAdmin, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();
	bSizer19->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	camLoginUser->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MenuLogin::OnTextLoginUserEnter ), NULL, this );
	camLoginUser->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( MenuLogin::OnTextLoginUserMax ), NULL, this );
	camLoginPass->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MenuLogin::OnTextLoginPassEnter ), NULL, this );
	camLoginPass->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( MenuLogin::OnTextLoginPassMax ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickLoginLogin ), NULL, this );
	m_button12->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickLoginExit ), NULL, this );
	botMenuInq->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickInq ), NULL, this );
	botMenuInm->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickInm ), NULL, this );
	botMenuPro->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickProp ), NULL, this );
	botMenuAdmin->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickMenuAdmin ), NULL, this );
	botMenuLogout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickMenuLogout ), NULL, this );
	botMenuUser->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickAdminUsers ), NULL, this );
	botMenuSalir->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickAdminExit ), NULL, this );
}

MenuLogin::~MenuLogin()
{
	// Disconnect Events
	camLoginUser->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MenuLogin::OnTextLoginUserEnter ), NULL, this );
	camLoginUser->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( MenuLogin::OnTextLoginUserMax ), NULL, this );
	camLoginPass->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MenuLogin::OnTextLoginPassEnter ), NULL, this );
	camLoginPass->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( MenuLogin::OnTextLoginPassMax ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickLoginLogin ), NULL, this );
	m_button12->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickLoginExit ), NULL, this );
	botMenuInq->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickInq ), NULL, this );
	botMenuInm->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickInm ), NULL, this );
	botMenuPro->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickProp ), NULL, this );
	botMenuAdmin->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickMenuAdmin ), NULL, this );
	botMenuLogout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickMenuLogout ), NULL, this );
	botMenuUser->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickAdminUsers ), NULL, this );
	botMenuSalir->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuLogin::OnClickAdminExit ), NULL, this );

}

MenuUsers::MenuUsers( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Búsqueda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer20->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	campoBusUser = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( campoBusUser, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botBuscarUser = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( botBuscarUser, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer20, 0, wxEXPAND, 5 );

	m_staticline21 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline21, 0, wxEXPAND | wxALL, 5 );

	GrillaUsuarios = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	GrillaUsuarios->CreateGrid( 0, 2 );
	GrillaUsuarios->EnableEditing( false );
	GrillaUsuarios->EnableGridLines( true );
	GrillaUsuarios->EnableDragGridSize( false );
	GrillaUsuarios->SetMargins( 0, 0 );

	// Columns
	GrillaUsuarios->SetColSize( 0, 650 );
	GrillaUsuarios->SetColSize( 1, 80 );
	GrillaUsuarios->EnableDragColMove( false );
	GrillaUsuarios->EnableDragColSize( true );
	GrillaUsuarios->SetColLabelSize( 30 );
	GrillaUsuarios->SetColLabelValue( 0, wxT("Usuario") );
	GrillaUsuarios->SetColLabelValue( 1, wxT("Admin") );
	GrillaUsuarios->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	GrillaUsuarios->EnableDragRowSize( false );
	GrillaUsuarios->SetRowLabelSize( 50 );
	GrillaUsuarios->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	GrillaUsuarios->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer51->Add( GrillaUsuarios, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	botUserNuevo = new wxButton( this, wxID_ANY, wxT("Nuevo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botUserNuevo, 0, wxALL, 5 );

	botUserEditar = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botUserEditar, 0, wxALL, 5 );

	botUserElim = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botUserElim, 0, wxALL, 5 );


	bSizer23->Add( bSizer21, 0, 0, 5 );


	bSizer22->Add( bSizer23, 1, wxALIGN_CENTER_VERTICAL, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer22->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	botAdminMenu = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( botAdminMenu, 0, wxALL, 5 );


	bSizer51->Add( bSizer22, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer51 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botBuscarUser->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserBuscar ), NULL, this );
	botUserNuevo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserNuevo ), NULL, this );
	botUserEditar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserEditar ), NULL, this );
	botUserElim->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserElim ), NULL, this );
	botAdminMenu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickAdminSalir ), NULL, this );
}

MenuUsers::~MenuUsers()
{
	// Disconnect Events
	botBuscarUser->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserBuscar ), NULL, this );
	botUserNuevo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserNuevo ), NULL, this );
	botUserEditar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserEditar ), NULL, this );
	botUserElim->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickUserElim ), NULL, this );
	botAdminMenu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuUsers::OnClickAdminSalir ), NULL, this );

}

AgregarUsers::AgregarUsers( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Usuario"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camUserNuevoUser = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( camUserNuevoUser, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Contraseña"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camUserNuevoPass = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( camUserNuevoPass, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	wxString selUserNuevoAdminChoices[] = { wxT("No"), wxT("Si") };
	int selUserNuevoAdminNChoices = sizeof( selUserNuevoAdminChoices ) / sizeof( wxString );
	selUserNuevoAdmin = new wxRadioBox( this, wxID_ANY, wxT("Administrador"), wxDefaultPosition, wxDefaultSize, selUserNuevoAdminNChoices, selUserNuevoAdminChoices, 1, wxRA_SPECIFY_COLS );
	selUserNuevoAdmin->SetSelection( 0 );
	bSizer28->Add( selUserNuevoAdmin, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botUserNuevoSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botUserNuevoSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botUserNuevoCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botUserNuevoCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botUserNuevoSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarUsers::OnClickUserNuevoSave ), NULL, this );
	botUserNuevoCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarUsers::OnClickUserNuevoCancel ), NULL, this );
}

AgregarUsers::~AgregarUsers()
{
	// Disconnect Events
	botUserNuevoSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarUsers::OnClickUserNuevoSave ), NULL, this );
	botUserNuevoCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarUsers::OnClickUserNuevoCancel ), NULL, this );

}

EditUsers::EditUsers( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Usuario"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camUserEditUser = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( camUserEditUser, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Contraseña"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camUserEditPass = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( camUserEditPass, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	wxString selUserEditAdminChoices[] = { wxT("No"), wxT("Si") };
	int selUserEditAdminNChoices = sizeof( selUserEditAdminChoices ) / sizeof( wxString );
	selUserEditAdmin = new wxRadioBox( this, wxID_ANY, wxT("Administrador"), wxDefaultPosition, wxDefaultSize, selUserEditAdminNChoices, selUserEditAdminChoices, 1, wxRA_SPECIFY_COLS );
	selUserEditAdmin->SetSelection( 0 );
	bSizer28->Add( selUserEditAdmin, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botUserEditSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botUserEditSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botUserEditCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botUserEditCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botUserEditSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditUsers::OnClickUserEditSave ), NULL, this );
	botUserEditCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditUsers::OnClickUserEditCancel ), NULL, this );
}

EditUsers::~EditUsers()
{
	// Disconnect Events
	botUserEditSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditUsers::OnClickUserEditSave ), NULL, this );
	botUserEditCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditUsers::OnClickUserEditCancel ), NULL, this );

}

MenuPropietarios::MenuPropietarios( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Búsqueda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer20->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	campoBusProp = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( campoBusProp, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botbuscarProp = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( botbuscarProp, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer20, 0, wxEXPAND, 5 );

	m_staticline21 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline21, 0, wxEXPAND | wxALL, 5 );

	GrillaPropietarios = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	GrillaPropietarios->CreateGrid( 0, 5 );
	GrillaPropietarios->EnableEditing( false );
	GrillaPropietarios->EnableGridLines( true );
	GrillaPropietarios->EnableDragGridSize( false );
	GrillaPropietarios->SetMargins( 0, 0 );

	// Columns
	GrillaPropietarios->SetColSize( 0, 180 );
	GrillaPropietarios->SetColSize( 1, 180 );
	GrillaPropietarios->SetColSize( 2, 100 );
	GrillaPropietarios->SetColSize( 3, 150 );
	GrillaPropietarios->SetColSize( 4, 120 );
	GrillaPropietarios->EnableDragColMove( false );
	GrillaPropietarios->EnableDragColSize( false );
	GrillaPropietarios->SetColLabelSize( 30 );
	GrillaPropietarios->SetColLabelValue( 0, wxT("Nombre") );
	GrillaPropietarios->SetColLabelValue( 1, wxT("Apellido") );
	GrillaPropietarios->SetColLabelValue( 2, wxT("Comisión") );
	GrillaPropietarios->SetColLabelValue( 3, wxT("CUIT") );
	GrillaPropietarios->SetColLabelValue( 4, wxT("Liquidado") );
	GrillaPropietarios->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	GrillaPropietarios->EnableDragRowSize( false );
	GrillaPropietarios->SetRowLabelSize( 50 );
	GrillaPropietarios->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	GrillaPropietarios->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer51->Add( GrillaPropietarios, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	botPropMenu = new wxButton( this, wxID_ANY, wxT("Menú Principal"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( botPropMenu, 0, wxALL, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer22->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	botPropNuevo = new wxButton( this, wxID_ANY, wxT("Nuevo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botPropNuevo, 0, wxALL, 5 );

	botPropEditar = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botPropEditar, 0, wxALL, 5 );

	botPropElim = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botPropElim, 0, wxALL, 5 );

	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer21->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );

	botPropLiq = new wxButton( this, wxID_ANY, wxT("Liquidar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botPropLiq, 0, wxALL, 5 );


	bSizer23->Add( bSizer21, 0, wxALIGN_RIGHT, 5 );


	bSizer22->Add( bSizer23, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer22, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer51 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botbuscarProp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropBuscar ), NULL, this );
	botPropMenu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropMenu ), NULL, this );
	botPropNuevo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropNuevo ), NULL, this );
	botPropEditar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropEdit ), NULL, this );
	botPropElim->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropElim ), NULL, this );
	botPropLiq->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropLiq ), NULL, this );
}

MenuPropietarios::~MenuPropietarios()
{
	// Disconnect Events
	botbuscarProp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropBuscar ), NULL, this );
	botPropMenu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropMenu ), NULL, this );
	botPropNuevo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropNuevo ), NULL, this );
	botPropEditar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropEdit ), NULL, this );
	botPropElim->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropElim ), NULL, this );
	botPropLiq->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuPropietarios::OnClickPropLiq ), NULL, this );

}

AgregarPropietarios::AgregarPropietarios( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( camPropNuevoNom, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoApe = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( camPropNuevoApe, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( camPropNuevoDni, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoDom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( camPropNuevoDom, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Teléfono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoTel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( camPropNuevoTel, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Sit. Frente al IVA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer15->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString choNuevoPropSitIvaChoices[] = { wxT("IVA Responsable Inscripto"), wxT("Monotributista"), wxT("Consumidor Final"), wxT("IVA Exento") };
	int choNuevoPropSitIvaNChoices = sizeof( choNuevoPropSitIvaChoices ) / sizeof( wxString );
	choNuevoPropSitIva = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choNuevoPropSitIvaNChoices, choNuevoPropSitIvaChoices, 0 );
	choNuevoPropSitIva->SetSelection( 0 );
	bSizer15->Add( choNuevoPropSitIva, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Comisión (%)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer16->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	spinPropNuevoCam = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0.000000, 0.5 );
	spinPropNuevoCam->SetDigits( 2 );
	bSizer16->Add( spinPropNuevoCam, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer16, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("CUIT / CUIL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer17->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoCuix = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( camPropNuevoCuix, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Email"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer28->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropNuevoEmail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( camPropNuevoEmail, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botPropNuevoSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botPropNuevoSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botPropNuevoCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botPropNuevoCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botPropNuevoSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarPropietarios::OnClickPropNuevoSave ), NULL, this );
	botPropNuevoCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarPropietarios::OnClickPropNuevoCancel ), NULL, this );
}

AgregarPropietarios::~AgregarPropietarios()
{
	// Disconnect Events
	botPropNuevoSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarPropietarios::OnClickPropNuevoSave ), NULL, this );
	botPropNuevoCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarPropietarios::OnClickPropNuevoCancel ), NULL, this );

}

EditPropietarios::EditPropietarios( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( camPropEditNom, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditApe = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( camPropEditApe, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( camPropEditDni, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditDom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( camPropEditDom, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Teléfono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditTel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( camPropEditTel, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Sit. Frente al IVA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer15->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString choEditPropSitIvaChoices[] = { wxT("IVA Responsable Inscripto"), wxT("Monotributista"), wxT("Consumidor Final"), wxT("IVA Exento") };
	int choEditPropSitIvaNChoices = sizeof( choEditPropSitIvaChoices ) / sizeof( wxString );
	choEditPropSitIva = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choEditPropSitIvaNChoices, choEditPropSitIvaChoices, 0 );
	choEditPropSitIva->SetSelection( 0 );
	bSizer15->Add( choEditPropSitIva, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Comisión (%)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer16->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	spinPropEditCam = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0.000000, 0.5 );
	spinPropEditCam->SetDigits( 2 );
	bSizer16->Add( spinPropEditCam, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer16, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("CUIT / CUIL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer17->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditCuix = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( camPropEditCuix, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Email"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer28->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camPropEditEmail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( camPropEditEmail, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botPropEditSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botPropEditSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botPropEditCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botPropEditCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botPropEditSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPropietarios::OnClickPropEditSave ), NULL, this );
	botPropEditCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPropietarios::OnClickPropEditCancel ), NULL, this );
}

EditPropietarios::~EditPropietarios()
{
	// Disconnect Events
	botPropEditSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPropietarios::OnClickPropEditSave ), NULL, this );
	botPropEditCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPropietarios::OnClickPropEditCancel ), NULL, this );

}

MenuInmuebles::MenuInmuebles( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Búsqueda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer20->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	campoBusInm = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( campoBusInm, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botbuscarInm = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( botbuscarInm, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer20, 0, wxEXPAND, 5 );

	m_staticline21 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline21, 0, wxEXPAND | wxALL, 5 );

	GrillaInmuebles = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	GrillaInmuebles->CreateGrid( 0, 4 );
	GrillaInmuebles->EnableEditing( false );
	GrillaInmuebles->EnableGridLines( true );
	GrillaInmuebles->EnableDragGridSize( false );
	GrillaInmuebles->SetMargins( 0, 0 );

	// Columns
	GrillaInmuebles->SetColSize( 0, 230 );
	GrillaInmuebles->SetColSize( 1, 180 );
	GrillaInmuebles->SetColSize( 2, 180 );
	GrillaInmuebles->SetColSize( 3, 140 );
	GrillaInmuebles->EnableDragColMove( false );
	GrillaInmuebles->EnableDragColSize( false );
	GrillaInmuebles->SetColLabelSize( 30 );
	GrillaInmuebles->SetColLabelValue( 0, wxT("Domicilio") );
	GrillaInmuebles->SetColLabelValue( 1, wxT("Propietario") );
	GrillaInmuebles->SetColLabelValue( 2, wxT("Inquilino") );
	GrillaInmuebles->SetColLabelValue( 3, wxT("Monto Alquiler") );
	GrillaInmuebles->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	GrillaInmuebles->EnableDragRowSize( false );
	GrillaInmuebles->SetRowLabelSize( 50 );
	GrillaInmuebles->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	GrillaInmuebles->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer51->Add( GrillaInmuebles, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	botInmMenu = new wxButton( this, wxID_ANY, wxT("Menú Principal"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( botInmMenu, 0, wxALL, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer22->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	botInmNuevo = new wxButton( this, wxID_ANY, wxT("Nuevo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botInmNuevo, 0, wxALL, 5 );

	botInmEditar = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botInmEditar, 0, wxALL, 5 );

	botInmElim = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botInmElim, 0, wxALL, 5 );


	bSizer23->Add( bSizer21, 0, wxALIGN_RIGHT, 5 );


	bSizer22->Add( bSizer23, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer22, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer51 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botbuscarInm->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmBuscar ), NULL, this );
	botInmMenu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmMenu ), NULL, this );
	botInmNuevo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmNuevo ), NULL, this );
	botInmEditar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmEdit ), NULL, this );
	botInmElim->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmElim ), NULL, this );
}

MenuInmuebles::~MenuInmuebles()
{
	// Disconnect Events
	botbuscarInm->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmBuscar ), NULL, this );
	botInmMenu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmMenu ), NULL, this );
	botInmNuevo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmNuevo ), NULL, this );
	botInmEditar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmEdit ), NULL, this );
	botInmElim->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInmuebles::OnClickInmElim ), NULL, this );

}

AgregarInmuebles::AgregarInmuebles( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer12->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInmNuevoDom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( camInmNuevoDom, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText86 = new wxStaticText( this, wxID_ANY, wxT("Propietario"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText86->Wrap( -1 );
	bSizer28->Add( m_staticText86, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInmNuevoProp = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	bSizer28->Add( camInmNuevoProp, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText87 = new wxStaticText( this, wxID_ANY, wxT("Inquilino"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText87->Wrap( -1 );
	bSizer13->Add( m_staticText87, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInmNuevoInq = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	bSizer13->Add( camInmNuevoInq, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText88 = new wxStaticText( this, wxID_ANY, wxT("Monto Alquiler"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	bSizer11->Add( m_staticText88, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	spinInmNuevoMA = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_WRAP, 0, 1e+07, 0.000000, 1 );
	spinInmNuevoMA->SetDigits( 0 );
	bSizer11->Add( spinInmNuevoMA, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botInmNuevoSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInmNuevoSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botInmNuevoCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInmNuevoCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botInmNuevoSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInmuebles::OnClickInmNuevoSave ), NULL, this );
	botInmNuevoCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInmuebles::OnClickInmNuevoCancel ), NULL, this );
}

AgregarInmuebles::~AgregarInmuebles()
{
	// Disconnect Events
	botInmNuevoSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInmuebles::OnClickInmNuevoSave ), NULL, this );
	botInmNuevoCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInmuebles::OnClickInmNuevoCancel ), NULL, this );

}

EditInmuebles::EditInmuebles( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer12->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInmEditDom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( camInmEditDom, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText86 = new wxStaticText( this, wxID_ANY, wxT("Propietario"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText86->Wrap( -1 );
	bSizer28->Add( m_staticText86, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInmEditProp = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	bSizer28->Add( camInmEditProp, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText87 = new wxStaticText( this, wxID_ANY, wxT("Inquilino"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText87->Wrap( -1 );
	bSizer13->Add( m_staticText87, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInmEditInq = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	bSizer13->Add( camInmEditInq, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText88 = new wxStaticText( this, wxID_ANY, wxT("Monto Alquiler"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	bSizer11->Add( m_staticText88, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	spinInmEditMA = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_WRAP, 0, 1e+07, 0.000000, 1 );
	spinInmEditMA->SetDigits( 0 );
	bSizer11->Add( spinInmEditMA, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botInmEditSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInmEditSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botInmEditCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInmEditCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botInmEditSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInmuebles::OnClickInmEditSave ), NULL, this );
	botInmEditCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInmuebles::OnClickInmEditCancel ), NULL, this );
}

EditInmuebles::~EditInmuebles()
{
	// Disconnect Events
	botInmEditSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInmuebles::OnClickInmEditSave ), NULL, this );
	botInmEditCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInmuebles::OnClickInmEditCancel ), NULL, this );

}

MenuInquilinos::MenuInquilinos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Búsqueda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer20->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	campoBusInq = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( campoBusInq, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botbuscarInq = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( botbuscarInq, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer20, 0, wxEXPAND, 5 );

	m_staticline21 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline21, 0, wxEXPAND | wxALL, 5 );

	GrillaInquilinos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	GrillaInquilinos->CreateGrid( 0, 4 );
	GrillaInquilinos->EnableEditing( false );
	GrillaInquilinos->EnableGridLines( true );
	GrillaInquilinos->EnableDragGridSize( false );
	GrillaInquilinos->SetMargins( 0, 0 );

	// Columns
	GrillaInquilinos->SetColSize( 0, 200 );
	GrillaInquilinos->SetColSize( 1, 200 );
	GrillaInquilinos->SetColSize( 2, 200 );
	GrillaInquilinos->SetColSize( 3, 130 );
	GrillaInquilinos->EnableDragColMove( false );
	GrillaInquilinos->EnableDragColSize( false );
	GrillaInquilinos->SetColLabelSize( 30 );
	GrillaInquilinos->SetColLabelValue( 0, wxT("Nombre") );
	GrillaInquilinos->SetColLabelValue( 1, wxT("Apellido") );
	GrillaInquilinos->SetColLabelValue( 2, wxT("CUIT/CUIL") );
	GrillaInquilinos->SetColLabelValue( 3, wxT("Liquidado") );
	GrillaInquilinos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	GrillaInquilinos->EnableDragRowSize( false );
	GrillaInquilinos->SetRowLabelSize( 50 );
	GrillaInquilinos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	GrillaInquilinos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer51->Add( GrillaInquilinos, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer51->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	botInqMenu = new wxButton( this, wxID_ANY, wxT("Menú Principal"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( botInqMenu, 0, wxALL, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer22->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	botInqNuevo = new wxButton( this, wxID_ANY, wxT("Nuevo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botInqNuevo, 0, wxALL, 5 );

	botInqEditar = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botInqEditar, 0, wxALL, 5 );

	botInqElim = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botInqElim, 0, wxALL, 5 );

	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer21->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );

	botPropLiq = new wxButton( this, wxID_ANY, wxT("Liquidar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( botPropLiq, 0, wxALL, 5 );


	bSizer23->Add( bSizer21, 0, wxALIGN_RIGHT, 5 );


	bSizer22->Add( bSizer23, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer51->Add( bSizer22, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer51 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botbuscarInq->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqBuscar ), NULL, this );
	botInqMenu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqMenu ), NULL, this );
	botInqNuevo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqNuevo ), NULL, this );
	botInqEditar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqEdit ), NULL, this );
	botInqElim->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqElim ), NULL, this );
	botPropLiq->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqLiq ), NULL, this );
}

MenuInquilinos::~MenuInquilinos()
{
	// Disconnect Events
	botbuscarInq->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqBuscar ), NULL, this );
	botInqMenu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqMenu ), NULL, this );
	botInqNuevo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqNuevo ), NULL, this );
	botInqEditar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqEdit ), NULL, this );
	botInqElim->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqElim ), NULL, this );
	botPropLiq->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MenuInquilinos::OnClickInqLiq ), NULL, this );

}

AgregarInquilinos::AgregarInquilinos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( camInqNuevoNom, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoApe = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( camInqNuevoApe, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( camInqNuevoDni, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoDom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( camInqNuevoDom, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Teléfono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoTel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( camInqNuevoTel, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Sit. Frente al IVA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer15->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString choNuevoInqSitIvaChoices[] = { wxT("IVA Responsable Inscripto"), wxT("Monotributista"), wxT("Consumidor Final"), wxT("IVA Exento") };
	int choNuevoInqSitIvaNChoices = sizeof( choNuevoInqSitIvaChoices ) / sizeof( wxString );
	choNuevoInqSitIva = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choNuevoInqSitIvaNChoices, choNuevoInqSitIvaChoices, 0 );
	choNuevoInqSitIva->SetSelection( 0 );
	bSizer15->Add( choNuevoInqSitIva, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("CUIT / CUIL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer17->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoCuix = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( camInqNuevoCuix, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Email"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer28->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqNuevoEmail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( camInqNuevoEmail, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botInqNuevoSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInqNuevoSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botInqNuevoCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInqNuevoCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botInqNuevoSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInquilinos::OnClickInqNuevoSave ), NULL, this );
	botInqNuevoCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInquilinos::OnClickInqNuevoCancel ), NULL, this );
}

AgregarInquilinos::~AgregarInquilinos()
{
	// Disconnect Events
	botInqNuevoSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInquilinos::OnClickInqNuevoSave ), NULL, this );
	botInqNuevoCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgregarInquilinos::OnClickInqNuevoCancel ), NULL, this );

}

EditInquilinos::EditInquilinos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 800,600 ), wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( camInqEditNom, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditApe = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( camInqEditApe, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( camInqEditDni, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditDom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( camInqEditDom, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Teléfono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditTel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( camInqEditTel, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Sit. Frente al IVA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer15->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString choEditInqSitIvaChoices[] = { wxT("IVA Responsable Inscripto"), wxT("Monotributista"), wxT("Consumidor Final"), wxT("IVA Exento") };
	int choEditInqSitIvaNChoices = sizeof( choEditInqSitIvaChoices ) / sizeof( wxString );
	choEditInqSitIva = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choEditInqSitIvaNChoices, choEditInqSitIvaChoices, 0 );
	choEditInqSitIva->SetSelection( 0 );
	bSizer15->Add( choEditInqSitIva, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("CUIT / CUIL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer17->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditCuix = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( camInqEditCuix, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Email"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer28->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	camInqEditEmail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( camInqEditEmail, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer8->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	botInqEditSave = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInqEditSave, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	botInqEditCanc = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( botInqEditCanc, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	botInqEditSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInquilinos::OnClickInqEditSave ), NULL, this );
	botInqEditCanc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInquilinos::OnClickInqEditCancel ), NULL, this );
}

EditInquilinos::~EditInquilinos()
{
	// Disconnect Events
	botInqEditSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInquilinos::OnClickInqEditSave ), NULL, this );
	botInqEditCanc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditInquilinos::OnClickInqEditCancel ), NULL, this );

}
