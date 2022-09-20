///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __VENTANAS_H__
#define __VENTANAS_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/toolbar.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/menu.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
#include <wx/dialog.h>
#include <wx/choice.h>
#include <wx/grid.h>
#include <wx/scrolwin.h>
#include <wx/valgen.h>

///////////////////////////////////////////////////////////////////////////

#define wxID_TOOL1 1000
#define wxID_TOOL2 1001
#define wxID_TOOL3 1002
#define wxID_TOOL4 1003

///////////////////////////////////////////////////////////////////////////////
/// Class PrincipalVentana
///////////////////////////////////////////////////////////////////////////////
class PrincipalVentana : public wxFrame 
{
	private:
	
	protected:
		wxToolBar* m_toolBar1;
		wxMenuBar* Barra_Menu;
		wxMenu* Menu_Inicio;
		wxMenu* Menu_Persona;
		wxMenu* Menu_Entrenamiento;
		wxMenu* Menu_Acerca;
		wxPanel* m_panel1;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText31;
		wxStaticBitmap* m_bitmap12;
		wxButton* Boton_Busqueda_Registros;
		wxStaticBitmap* m_bitmap10;
		wxStaticBitmap* m_bitmap24;
		wxButton* Boton_Registrar;
		wxStaticBitmap* m_bitmap25;
		wxButton* Boton_Salir;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Bclose( wxCloseEvent& event ) { event.Skip(); }
		virtual void On_Tool_Person( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Tool_Entrenamient( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Tool_About( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Tool_Exit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSalir( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAgregarPersona( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExplorarPersona( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExplorarEntrenamiento( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnManualUsuario( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnManualReferencia( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAutores( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Busqueda_Registros( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Registrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Salir( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PrincipalVentana( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Entrenamiento 1.0"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 476,435 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PrincipalVentana();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PersonaVentana
///////////////////////////////////////////////////////////////////////////////
class PersonaVentana : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panel2;
		wxStaticText* Texto_Nombre;
		wxTextCtrl* tx_nombre;
		wxStaticText* Texto_Apellido;
		wxTextCtrl* tx_apellido;
		wxStaticText* Texto_DNI;
		wxTextCtrl* tx_dni;
		wxStaticText* Texto_Domicilio;
		wxTextCtrl* tx_domicilio;
		wxStaticText* Texto_Localidad;
		wxTextCtrl* tx_localidad;
		wxStaticText* Texto_Peso;
		wxTextCtrl* tx_peso;
		wxStaticText* m_staticText29;
		wxStaticText* Texto_Altura;
		wxSpinCtrl* tx_altura;
		wxStaticText* centimetros;
		wxStaticText* Texto_Fecha_Nacimiento;
		wxSpinCtrl* tx_dia;
		wxStaticText* tx_barra;
		wxSpinCtrl* tx_mes;
		wxStaticText* tx_barra2;
		wxSpinCtrl* tx_anio;
		wxStaticBitmap* m_bitmap3;
		wxButton* Boton_Guardar;
		wxStaticBitmap* m_bitmap4;
		wxButton* Boton_Salir;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Bclose( wxCloseEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Guardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Salir( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PersonaVentana( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Editor de Personas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~PersonaVentana();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class BuscadorVentana
///////////////////////////////////////////////////////////////////////////////
class BuscadorVentana : public wxDialog 
{
	private:
	
	protected:
		wxButton* Boton_Buscador;
		wxStaticBitmap* m_bitmap5;
		wxTextCtrl* tx_buscar;
		wxChoice* Elecciones_Busqueda;
		wxScrolledWindow* m_scrolledWindow1;
		wxGrid* Grilla_Datos;
		wxStaticBitmap* m_bitmap11;
		wxButton* Boton_Eliminar;
		wxStaticBitmap* m_bitmap15;
		wxButton* Boton_Editar;
		wxStaticBitmap* m_bitmap13;
		wxButton* Boton_Agregar_Entrenamiento;
		wxStaticBitmap* m_bitmap14;
		wxButton* Boton_Mostrar_Graficas;
		
		// Virtual event handlers, overide them in your derived class
		virtual void BClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Eliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Editar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Agregar_Entrenamiento( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Mostrar_Graficas( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		BuscadorVentana( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 636,444 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~BuscadorVentana();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class EntrenamientoVentana
///////////////////////////////////////////////////////////////////////////////
class EntrenamientoVentana : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* Datos_del_Entrenamiento;
		wxStaticText* Texto_Tiempo;
		wxTextCtrl* tx_tiempo;
		wxStaticText* m_staticText28;
		wxStaticText* Texto_Dia_Entrenamiento;
		wxSpinCtrl* tx_dia;
		wxStaticText* tx_barra1;
		wxSpinCtrl* tx_mes;
		wxStaticText* Texto_Barra2;
		wxSpinCtrl* tx_anio;
		wxStaticText* Texto_Deporte;
		wxChoice* Eleccion_Deporte;
		wxStaticText* Texto_Intensidad;
		wxChoice* Eleccion_Intensidad;
		wxStaticBitmap* m_bitmap12;
		wxStaticBitmap* m_bitmap6;
		wxButton* Boton_Guardar;
		wxStaticBitmap* m_bitmap7;
		wxButton* Boton_Salir;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Click_Boton_Guardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Salir( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		EntrenamientoVentana( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 453,441 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~EntrenamientoVentana();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AutoresVentana
///////////////////////////////////////////////////////////////////////////////
class AutoresVentana : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panel3;
		wxStaticBitmap* m_bitmap1;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText24;
		wxStaticText* m_staticText26;
	
	public:
		
		AutoresVentana( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Acerca de.."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 650,200 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~AutoresVentana();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class BuscadorVentana2
///////////////////////////////////////////////////////////////////////////////
class BuscadorVentana2 : public wxDialog 
{
	private:
	
	protected:
		wxButton* Boton_Buscador;
		wxStaticBitmap* m_bitmap9;
		wxTextCtrl* tx_buscar;
		wxChoice* Elecciones_Busqueda;
		wxScrolledWindow* m_scrolledWindow1;
		wxGrid* Grilla_Entrenamiento;
		wxStaticBitmap* m_bitmap10;
		wxButton* Boton_Eliminar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void Click_Boton_Eliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		BuscadorVentana2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 635,455 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~BuscadorVentana2();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Graficas
///////////////////////////////////////////////////////////////////////////////
class Graficas : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* Salida_2;
		wxStaticBitmap* m_bitmap21;
	
	public:
		
		Graficas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1300,520 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Graficas();
	
};

#endif //__VENTANAS_H__
