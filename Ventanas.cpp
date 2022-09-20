///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Ventanas.h"

///////////////////////////////////////////////////////////////////////////

PrincipalVentana::PrincipalVentana( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddTool( wxID_TOOL1, wxT("Person"), wxBitmap( wxT("Imagenes/personal.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Agregar Persona"), wxT("Permite agregar una persona."), NULL ); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddTool( wxID_TOOL2, wxT("Entrenamient"), wxBitmap( wxT("Imagenes/cache.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Entrenamiento"), wxT("Permite ir a los entrenamientos de una persona."), NULL ); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddTool( wxID_TOOL3, wxT("About"), wxBitmap( wxT("Imagenes/khelpcenter.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Autores"), wxT("Conoce los autores de Entrenamiento 1.0"), NULL ); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddTool( wxID_TOOL4, wxT("Exit"), wxBitmap( wxT("Imagenes/button_cancel (2).png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Salir"), wxT("Salir del programa"), NULL ); 
	
	m_toolBar1->Realize(); 
	
	Barra_Menu = new wxMenuBar( 0 );
	Menu_Inicio = new wxMenu();
	wxMenuItem* Submenu_Salir;
	Submenu_Salir = new wxMenuItem( Menu_Inicio, wxID_ANY, wxString( wxT("Salir") )+ wxT('\t') + wxT("Alt+F4") , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	Submenu_Salir->SetBitmaps( wxBitmap( wxT("Imagenes/exit.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	Submenu_Salir->SetBitmap( wxBitmap( wxT("Imagenes/exit.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	Menu_Inicio->Append( Submenu_Salir );
	
	Barra_Menu->Append( Menu_Inicio, wxT("Inicio") ); 
	
	Menu_Persona = new wxMenu();
	wxMenuItem* Submenu_Agregar_Persona;
	Submenu_Agregar_Persona = new wxMenuItem( Menu_Persona, wxID_ANY, wxString( wxT("Agregar Persona") )+ wxT('\t') + wxT("Ctrl+N") , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	Submenu_Agregar_Persona->SetBitmaps( wxBitmap( wxT("Imagenes/personal (2).png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	Submenu_Agregar_Persona->SetBitmap( wxBitmap( wxT("Imagenes/personal (2).png"), wxBITMAP_TYPE_ANY ) );
	#endif
	Menu_Persona->Append( Submenu_Agregar_Persona );
	
	wxMenuItem* Submenu_Explorador_Persona;
	Submenu_Explorador_Persona = new wxMenuItem( Menu_Persona, wxID_ANY, wxString( wxT("Explorador de Persona") )+ wxT('\t') + wxT("Ctrl+B") , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	Submenu_Explorador_Persona->SetBitmaps( wxBitmap( wxT("Imagenes/inline_table.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	Submenu_Explorador_Persona->SetBitmap( wxBitmap( wxT("Imagenes/inline_table.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	Menu_Persona->Append( Submenu_Explorador_Persona );
	
	Barra_Menu->Append( Menu_Persona, wxT("Persona") ); 
	
	Menu_Entrenamiento = new wxMenu();
	wxMenuItem* Submenu_Explorador_Entrenamiento;
	Submenu_Explorador_Entrenamiento = new wxMenuItem( Menu_Entrenamiento, wxID_ANY, wxString( wxT("Explorar Entrenamiento") )+ wxT('\t') + wxT("Ctrl+A") , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	Submenu_Explorador_Entrenamiento->SetBitmaps( wxBitmap( wxT("Imagenes/inline_table.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	Submenu_Explorador_Entrenamiento->SetBitmap( wxBitmap( wxT("Imagenes/inline_table.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	Menu_Entrenamiento->Append( Submenu_Explorador_Entrenamiento );
	
	Barra_Menu->Append( Menu_Entrenamiento, wxT("Entrenamiento") ); 
	
	Menu_Acerca = new wxMenu();
	wxMenuItem* Submenu_Manual_Usuario;
	Submenu_Manual_Usuario = new wxMenuItem( Menu_Acerca, wxID_ANY, wxString( wxT("Abrir Manual de Usuario") ) + wxT('\t') + wxT("Ctrl+U"), wxEmptyString, wxITEM_NORMAL );
	Menu_Acerca->Append( Submenu_Manual_Usuario );
	
	wxMenuItem* Submenu_Manual_Referencia;
	Submenu_Manual_Referencia = new wxMenuItem( Menu_Acerca, wxID_ANY, wxString( wxT("Abrir Manual de Referencia") )+ wxT('\t') + wxT("Ctrl+R") , wxEmptyString, wxITEM_NORMAL );
	Menu_Acerca->Append( Submenu_Manual_Referencia );
	
	wxMenuItem* Submenu_Autores;
	Submenu_Autores = new wxMenuItem( Menu_Acerca, wxID_ANY, wxString( wxT("Autores") )+ wxT('\t') + wxT("Ctrl+L") , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	Submenu_Autores->SetBitmaps( wxBitmap( wxT("Imagenes/consulting.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	Submenu_Autores->SetBitmap( wxBitmap( wxT("Imagenes/consulting.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	Menu_Acerca->Append( Submenu_Autores );
	
	Barra_Menu->Append( Menu_Acerca, wxT("Acerca De") ); 
	
	this->SetMenuBar( Barra_Menu );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 0, 0, 0 );
	
	wxBoxSizer* bSizer129;
	bSizer129 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel1->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Trebuchet MS") ) );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );
	
	m_staticline1 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer131->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 1, 3, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->AddGrowableRow( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText31 = new wxStaticText( m_panel1, wxID_ANY, wxT("Buscar usuario en el registro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	fgSizer1->Add( m_staticText31, 0, wxALL, 5 );
	
	m_bitmap12 = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( wxT("Imagenes/search.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_bitmap12, 0, wxALL, 5 );
	
	Boton_Busqueda_Registros = new wxButton( m_panel1, wxID_ANY, wxT("Registros"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( Boton_Busqueda_Registros, 0, wxALL, 5 );
	
	
	bSizer131->Add( fgSizer1, 0, 0, 5 );
	
	m_bitmap10 = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( wxT("Imagenes/can-stock-photo_csp2136194 - copia (2).jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap10->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	
	bSizer131->Add( m_bitmap10, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer130;
	bSizer130 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap24 = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( wxT("Imagenes/filenew.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer130->Add( m_bitmap24, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Registrar = new wxButton( m_panel1, wxID_ANY, wxT("&Registra"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer130->Add( Boton_Registrar, 0, wxALL|wxALIGN_BOTTOM, 5 );
	
	m_bitmap25 = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( wxT("Imagenes/exit.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer130->Add( m_bitmap25, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Salir = new wxButton( m_panel1, wxID_ANY, wxT("&Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer130->Add( Boton_Salir, 0, wxALIGN_BOTTOM|wxALL, 5 );
	
	
	bSizer131->Add( bSizer130, 0, wxALIGN_RIGHT, 5 );
	
	
	m_panel1->SetSizer( bSizer131 );
	m_panel1->Layout();
	bSizer131->Fit( m_panel1 );
	bSizer129->Add( m_panel1, 1, wxEXPAND, 5 );
	
	
	gSizer1->Add( bSizer129, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( gSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( PrincipalVentana::Bclose ) );
	this->Connect( wxID_TOOL1, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_Person ) );
	this->Connect( wxID_TOOL2, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_Entrenamient ) );
	this->Connect( wxID_TOOL3, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_About ) );
	this->Connect( wxID_TOOL4, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_Exit ) );
	this->Connect( Submenu_Salir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnSalir ) );
	this->Connect( Submenu_Agregar_Persona->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnAgregarPersona ) );
	this->Connect( Submenu_Explorador_Persona->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnExplorarPersona ) );
	this->Connect( Submenu_Explorador_Entrenamiento->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnExplorarEntrenamiento ) );
	this->Connect( Submenu_Manual_Usuario->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnManualUsuario ) );
	this->Connect( Submenu_Manual_Referencia->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnManualReferencia ) );
	this->Connect( Submenu_Autores->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnAutores ) );
	Boton_Busqueda_Registros->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PrincipalVentana::Click_Boton_Busqueda_Registros ), NULL, this );
	Boton_Registrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PrincipalVentana::Click_Boton_Registrar ), NULL, this );
	Boton_Salir->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PrincipalVentana::Click_Boton_Salir ), NULL, this );
}

PrincipalVentana::~PrincipalVentana()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( PrincipalVentana::Bclose ) );
	this->Disconnect( wxID_TOOL1, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_Person ) );
	this->Disconnect( wxID_TOOL2, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_Entrenamient ) );
	this->Disconnect( wxID_TOOL3, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_About ) );
	this->Disconnect( wxID_TOOL4, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( PrincipalVentana::On_Tool_Exit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnSalir ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnAgregarPersona ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnExplorarPersona ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnExplorarEntrenamiento ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnManualUsuario ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnManualReferencia ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincipalVentana::OnAutores ) );
	Boton_Busqueda_Registros->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PrincipalVentana::Click_Boton_Busqueda_Registros ), NULL, this );
	Boton_Registrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PrincipalVentana::Click_Boton_Registrar ), NULL, this );
	Boton_Salir->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PrincipalVentana::Click_Boton_Salir ), NULL, this );
	
}

PersonaVentana::PersonaVentana( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxVERTICAL );
	
	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel2->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Trebuchet MS") ) );
	
	wxBoxSizer* bSizer148;
	bSizer148 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer150;
	bSizer150 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 1, 1, 0, 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Nombre = new wxStaticText( m_panel2, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Nombre->Wrap( -1 );
	bSizer41->Add( Texto_Nombre, 0, wxALL, 5 );
	
	tx_nombre = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_nombre->SetMaxLength( 0 ); 
	bSizer41->Add( tx_nombre, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer8->Add( bSizer41, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Apellido = new wxStaticText( m_panel2, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Apellido->Wrap( -1 );
	bSizer38->Add( Texto_Apellido, 0, wxALL|wxEXPAND, 5 );
	
	tx_apellido = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_apellido->SetMaxLength( 0 ); 
	bSizer38->Add( tx_apellido, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer8->Add( bSizer38, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer7;
	fgSizer7 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer7->SetFlexibleDirection( wxBOTH );
	fgSizer7->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Texto_DNI = new wxStaticText( m_panel2, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_DNI->Wrap( -1 );
	fgSizer7->Add( Texto_DNI, 0, wxALL, 5 );
	
	tx_dni = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_dni->SetMaxLength( 0 ); 
	fgSizer7->Add( tx_dni, 0, wxALL, 5 );
	
	
	fgSizer8->Add( fgSizer7, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Domicilio = new wxStaticText( m_panel2, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Domicilio->Wrap( -1 );
	bSizer36->Add( Texto_Domicilio, 0, wxALL, 5 );
	
	tx_domicilio = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_domicilio->SetMaxLength( 0 ); 
	bSizer36->Add( tx_domicilio, 1, wxALL, 5 );
	
	
	fgSizer8->Add( bSizer36, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Localidad = new wxStaticText( m_panel2, wxID_ANY, wxT("Localidad"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Localidad->Wrap( -1 );
	bSizer35->Add( Texto_Localidad, 0, wxALL, 5 );
	
	tx_localidad = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_localidad->SetMaxLength( 0 ); 
	bSizer35->Add( tx_localidad, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer8->Add( bSizer35, 0, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Texto_Peso = new wxStaticText( m_panel2, wxID_ANY, wxT("Peso"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Peso->Wrap( -1 );
	fgSizer11->Add( Texto_Peso, 0, wxALL, 5 );
	
	tx_peso = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_peso->SetMaxLength( 0 ); 
	fgSizer11->Add( tx_peso, 0, wxALL, 5 );
	
	m_staticText29 = new wxStaticText( m_panel2, wxID_ANY, wxT("Kilogramos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer11->Add( m_staticText29, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer8->Add( fgSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer351;
	bSizer351 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Altura = new wxStaticText( m_panel2, wxID_ANY, wxT("Altura"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Altura->Wrap( -1 );
	bSizer351->Add( Texto_Altura, 0, wxALL, 5 );
	
	tx_altura = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 60, 250, 165 );
	bSizer351->Add( tx_altura, 0, wxALL, 5 );
	
	centimetros = new wxStaticText( m_panel2, wxID_ANY, wxT("Centimetros"), wxDefaultPosition, wxDefaultSize, 0 );
	centimetros->Wrap( -1 );
	bSizer351->Add( centimetros, 0, wxALL, 5 );
	
	
	fgSizer8->Add( bSizer351, 1, 0, 5 );
	
	wxBoxSizer* bSizer153;
	bSizer153 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Fecha_Nacimiento = new wxStaticText( m_panel2, wxID_ANY, wxT("Fecha de Nacimiento"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Fecha_Nacimiento->Wrap( -1 );
	bSizer153->Add( Texto_Fecha_Nacimiento, 0, wxALL, 5 );
	
	tx_dia = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 31, 31 );
	bSizer153->Add( tx_dia, 0, wxALL, 5 );
	
	tx_barra = new wxStaticText( m_panel2, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	tx_barra->Wrap( -1 );
	bSizer153->Add( tx_barra, 0, wxALL, 5 );
	
	tx_mes = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 12, 12 );
	bSizer153->Add( tx_mes, 0, wxALL, 5 );
	
	tx_barra2 = new wxStaticText( m_panel2, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	tx_barra2->Wrap( -1 );
	bSizer153->Add( tx_barra2, 0, wxALL, 5 );
	
	tx_anio = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2050, 1924 );
	bSizer153->Add( tx_anio, 0, wxALL, 5 );
	
	
	fgSizer8->Add( bSizer153, 0, 0, 5 );
	
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );
	
	
	fgSizer8->Add( bSizer40, 1, wxEXPAND, 5 );
	
	
	bSizer151->Add( fgSizer8, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer149;
	bSizer149 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap3 = new wxStaticBitmap( m_panel2, wxID_ANY, wxBitmap( wxT("Imagenes/3floppy_unmount.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_bitmap3, 0, wxALL, 5 );
	
	
	bSizer149->Add( bSizer30, 1, wxEXPAND, 5 );
	
	Boton_Guardar = new wxButton( m_panel2, wxID_ANY, wxT("&Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer149->Add( Boton_Guardar, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap4 = new wxStaticBitmap( m_panel2, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancel.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_bitmap4, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer149->Add( bSizer32, 1, wxEXPAND, 5 );
	
	Boton_Salir = new wxButton( m_panel2, wxID_ANY, wxT("&Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer149->Add( Boton_Salir, 0, wxALL, 5 );
	
	
	bSizer151->Add( bSizer149, 0, wxALIGN_RIGHT, 5 );
	
	
	bSizer150->Add( bSizer151, 1, wxEXPAND, 5 );
	
	
	bSizer148->Add( bSizer150, 1, wxEXPAND, 5 );
	
	
	m_panel2->SetSizer( bSizer148 );
	m_panel2->Layout();
	bSizer148->Fit( m_panel2 );
	bSizer141->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer141 );
	this->Layout();
	bSizer141->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( PersonaVentana::Bclose ) );
	Boton_Guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PersonaVentana::Click_Boton_Guardar ), NULL, this );
	Boton_Salir->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PersonaVentana::Click_Boton_Salir ), NULL, this );
}

PersonaVentana::~PersonaVentana()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( PersonaVentana::Bclose ) );
	Boton_Guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PersonaVentana::Click_Boton_Guardar ), NULL, this );
	Boton_Salir->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PersonaVentana::Click_Boton_Salir ), NULL, this );
	
}

BuscadorVentana::BuscadorVentana( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	Boton_Buscador = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( Boton_Buscador, 0, wxALL, 5 );
	
	m_bitmap5 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/viewmag-.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_bitmap5, 0, wxALL, 5 );
	
	tx_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	tx_buscar->SetMaxLength( 0 ); 
	bSizer12->Add( tx_buscar, 1, wxALL|wxEXPAND, 5 );
	
	wxString Elecciones_BusquedaChoices[] = { wxT("Nombre"), wxT("Apellido"), wxT("Altura"), wxT("Peso") };
	int Elecciones_BusquedaNChoices = sizeof( Elecciones_BusquedaChoices ) / sizeof( wxString );
	Elecciones_Busqueda = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, Elecciones_BusquedaNChoices, Elecciones_BusquedaChoices, 0 );
	Elecciones_Busqueda->SetSelection( 0 );
	bSizer12->Add( Elecciones_Busqueda, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, wxEXPAND, 5 );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	m_scrolledWindow1->SetFont( wxFont( 8, 74, 90, 90, false, wxT("Trebuchet MS") ) );
	m_scrolledWindow1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	Grilla_Datos = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_Datos->CreateGrid( 0, 6 );
	Grilla_Datos->EnableEditing( false );
	Grilla_Datos->EnableGridLines( true );
	Grilla_Datos->SetGridLineColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	Grilla_Datos->EnableDragGridSize( false );
	Grilla_Datos->SetMargins( 0, 0 );
	
	// Columns
	Grilla_Datos->EnableDragColMove( true );
	Grilla_Datos->EnableDragColSize( true );
	Grilla_Datos->SetColLabelSize( 30 );
	Grilla_Datos->SetColLabelValue( 0, wxT("Apellido") );
	Grilla_Datos->SetColLabelValue( 1, wxT("Nombre") );
	Grilla_Datos->SetColLabelValue( 2, wxT("Peso") );
	Grilla_Datos->SetColLabelValue( 3, wxT("Altura") );
	Grilla_Datos->SetColLabelValue( 4, wxT("Edad") );
	Grilla_Datos->SetColLabelValue( 5, wxT("DNI") );
	Grilla_Datos->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_Datos->EnableDragRowSize( true );
	Grilla_Datos->SetRowLabelSize( 80 );
	Grilla_Datos->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	Grilla_Datos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer14->Add( Grilla_Datos, 1, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow1->SetSizer( bSizer14 );
	m_scrolledWindow1->Layout();
	bSizer14->Fit( m_scrolledWindow1 );
	bSizer11->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap11 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/Close.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_bitmap11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Eliminar = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( Boton_Eliminar, 0, wxALL, 5 );
	
	
	bSizer13->Add( bSizer15, 0, 0, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap15 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/edit.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_bitmap15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Editar = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( Boton_Editar, 0, wxALL, 5 );
	
	m_bitmap13 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/plus.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_bitmap13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Agregar_Entrenamiento = new wxButton( this, wxID_ANY, wxT("Agregar Entrenamiento"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( Boton_Agregar_Entrenamiento, 1, wxALL|wxALIGN_BOTTOM, 5 );
	
	m_bitmap14 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/oscilloscope.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_bitmap14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Mostrar_Graficas = new wxButton( this, wxID_ANY, wxT("Mostrar Graficas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( Boton_Mostrar_Graficas, 1, wxALL, 5 );
	
	
	bSizer13->Add( bSizer16, 1, wxEXPAND, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( BuscadorVentana::BClose ) );
	Boton_Buscador->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::OnBuscar ), NULL, this );
	tx_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BuscadorVentana::OnBuscar ), NULL, this );
	Grilla_Datos->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BuscadorVentana::DobleClickGrilla ), NULL, this );
	Grilla_Datos->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BuscadorVentana::ClickGrilla ), NULL, this );
	Boton_Eliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Eliminar ), NULL, this );
	Boton_Editar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Editar ), NULL, this );
	Boton_Agregar_Entrenamiento->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Agregar_Entrenamiento ), NULL, this );
	Boton_Mostrar_Graficas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Mostrar_Graficas ), NULL, this );
}

BuscadorVentana::~BuscadorVentana()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( BuscadorVentana::BClose ) );
	Boton_Buscador->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::OnBuscar ), NULL, this );
	tx_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BuscadorVentana::OnBuscar ), NULL, this );
	Grilla_Datos->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( BuscadorVentana::DobleClickGrilla ), NULL, this );
	Grilla_Datos->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BuscadorVentana::ClickGrilla ), NULL, this );
	Boton_Eliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Eliminar ), NULL, this );
	Boton_Editar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Editar ), NULL, this );
	Boton_Agregar_Entrenamiento->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Agregar_Entrenamiento ), NULL, this );
	Boton_Mostrar_Graficas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana::Click_Boton_Mostrar_Graficas ), NULL, this );
	
}

