#include "V_Buscador22.h"
#include <wx/msgdlg.h>
#include <map>
#include "Persona.h"
#include "Definiciones.h"
#include <wx/grid.h>
#include <sstream>
#include <string>
#include "Application.h"
#include <iterator>
#include "V_Entrenamiento.h"
#include "Entrenamiento.h"
#include "Persona.h"
#include "Singleton.h"
#include <wx/string.h>
#include <fstream>
#include <iostream>
#include <algorithm>

#include <cctype>
#include <cstddef>
#include <vector>
#include <ios>
using namespace std;

V_Buscador22::V_Buscador22(wxWindow *parent) : BuscadorVentana2(parent) {
	int c_pra = VP.size();;
	Grilla_Entrenamiento->AppendRows(c_pra); 
	for (int i=0;i<c_pra;i++) CargarFila(i);
	Grilla_Entrenamiento->SetSelectionMode(wxGrid::wxGridSelectRows); 
}


void V_Buscador22::Click_Boton_Eliminar( wxCommandEvent& event )  {
	if(Grilla_Entrenamiento->GetNumberRows()==0){
		wxMessageBox("No hay entrenamientos en la Grilla");
		}
	else{
		
	
	int fila_actual=Grilla_Entrenamiento->GetGridCursorRow();
	
	int res = wxMessageBox("Desea eliminar el Entrenamiento?",Grilla_Entrenamiento->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		Grilla_Entrenamiento->DeleteRows(fila_actual,1);
		Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia(); 
		//Leo el archivo para extraer los datos
		fstream archiv("Datos_Practicas.dat",ios::binary|ios::ate);
		
		int canti=archiv.tellg()/sizeof(Practicas);
		if(archiv.is_open()) {
			archiv.seekg(0,ios::beg);
			int cantidad=VP.size();
			for (int i=0;i<canti;i++){
				
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
				archiv.write((char*)&pra,sizeof(pra));
				
			}}
		archiv.close();
		
	
		
		
		
		
		vector<Practicas>::iterator per;
		per=VP.begin();
		for(int i=0;i<fila_actual;i++){
			per++;
			
		}
		
		/**Para sacarlo del txt*/
		Practicas prac;
		strcpy(prac.nombre,VP[fila_actual].nombre);
		strcpy(prac.apellido,VP[fila_actual].apellido);
		
		prac.dni=VP[fila_actual].dni;
		prac.dia=VP[fila_actual].dia;
		prac.mes=VP[fila_actual].mes;
		prac.anio=VP[fila_actual].anio;
		prac.minutos=VP[fila_actual].minutos;
		prac.tdep=VP[fila_actual].tdep;
		prac.tint=VP[fila_actual].tint;
		prac.calo=VP[fila_actual].calo;
		
		
		if(prac.mes<10){
			prac.anio=prac.anio*10;
		}
		if(prac.dia<10){
			prac.mes=prac.mes*10;
		}
		
		stringstream stream; 
		
		int numero=prac.dni; 
		string nombre_archivo; 
		stream << numero;
		nombre_archivo="Textos\\"+stream.str()+".txt";
		//nombre_archivo="Textos_Entrenamientos\\"+stream.str()+".txt";
		
		
		fstream archi(nombre_archivo.c_str(), ios::in|ios::out | ios::app);
		if (archi.is_open()){
			
			archi<<prac.anio<<prac.mes<<prac.dia<<" "<<-(prac.calo)<<"\n";
			
		}
		archi.close();
		
		
		
		
		
		
		//Lo vuelvo a escribir al archivo		
		int numer=VP.size();
		VP.erase(VP.begin()+fila_actual);
		VP.resize(numer-1);
		int hg;
		hg=VP.size();
		
		int y;
		ofstream archix("Datos_Practicas.dat",ios::binary);
		archix.seekp(0,ios::beg);
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
				
			}}
		archix.close();
		
		
		
		
		
		
	
		
		
	}
		
		
		
		
}}

