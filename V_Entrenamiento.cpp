#include "V_Entrenamiento.h"
#include "Definiciones.h"
#include <wx/msgdlg.h>
#include "Persona.h"
#include "Deporte.h"
#include <wx/choice.h>
#include "Singleton.h"
#include <cstdlib>
#include <vector>
#include <map>
#include "Application.h"
#include <cstring>
#include <fstream>
#include <string>
#include <sstream>

#include <wx/textctrl.h>
#include "Entrenamiento.h"
using namespace std;


V_Entrenamiento::V_Entrenamiento(wxWindow *parent, int quien) : EntrenamientoVentana(parent) {
	
	this->quien=quien;
}




void V_Entrenamiento::Click_Boton_Guardar( wxCommandEvent& event )  {
	string errores;
	string wop;
	int leoo=atoi(tx_tiempo->GetValue());
	
	if(leoo<=0){
		errores+="Debe completar la grilla minutos correctamente\n";
	}
	int numero;
	numero =5000;
	
	if(leoo>numero){
	errores+="Valor no validos\n";
}
	if (errores.size()){
		wxMessageBox(errores);
	}
	else{
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	int tiempo=atoi(tx_tiempo->GetValue());
	int num_op=Eleccion_Deporte->GetSelection();
	int num_op_inte=Eleccion_Intensidad->GetSelection();
	float w;
	Practicas pr;
	Persona &p=(*Mi_Entrenamiento)[quien];
	if(num_op==0){
		pr.tdep=basquet;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(basquet,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(basquet,Alta,tiempo);
			pr.tint=Alta;
		}
	}
	if(num_op==1){
		pr.tdep=bicicleta;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(bicicleta,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(bicicleta,Alta,tiempo);
			pr.tint=Alta;
		}
	}
	if(num_op==2){
		pr.tdep=boxeo;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(boxeo,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(boxeo,Alta,tiempo);
			pr.tint=Alta;
		}}
	if(num_op==3){
		pr.tdep=caminar;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(caminar,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(caminar,Alta,tiempo);
			pr.tint=Alta;
		}}
	if(num_op==4){
		pr.tdep=correr;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(correr,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(correr,Alta,tiempo);
			pr.tint=Alta;
		}}
	if(num_op==5){
		pr.tdep=futbol;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(futbol,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(futbol,Alta,tiempo);
			pr.tint=Alta;
		}}
	if(num_op==6){
		pr.tdep=natacion;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(natacion,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(natacion,Alta,tiempo);
			pr.tint=Alta;
		}}
	if(num_op==7){
		pr.tdep=remo;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(remo,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(remo,Alta,tiempo);
			pr.tint=Alta;
		}}
	if(num_op==8){
		pr.tdep=tennis;
		if(num_op_inte==0){
			w=p.agregar_entrenamiento(tennis,Baja,tiempo);
			pr.tint=Baja;
		}
		else{
			w=p.agregar_entrenamiento(tennis,Alta,tiempo);
			pr.tint=Alta;
		}}
	
	
	strcpy(pr.nombre, p.ver_nombre().c_str());
	strcpy(pr.apellido, p.ver_apellido().c_str());
	pr.dni=p.ver_dni();
	pr.dia=tx_dia->GetValue();
	pr.mes=tx_mes->GetValue();
	pr.anio=tx_anio->GetValue();
	pr.minutos=atoi(tx_tiempo->GetValue());
	pr.calo=w;


	VP.push_back(pr);
	if(pr.mes<10){
		pr.anio=pr.anio*10;
	}
	if(pr.dia<10){
		pr.mes=pr.mes*10;
	}
	
	stringstream stream; 

	int numero=p.ver_dni();; 
	string nombre_archivo; 
	stream << numero;
	nombre_archivo="Textos\\"+stream.str()+".txt";
	//nombre_archivo="Textos_Entrenamientos\\"+stream.str()+".txt";
	string nombre_archivo5="Textos\\"+stream.str()+"5.txt";
		string nombre_archivo30="Textos\\"+stream.str()+"30.txt";
	fstream archi(nombre_archivo.c_str(), ios::in|ios::out | ios::app);
	if (!archi.is_open()){
		fstream archi(nombre_archivo.c_str(), ios::trunc | ios::in |ios::out | ios::app);
		archi<<pr.anio<<pr.mes<<pr.dia<<" "<<pr.calo<<"\n";
		
	}
	else{
		archi<<pr.anio<<pr.mes<<pr.dia<<" "<<pr.calo<<"\n";
	}
	archi.close();
	
	ofstream archix("Datos_Practicas.dat",ios::binary);
	if(archix.is_open()) {
		int cantidad=VP.size();
		for (int i=0;i<cantidad;i++){
			
			Practicas pra;
			strcpy(pra.nombre,VP[i].nombre);
			strcpy(pra.apellido,VP[i].apellido);
			
			pra.dni=VP[i].dni;
			pra.dia=VP[i].dia;
			pra.mes=VP[i].mes;
			pra.anio=VP[i].anio;
			pra.minutos=VP[i].minutos;
			pra.tdep=VP[i].tdep;
			pra.tint=VP[i].tint;
			pra.calo=VP[i].calo;
			archix.write((char*)&pra,sizeof(pra));
			
		}
		archix.close();
	}else{
		
		ofstream archix("Datos_Practicas.dat",ios::binary | ios::trunc);
		int cantidad=VP.size();
		for (int i=0;i<cantidad;i++){
			
			Practicas pra;
			strcpy(pra.nombre,VP[i].nombre);
			strcpy(pra.apellido,VP[i].apellido);
			
			pra.dni=VP[i].dni;
			pra.dia=VP[i].dia;
			pra.mes=VP[i].mes;
			pra.anio=VP[i].anio;
			pra.minutos=VP[i].minutos;
			pra.tdep=VP[i].tdep;
			pra.tint=VP[i].tint;
			pra.calo=VP[i].calo;
			archix.write((char*)&pra,sizeof(pra));
			archix.close();
		}}
	

	
EndModal(1);}
}
void V_Entrenamiento::Click_Boton_Salir( wxCommandEvent& event )  {
	if ((wxMessageBox(_T("Estás seguro que deseas salir del Entrenamiento?\n "), _T("Confirmación"), wxYES_NO | wxICON_QUESTION))== wxYES)
		wxDialog::EndModal( wxID_CANCEL );
	else
		return;
}

V_Entrenamiento::~V_Entrenamiento() {
	
}