EntrenamientoVentana::EntrenamientoVentana( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer135;
	bSizer135 = new wxBoxSizer( wxVERTICAL );
	
	Datos_del_Entrenamiento = new wxStaticText( this, wxID_ANY, wxT("Datos del Entrenamiento"), wxDefaultPosition, wxDefaultSize, 0 );
	Datos_del_Entrenamiento->Wrap( -1 );
	Datos_del_Entrenamiento->SetFont( wxFont( 8, 74, 90, 90, false, wxT("Copperplate Gothic Bold") ) );
	
	bSizer135->Add( Datos_del_Entrenamiento, 0, wxALL, 5 );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Tiempo = new wxStaticText( this, wxID_ANY, wxT("Tiempo"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Tiempo->Wrap( -1 );
	Texto_Tiempo->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Trebuchet MS") ) );
	
	bSizer42->Add( Texto_Tiempo, 0, wxALL, 5 );
	
	tx_tiempo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_tiempo->SetMaxLength( 0 ); 
	bSizer42->Add( tx_tiempo, 0, wxALL, 5 );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Minutos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer42->Add( m_staticText28, 0, wxALL, 5 );
	
	
	fgSizer2->Add( bSizer42, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Dia_Entrenamiento = new wxStaticText( this, wxID_ANY, wxT("Dia del entrenamiento"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Dia_Entrenamiento->Wrap( -1 );
	Texto_Dia_Entrenamiento->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Trebuchet MS") ) );
	
	bSizer43->Add( Texto_Dia_Entrenamiento, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer153;
	bSizer153 = new wxBoxSizer( wxHORIZONTAL );
	
	tx_dia = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 1, 31, 4 );
	bSizer153->Add( tx_dia, 0, wxALL, 5 );
	
	tx_barra1 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	tx_barra1->Wrap( -1 );
	bSizer153->Add( tx_barra1, 0, wxALL, 5 );
	
	tx_mes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 1, 12, 3 );
	bSizer153->Add( tx_mes, 0, wxALL, 5 );
	
	Texto_Barra2 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Barra2->Wrap( -1 );
	bSizer153->Add( Texto_Barra2, 0, wxALL, 5 );
	
	tx_anio = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 2050, 2014 );
	bSizer153->Add( tx_anio, 0, wxALL, 5 );
	
	
	bSizer43->Add( bSizer153, 0, wxEXPAND, 5 );
	
	
	fgSizer2->Add( bSizer43, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Deporte = new wxStaticText( this, wxID_ANY, wxT("Deporte"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Deporte->Wrap( -1 );
	Texto_Deporte->SetFont( wxFont( 8, 76, 90, 92, false, wxT("Trebuchet MS") ) );
	
	bSizer44->Add( Texto_Deporte, 0, wxALL, 5 );
	
	wxString Eleccion_DeporteChoices[] = { wxT("Basquet"), wxT("Bicicleta"), wxT("Boxeo"), wxT("Caminar"), wxT("Correr"), wxT("Futbol"), wxT("Natacion"), wxT("Remo"), wxT("Tennis") };
	int Eleccion_DeporteNChoices = sizeof( Eleccion_DeporteChoices ) / sizeof( wxString );
	Eleccion_Deporte = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, Eleccion_DeporteNChoices, Eleccion_DeporteChoices, 0 );
	Eleccion_Deporte->SetSelection( 0 );
	Eleccion_Deporte->SetFont( wxFont( 8, 74, 90, 90, false, wxT("Copperplate Gothic Bold") ) );
	Eleccion_Deporte->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );
	Eleccion_Deporte->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );
	
	bSizer44->Add( Eleccion_Deporte, 0, wxALL, 5 );
	
	
	fgSizer2->Add( bSizer44, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	Texto_Intensidad = new wxStaticText( this, wxID_ANY, wxT("Intensidad"), wxDefaultPosition, wxDefaultSize, 0 );
	Texto_Intensidad->Wrap( -1 );
	Texto_Intensidad->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Trebuchet MS") ) );
	
	bSizer48->Add( Texto_Intensidad, 0, wxALL, 5 );
	
	wxString Eleccion_IntensidadChoices[] = { wxT("Baja"), wxT("Alta") };
	int Eleccion_IntensidadNChoices = sizeof( Eleccion_IntensidadChoices ) / sizeof( wxString );
	Eleccion_Intensidad = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, Eleccion_IntensidadNChoices, Eleccion_IntensidadChoices, 0 );
	Eleccion_Intensidad->SetSelection( 0 );
	Eleccion_Intensidad->SetFont( wxFont( 8, 74, 90, 90, false, wxT("Copperplate Gothic Bold") ) );
	Eleccion_Intensidad->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );
	Eleccion_Intensidad->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );
	
	bSizer48->Add( Eleccion_Intensidad, 0, wxALL, 5 );
	
	
	fgSizer2->Add( bSizer48, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_bitmap12 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/tre.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer11->Add( m_bitmap12, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap6 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/3floppy_unmount (2).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_bitmap6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	Boton_Guardar = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( Boton_Guardar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer20->Add( bSizer37, 1, wxALIGN_BOTTOM|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap7 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/error (3).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_bitmap7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	Boton_Salir = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( Boton_Salir, 0, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer20->Add( bSizer36, 0, wxALIGN_BOTTOM|wxALIGN_RIGHT, 5 );
	
	
	fgSizer11->Add( bSizer20, 0, wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );
	
	
	fgSizer2->Add( fgSizer11, 1, wxEXPAND, 5 );
	
	
	bSizer135->Add( fgSizer2, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer135 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Boton_Guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EntrenamientoVentana::Click_Boton_Guardar ), NULL, this );
	Boton_Salir->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EntrenamientoVentana::Click_Boton_Salir ), NULL, this );
}

EntrenamientoVentana::~EntrenamientoVentana()
{
	// Disconnect Events
	Boton_Guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EntrenamientoVentana::Click_Boton_Guardar ), NULL, this );
	Boton_Salir->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EntrenamientoVentana::Click_Boton_Salir ), NULL, this );
	
}

