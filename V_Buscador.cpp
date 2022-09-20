#include "V_Buscador.h"
#include <wx/msgdlg.h>
#include "Application.h"
#include "V_Entrenamiento.h"
#include "Entrenamiento.h"
#include "Persona.h"
#include "Singleton.h"
#include <sstream>
#include <string>
#include "V_Editar.h"
#include "V_Graficas.h"

using namespace std;

V_Buscador::V_Buscador(wxWindow *parent) : BuscadorVentana(parent) {
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	int c_pers = Mi_Entrenamiento->CantidadEntrenamientos();
	Grilla_Datos->AppendRows(c_pers); 
	for (int i=0;i<c_pers;i++) CargarFila(i);
	Grilla_Datos->SetSelectionMode(wxGrid::wxGridSelectRows); 
}




void V_Buscador::Click_Boton_Eliminar( wxCommandEvent& event )  {
	
	if(Grilla_Datos->GetNumberRows()==0){
		wxMessageBox("No hay Personas en la Grilla");
	}
	else{
	int fila_actual = Grilla_Datos->GetGridCursorRow();
	
	int res = wxMessageBox("Desea eliminar la persona?",Grilla_Datos->GetCellValue(fila_actual,0),wxYES_NO);
	
	if (res==wxYES) {
		Grilla_Datos->DeleteRows(fila_actual,1);
		Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia(); 
		Mi_Entrenamiento->eliminar_persona(fila_actual);
		Mi_Entrenamiento->Guardar();
	}
}}

void V_Buscador::Click_Boton_Editar( wxCommandEvent& event )  {
	int fila_actual = Grilla_Datos->GetGridCursorRow(); 
	V_Editar nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFila(fila_actual); 
	
}


V_Buscador::~V_Buscador() {
	
}

void V_Buscador::Click_Boton_Agregar_Entrenamiento( wxCommandEvent& event )  {
	int fila_actual=Grilla_Datos->GetGridCursorRow();
	V_Entrenamiento nueva_ventana(this, fila_actual);
	nueva_ventana.ShowModal();
	
}

void V_Buscador::Click_Boton_Mostrar_Graficas( wxCommandEvent& event )  {
	int fila_actual=Grilla_Datos->GetGridCursorRow();
	//V_Graficas nueva_ventana(this, fila_actual);
	//nueva_ventana.ShowModal();
	NGrafica = new V_Graficas(this,fila_actual);
	if(largor>100){
	NGrafica->Modificar(fila_actual);
	NGrafica->Close();
	
	NGrafica = new V_Graficas(this,fila_actual);
	NGrafica->Mostrar(fila_actual);
	NGrafica->Close();
	
	NGrafica = new V_Graficas(this,fila_actual);
	NGrafica->Modificar(fila_actual);
	NGrafica->Close();
	NGrafica = new V_Graficas(this,fila_actual);
	NGrafica->Mostrar(fila_actual);
	
	NGrafica->ShowModal();}
	else{
		wxMessageBox("La cantidad de datos es insufciente para realizar el ploteo  ");
	}

}



void V_Buscador::CargarFila (int i) {
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	Persona &p=(*Mi_Entrenamiento)[i];
	p.pasar_mayuscula();
	Grilla_Datos->SetCellValue(p.ver_apellido(),i,0);
	Grilla_Datos->SetCellValue(p.ver_nombre(),i,1);
	int aux_11 = p.ver_dni();
	stringstream aux_22; aux_22 << aux_11;
	string aux_33 = aux_22.str(); 
	Grilla_Datos->SetCellValue(aux_33,i,5); 
	int aux_1=p.ver_altura(); 
	stringstream aux_2; 
	aux_2<<aux_1;
	string aux_3=aux_2.str();
	Grilla_Datos->SetCellValue(aux_3,i,3); 
	int aux_1111=p.ver_peso(); 
	stringstream aux_2222;
	aux_2222<<aux_1111;
	string aux_3333=aux_2222.str(); 
	Grilla_Datos->SetCellValue(aux_3333,i,2);
	p.calcular_edad();
	int aux_111=p.ver_edad(); 
	stringstream _edad;
	_edad << aux_111; 
	string edad_ = _edad.str(); 
	Grilla_Datos->SetCellValue(edad_,i,4); 
}