void V_Buscador22::Click_Boton_Editar_Entrenamiento( wxCommandEvent& event )  {
	event.Skip();
}

void V_Buscador22::Click_Boton_Agregar_Entrenamiento( wxCommandEvent& event )  {
	event.Skip();
}

V_Buscador22::~V_Buscador22() {
	
}



void V_Buscador22::CargarFila (int i) {
	vector<Practicas>::iterator v;
	v=VP.begin();
	int cont=0;
	while(v!=VP.end()){
	int aux_1 = v->minutos;
	stringstream aux_2;
	aux_2 << aux_1;
	string aux_3 = aux_2.str();
	
	int aux_11 = v->tint;
	string aux_33;
	if(aux_11==Baja){
		aux_33="Baja";}
	else{
		aux_33="Alta";		
		
	}
	int di,me,an;
	di=v->dia;
	me=v->mes;
	an=v->anio;
	stringstream aux_d;
	stringstream aux_m;
	stringstream aux_a;
	aux_d<<di;
	string aux_dia=aux_d.str();
	aux_m<<me;
	string aux_mes=aux_m.str();
	aux_a<<an;
	string aux_anio=aux_a.str();
	string f=aux_dia+"/"+aux_mes+"/"+aux_anio;
	
	int cal =v->calo;
	stringstream aux_ca;
	aux_ca << cal;
	string calorias=aux_ca.str();
	
	string aux_333;
	int aux_111 = v->tdep;
	if(aux_111==basquet){
		aux_333="Basquet";
	}
	if(aux_111==bicicleta){
		aux_333="Bicicleta";
	}
	if(aux_111==boxeo){
		aux_333="Boxeo";
	}
	if(aux_111==caminar){
		aux_333="Caminar";
	}
	if(aux_111==correr){
		aux_333="Correr";
	}
	if(aux_111==futbol){
		aux_333="Futbol";
	}
	if(aux_111==natacion){
		aux_333="Natacion";
	}
	if(aux_111==remo){
		aux_333="Remo";
	}
	if(aux_111==tennis){
		aux_333="Tennis";
	}
	
	
	string t2=v->apellido;
	string t1=v->nombre;
	
	Grilla_Entrenamiento->SetCellValue(aux_3,cont,6);
	Grilla_Entrenamiento->SetCellValue(t1.c_str(),cont,2);
	Grilla_Entrenamiento->SetCellValue(t2.c_str(),cont,1);
	
	Grilla_Entrenamiento->SetCellValue(f,cont,0);
	Grilla_Entrenamiento->SetCellValue(calorias,cont,3);
	Grilla_Entrenamiento->SetCellValue(aux_33,cont,5);
	Grilla_Entrenamiento->SetCellValue(aux_333,cont,4);
	v++;cont++;
	}

}



void V_Buscador22::OnBuscar( wxCommandEvent& event )  {
	int num_opc=Elecciones_Busqueda->GetSelection();	
	if(num_opc==0){
		int fila_actual=Grilla_Entrenamiento->GetGridCursorRow();
		int resultado=buscar_nombre_ent(tx_buscar->GetValue().c_str(),fila_actual+1);
		if(resultado==-1)
			resultado=buscar_nombre_ent(tx_buscar->GetValue().c_str(),0);
		if(resultado==-1)
			wxMessageBox("No se encontro ninguna persona con ese nombre");
		else{
			Grilla_Entrenamiento->SetGridCursor(resultado,0); 
			Grilla_Entrenamiento->SelectRow(resultado);
		}
	}
		
	
	if(num_opc==1){
		int fila_actual=Grilla_Entrenamiento->GetGridCursorRow();
		int resultado=buscar_apellido_ent(tx_buscar->GetValue().c_str(),fila_actual+1);
		if(resultado==-1)
			resultado=buscar_apellido_ent(tx_buscar->GetValue().c_str(),0);
		if(resultado==-1)
			wxMessageBox("No se encontro ninguna persona con ese apellido");
		else{
			Grilla_Entrenamiento->SetGridCursor(resultado,0); 
			Grilla_Entrenamiento->SelectRow(resultado);
		}
	}}