AutoresVentana::AutoresVentana( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap1 = new wxStaticBitmap( m_panel3, wxID_ANY, wxBitmap( wxT("marca-fich.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_bitmap1, 1, wxALL, 5 );
	
	
	bSizer23->Add( bSizer24, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText19 = new wxStaticText( m_panel3, wxID_ANY, wxT("Sistema para entrenamientos y quema de calorias"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	m_staticText19->SetFont( wxFont( 8, 74, 93, 92, true, wxT("Tahoma") ) );
	
	bSizer28->Add( m_staticText19, 0, wxALL, 5 );
	
	m_staticText20 = new wxStaticText( m_panel3, wxID_ANY, wxT("Creadores:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( 8, 74, 93, 92, false, wxT("Tahoma") ) );
	
	bSizer28->Add( m_staticText20, 0, wxALL, 5 );
	
	m_staticText21 = new wxStaticText( m_panel3, wxID_ANY, wxT("Andermatten Mauricio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer28->Add( m_staticText21, 0, wxALL, 5 );
	
	m_staticText22 = new wxStaticText( m_panel3, wxID_ANY, wxT("Salmeron Facundo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer28->Add( m_staticText22, 0, wxALL, 5 );
	
	m_staticText23 = new wxStaticText( m_panel3, wxID_ANY, wxT("Vaccaro Lucas"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer28->Add( m_staticText23, 0, wxALL, 5 );
	
	m_staticText24 = new wxStaticText( m_panel3, wxID_ANY, wxT("Catedra:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	m_staticText24->SetFont( wxFont( 8, 74, 93, 92, false, wxT("Tahoma") ) );
	
	bSizer28->Add( m_staticText24, 0, wxALL, 5 );
	
	m_staticText26 = new wxStaticText( m_panel3, wxID_ANY, wxT("Programacion Orientada a Objetos (POO)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer28->Add( m_staticText26, 0, wxALL, 5 );
	
	
	bSizer27->Add( bSizer28, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer23->Add( bSizer27, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	
	m_panel3->SetSizer( bSizer23 );
	m_panel3->Layout();
	bSizer23->Fit( m_panel3 );
	bSizer19->Add( m_panel3, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer19 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

AutoresVentana::~AutoresVentana()
{
}

BuscadorVentana2::BuscadorVentana2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	Boton_Buscador = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( Boton_Buscador, 0, wxALL, 5 );
	
	m_bitmap9 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/viewmag-.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_bitmap9, 0, wxALL, 5 );
	
	tx_buscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	tx_buscar->SetMaxLength( 0 ); 
	bSizer12->Add( tx_buscar, 1, wxALL|wxEXPAND, 5 );
	
	wxString Elecciones_BusquedaChoices[] = { wxT("Nombre"), wxT("Apellido") };
	int Elecciones_BusquedaNChoices = sizeof( Elecciones_BusquedaChoices ) / sizeof( wxString );
	Elecciones_Busqueda = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, Elecciones_BusquedaNChoices, Elecciones_BusquedaChoices, 0 );
	Elecciones_Busqueda->SetSelection( 0 );
	bSizer12->Add( Elecciones_Busqueda, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, wxEXPAND, 5 );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	m_scrolledWindow1->SetFont( wxFont( 8, 74, 90, 90, false, wxT("Trebuchet MS") ) );
	m_scrolledWindow1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	Grilla_Entrenamiento = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_Entrenamiento->CreateGrid( 0, 7 );
	Grilla_Entrenamiento->EnableEditing( false );
	Grilla_Entrenamiento->EnableGridLines( true );
	Grilla_Entrenamiento->SetGridLineColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	Grilla_Entrenamiento->EnableDragGridSize( false );
	Grilla_Entrenamiento->SetMargins( 0, 0 );
	
	// Columns
	Grilla_Entrenamiento->SetColSize( 0, 70 );
	Grilla_Entrenamiento->SetColSize( 1, 80 );
	Grilla_Entrenamiento->SetColSize( 2, 90 );
	Grilla_Entrenamiento->SetColSize( 3, 60 );
	Grilla_Entrenamiento->SetColSize( 4, 70 );
	Grilla_Entrenamiento->SetColSize( 5, 70 );
	Grilla_Entrenamiento->SetColSize( 6, 60 );
	Grilla_Entrenamiento->EnableDragColMove( true );
	Grilla_Entrenamiento->EnableDragColSize( true );
	Grilla_Entrenamiento->SetColLabelSize( 30 );
	Grilla_Entrenamiento->SetColLabelValue( 0, wxT("Fecha") );
	Grilla_Entrenamiento->SetColLabelValue( 1, wxT("Apellido") );
	Grilla_Entrenamiento->SetColLabelValue( 2, wxT("Nombre") );
	Grilla_Entrenamiento->SetColLabelValue( 3, wxT("Calorias") );
	Grilla_Entrenamiento->SetColLabelValue( 4, wxT("Deporte") );
	Grilla_Entrenamiento->SetColLabelValue( 5, wxT("Intensidad") );
	Grilla_Entrenamiento->SetColLabelValue( 6, wxT("Tiempo") );
	Grilla_Entrenamiento->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_Entrenamiento->EnableDragRowSize( true );
	Grilla_Entrenamiento->SetRowLabelSize( 80 );
	Grilla_Entrenamiento->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	Grilla_Entrenamiento->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer14->Add( Grilla_Entrenamiento, 1, wxALL|wxEXPAND, 5 );
	
	
	m_scrolledWindow1->SetSizer( bSizer14 );
	m_scrolledWindow1->Layout();
	bSizer14->Fit( m_scrolledWindow1 );
	bSizer11->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap10 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/Close.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_bitmap10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	Boton_Eliminar = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( Boton_Eliminar, 0, wxALL|wxALIGN_BOTTOM, 5 );
	
	
	bSizer13->Add( bSizer15, 0, 0, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Boton_Buscador->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana2::OnBuscar ), NULL, this );
	tx_buscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BuscadorVentana2::OnBuscar ), NULL, this );
	Grilla_Entrenamiento->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BuscadorVentana2::ClickGrilla ), NULL, this );
	Boton_Eliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana2::Click_Boton_Eliminar ), NULL, this );
}

BuscadorVentana2::~BuscadorVentana2()
{
	// Disconnect Events
	Boton_Buscador->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana2::OnBuscar ), NULL, this );
	tx_buscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( BuscadorVentana2::OnBuscar ), NULL, this );
	Grilla_Entrenamiento->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BuscadorVentana2::ClickGrilla ), NULL, this );
	Boton_Eliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscadorVentana2::Click_Boton_Eliminar ), NULL, this );
	
}

Graficas::Graficas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 1, 2, 0, 0 );
	
	Salida_2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("output.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( Salida_2, 1, wxALL|wxEXPAND, 5 );
	
	m_bitmap21 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("output2.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap21, 0, wxALL, 5 );
	
	
	this->SetSizer( gSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

Graficas::~Graficas()
{
}
