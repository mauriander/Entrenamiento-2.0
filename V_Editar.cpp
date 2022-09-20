#include "V_Editar.h"
#include "Entrenamiento.h"
#include "Singleton.h"
#include <string>
#include <cstdlib>
#include "Persona.h"
#include <wx/msgdlg.h>
#include <wx/string.h>
#include <wx/valtext.h>
using namespace std;

V_Editar::V_Editar(wxWindow *parent, int cual) : PersonaVentana(parent) {
	posicion_persona=cual;
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	Persona &P=(*Mi_Entrenamiento)[cual];
	tx_nombre->SetValue(P.ver_nombre());
	tx_apellido->SetValue(P.ver_apellido());
	tx_dni->SetValue(wxString()<<P.ver_dni());
	tx_domicilio->SetValue(P.ver_domicilio());
	tx_localidad->SetValue(P.ver_localidad());
	tx_altura->SetValue(wxString()<<P.ver_altura());
	tx_peso->SetValue(wxString()<<P.ver_peso());
	tx_dia->SetValue(wxString()<<P.ver_dia());
	tx_mes->SetValue(wxString()<<P.ver_mes());
	tx_anio->SetValue(wxString()<<P.ver_anio());
	wxTextValidator _DNI(wxFILTER_NUMERIC);
	SetTitle(wxString()<<P.ver_apellido()+" "+P.ver_nombre()<<" "+wxString()<<P.ver_dni());
	tx_dni->SetValidator(_DNI);
}

void V_Editar::Bclose( wxCloseEvent& event )  {
	EndModal(0);}

void V_Editar::Click_Boton_Guardar( wxCommandEvent& event )  {
	string nombre,apellido,localidad,domicilio;
	int dni=0;
	int altura,dia,mes,anio; 
	float peso; 
	altura=(tx_altura->GetValue());
	peso=atof(tx_peso->GetValue());
	dni=atoi(tx_dni->GetValue());
	dia=(tx_dia->GetValue());
	mes=(tx_mes->GetValue());
	anio=(tx_anio->GetValue());
	nombre=tx_nombre->GetValue(); 
	apellido=tx_apellido->GetValue();
	localidad=tx_localidad->GetValue();
	domicilio=tx_domicilio->GetValue(); 
	Persona p(nombre,apellido,localidad,domicilio,dni,dia,mes,anio,altura,peso);
	string errores=p.validad_datos();
	if(errores.size())
		wxMessageBox(errores);
	else{
		Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
		string errores=Mi_Entrenamiento->validar_dni_edit(posicion_persona,p);
		if(errores.size())
			wxMessageBox(errores);
		else{
			(*Mi_Entrenamiento)[posicion_persona]=p;
			Mi_Entrenamiento->Guardar();
			EndModal(1);
		}
		}
	
	
	
	}
	
	
	


void V_Editar::Click_Boton_Salir( wxCommandEvent& event )  {
	EndModal(0);
}

V_Editar::~V_Editar() {
	
}