void V_Buscador::BClose( wxCloseEvent& event )  {
	event.Skip();
}

void V_Buscador::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = Grilla_Datos->GetGridCursorRow();
	V_Editar nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFila(fila_actual); 
}

void V_Buscador::ClickGrilla( wxGridEvent& event )  {
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	int columna=event.GetCol(), c_pers=Mi_Entrenamiento->CantidadEntrenamientos();
	switch(columna) {
	case 0: Mi_Entrenamiento->Ordenar(ORDEN_APELLIDO); break;
	case 1: Mi_Entrenamiento->Ordenar(ORDEN_NOMBRE); break;
	case 2: Mi_Entrenamiento->Ordenar(ORDEN_PESO); break;
	case 3: Mi_Entrenamiento->Ordenar(ORDEN_ALTURA); break;
	case 4: Mi_Entrenamiento->Ordenar(ORDEN_EDAD); break;
	case 5: Mi_Entrenamiento->Ordenar(ORDEN_DNI); break;
	}
	for (int i=0;i<c_pers;i++) CargarFila(i); 
}

void V_Buscador::OnBuscar( wxCommandEvent& event )  {
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	int num_opc=Elecciones_Busqueda->GetSelection();
	
	if(num_opc==0){
		int fila_actual=Grilla_Datos->GetGridCursorRow();
		int resultado=Mi_Entrenamiento->buscar_nombre(tx_buscar->GetValue().c_str(),fila_actual+1);
		if(resultado==-1)
			resultado=Mi_Entrenamiento->buscar_nombre(tx_buscar->GetValue().c_str(),0);
		if(resultado==-1)
			wxMessageBox("No se encontro ninguna persona con ese nombre");
		else{
			Grilla_Datos->SetGridCursor(resultado,0); 
			Grilla_Datos->SelectRow(resultado);
		}
	}
	if(num_opc==1){
		int fila_actual=Grilla_Datos->GetGridCursorRow();
		int resultado=Mi_Entrenamiento->buscar_apellido(tx_buscar->GetValue().c_str(),fila_actual+1);
		if(resultado==-1)
			resultado=Mi_Entrenamiento->buscar_apellido(tx_buscar->GetValue().c_str(),0);
		if(resultado==-1)
			wxMessageBox("No se encontro ninguna persona con ese apellido");
		else{
			Grilla_Datos->SetGridCursor(resultado,0); 
			Grilla_Datos->SelectRow(resultado);
		}
	}
	if(num_opc==2){
		int fila_actual=Grilla_Datos->GetGridCursorRow();
		int resultado=Mi_Entrenamiento->buscar_altura(tx_buscar->GetValue().c_str(),fila_actual+1);
		if(resultado==-1)
			resultado=Mi_Entrenamiento->buscar_altura(tx_buscar->GetValue().c_str(),0);
		if(resultado==-1)
			wxMessageBox("No se encontro ninguna persona con esa altura");
		else{
			Grilla_Datos->SetGridCursor(resultado,0); 
			Grilla_Datos->SelectRow(resultado);
		}
	}
	if(num_opc==3){
		int fila_actual=Grilla_Datos->GetGridCursorRow();
		int resultado=Mi_Entrenamiento->buscar_peso(tx_buscar->GetValue().c_str(),fila_actual+1);
		if(resultado==-1)
			resultado=Mi_Entrenamiento->buscar_peso(tx_buscar->GetValue().c_str(),0);
		if(resultado==-1)
			wxMessageBox("No se encontro ninguna persona con ese peso");
		else{
			Grilla_Datos->SetGridCursor(resultado,0); 
			Grilla_Datos->SelectRow(resultado);
		}
	}
}