int V_Buscador22::buscar_nombre_ent (string nomb, int pos_desde) {
	for(int i=0;i<nomb.length();i++){
		nomb[i]=tolower(nomb[i]);
	}
	nomb[0]=toupper(nomb[0]);
	size_t pos=0;
	pos=nomb.find(' ',pos);
	while(pos!=string::npos){
		nomb[pos+1]=toupper(nomb[pos+1]);
		pos=nomb.find(' ',pos+1);
	}
	for(int i=pos_desde; i<VP.size(); i++){
		Practicas p1=VP[i];
		string nom1=p1.nombre;
		if(nom1.find(nomb,0)!=string::npos){
			return i;
		}
	}
	return -1;
}


int V_Buscador22::buscar_apellido_ent (string apel, int pos_desde) {
	for(int i=0;i<apel.length();i++){
		apel[i]=tolower(apel[i]);
	}
	apel[0]=toupper(apel[0]);
	size_t pos=0;
	pos=apel.find(' ',pos);
	while(pos!=string::npos){
		apel[pos+1]=toupper(apel[pos+1]);
		pos=apel.find(' ',pos+1);
	}
	for(int i=pos_desde; i<VP.size(); i++){
		Practicas p1=VP[i];
		string ape1=p1.apellido;
		if(ape1.find(apel,0)!=string::npos){
			return i;
		}
	}
	return -1;
}

void V_Buscador22::ClickGrilla( wxGridEvent& event )  {
	int columna=event.GetCol(), c_pra=VP.size();
	switch(columna) {
	case 1: OrdenarPra(O_APELLIDO); break;
	case 2: OrdenarPra(O_NOMBRE); break;
	case 3: OrdenarPra(O_CALORIAS); break;
	case 4: OrdenarPra(O_DEPORTE); break;
	case 5: OrdenarPra(O_INTENSIDAD); break;
	case 6: OrdenarPra(O_TIEMPO); break;
	}
	for (int i=0;i<c_pra;i++) CargarFila(i); 
}


void V_Buscador22::OrdenarPra (Criterio cri) {
	switch (cri) {
	case O_APELLIDO: 
		sort(VP.begin(),VP.end(), criterio_apellido); 
		break;
	case O_NOMBRE:
		sort(VP.begin(),VP.end(), criterio_nombre);
		break;
	case O_CALORIAS:
		sort(VP.begin(),VP.end(), criterio_calorias);
		break;
	case O_DEPORTE:
		sort(VP.begin(),VP.end(), criterio_deporte);
		break;
	case O_INTENSIDAD:
		sort(VP.begin(),VP.end(), criterio_intensidad);
		break;
	case O_TIEMPO:
		sort(VP.begin(),VP.end(), criterio_tiempo);
		break;
}}

bool criterio_apellido(const Practicas & p1, const Practicas & p2) {
	string s1 = p1.apellido;
	string s2 = p2.apellido;
	return s1<s2;
}

bool criterio_nombre(const Practicas & p1, const Practicas & p2) {
	string s1 = p1.nombre;
	string s2 = p2.nombre;
	return s1<s2;
}

bool criterio_calorias(const Practicas & p1, const Practicas & p2) {
	float c1=p1.calo;
	float c2=p2.calo;
	return c1<c2;
}

bool criterio_deporte(const Practicas & p1, const Practicas & p2) {
	TipoDeporte t1=p1.tdep;
	TipoDeporte t2=p2.tdep;
	return t1<t2;
}

bool criterio_intensidad(const Practicas & p1, const Practicas & p2) {
	IntensidadDeporte i1=p1.tint;
	IntensidadDeporte i2=p2.tint;
	return i1<i2;
}

bool criterio_tiempo(const Practicas & p1, const Practicas & p2) {
	int t1=p1.minutos;
	int t2=p2.minutos;
	return t1<t2;
}

