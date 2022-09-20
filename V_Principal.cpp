#include "V_Principal.h"
#include <wx/icon.h>
#include "Entrenamiento.h"
#include "Singleton.h"
#include <wx/msgdlg.h>
#include <wx/wx.h>
#include "V_Persona.h"
#include "V_Buscador.h"
#include "V_Entrenamiento.h"
#include "Application.h"
#include "icono.xpm"
#include "V_Autores.h"
#include <wx/app.h>
#include "V_Buscador22.h"
#include <wx/event.h>
#include <fstream>
#include "Definiciones.h"

using namespace std;
V_Principal::V_Principal(wxWindow *parent) : PrincipalVentana(parent) {
	SetIcon(wxIcon(icono_xpm) );
	SetTitle("Entrenamiento 1.0");
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();


	

	ifstream archi("Datos_Practicas.dat",ios::binary|ios::ate);
	if (archi.is_open()) {
		int tamanio_archivo = archi.tellg();
		int cantidad_personas = tamanio_archivo/sizeof(Practicas);
		VP.resize(cantidad_personas);
		archi.seekg(0,ios::beg);
		for (int i=0;i<cantidad_personas;i++){
			
			Practicas pra;
			archi.read((char*)&pra,sizeof(pra));
			strcpy(VP[i].nombre,pra.nombre);
			strcpy(VP[i].apellido,pra.apellido);
			VP[i].dni=pra.dni;
			VP[i].dia=pra.dia;
			VP[i].mes=pra.mes;
			VP[i].anio=pra.anio;
			VP[i].minutos=pra.minutos;
			VP[i].tdep=pra.tdep;
			VP[i].tint=pra.tint;
			VP[i].calo=pra.calo;

			
			
		}
		
		

		archi.close();
	}
	Show();
}

void V_Principal::OnSalir( wxCommandEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir?"), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES)
		wxExit();
	else
		return;
}

void V_Principal::OnAgregarPersona( wxCommandEvent& event )  {
	NPersona = new V_Persona(this);
	NPersona->ShowModal();
	
}

void V_Principal::OnExplorarPersona( wxCommandEvent& event )  {
	NBuscador= new V_Buscador(this);
	NBuscador->ShowModal();
}

void V_Principal::OnGuardarPersona( wxCommandEvent& event )  {
	event.Skip();
}


void V_Principal::OnExplorarEntrenamiento( wxCommandEvent& event )  {
	NBuscador2= new V_Buscador22(this);
	NBuscador2->Show();
}

void V_Principal::OnGuardarEntrenamiento( wxCommandEvent& event )  {
	event.Skip();
}

void V_Principal::OnManualUsuario( wxCommandEvent& event )  {
	event.Skip();
}

void V_Principal::OnManualReferencia( wxCommandEvent& event )  {
	event.Skip();
}

void V_Principal::OnAutores( wxCommandEvent& event )  {
	V_Autores ventana_aux(this);
	ventana_aux.ShowModal();
}

void V_Principal::Click_Boton_Registrar( wxCommandEvent& event )  {
	NPersona = new V_Persona(this);
	NPersona->Show();
}

void V_Principal::Click_Boton_Salir( wxCommandEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir?"), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES)
		wxExit();
	else
		return;
}

V_Principal::~V_Principal() {
	
}



void V_Principal::Bclose( wxCloseEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir?"), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES)
		wxExit();
	else
		return;
}

void V_Principal::Click_Boton_Busqueda_Registros( wxCommandEvent& event )  {
	NBuscador= new V_Buscador(this);
	NBuscador->Show();
}

void V_Principal::On_Tool_Person( wxCommandEvent& event )  {
	NPersona = new V_Persona(this);
	NPersona->Show();
}

void V_Principal::On_Tool_Entrenamient( wxCommandEvent& event )  {
	NBuscador2= new V_Buscador22(this);
	NBuscador2->Show();
}

void V_Principal::On_Tool_About( wxCommandEvent& event )  {
	V_Autores ventana_aux(this);
	ventana_aux.ShowModal();
}

void V_Principal::On_Tool_Exit( wxCommandEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir?"), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES){
		
		
		wxExit();}
	else{
		return;}
}

