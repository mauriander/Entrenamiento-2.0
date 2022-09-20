#include "V_Persona.h"
#include <wx/msgdlg.h>
#include <wx/dialog.h>
#include <string>
#include "Persona.h"
#include "Singleton.h"
#include "Entrenamiento.h"
#include <cstdlib>
#include <wx/valtext.h>

using namespace std;

V_Persona::V_Persona(wxWindow *parent) : PersonaVentana(parent) {
	wxTextValidator _DNI(wxFILTER_NUMERIC);
	tx_dni->SetValidator(_DNI); 
}

void V_Persona::Click_Boton_Guardar( wxCommandEvent& event )  {
	string nombre,apellido,localidad,domicilio;
	int dni=0;
	int dia,mes,anio; 
	float peso; 
	int altura=(tx_altura->GetValue());
	peso=atof(tx_peso->GetValue());
	
	dni=atoi(tx_dni->GetValue());
	dia=(tx_dia->GetValue());
	mes=(tx_mes->GetValue());
	anio=(tx_anio->GetValue());
	nombre=tx_nombre->GetValue(); 
	apellido=tx_apellido->GetValue();
	localidad=tx_localidad->GetValue();
	domicilio=tx_domicilio->GetValue(); 
	Persona nuevap(nombre,apellido,localidad,domicilio,dni,dia,mes,anio,altura,peso);
	string errores=nuevap.validad_datos();
	if(errores.size())
		wxMessageBox(errores);
	else{
		Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
		string errores=Mi_Entrenamiento->validar_dni(nuevap);
		if (errores.size())
			wxMessageBox(errores);
		else{
			Mi_Entrenamiento->agregar_persona(nuevap);
			Mi_Entrenamiento->Guardar();
			EndModal(1);
		}
	}
	
}

void V_Persona::Click_Boton_Salir( wxCommandEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir de Persona?\n Recuerde que debe guardar los datos"), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES)
		wxDialog::EndModal( wxID_CANCEL );
	else
		return;
}

V_Persona::~V_Persona() {
	
}




void V_Persona::Bclose( wxCloseEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir de Persona?\n Recuerde que debe guardar los datos"), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES)
		wxDialog::EndModal( wxID_CANCEL );
	else
		return;
}

