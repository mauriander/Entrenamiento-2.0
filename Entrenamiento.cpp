#include "Entrenamiento.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cstring>
#include "Application.h"

using namespace std;
Entrenamiento::Entrenamiento(string archivo) {
	nombre_archivo=archivo;
	ifstream archi(nombre_archivo.c_str(),ios::binary|ios::ate);
	if (archi.is_open()) {
		int tamanio_archivo = archi.tellg();
		int cantidad_personas = tamanio_archivo/sizeof(registro);
		vec.resize(cantidad_personas);
		archi.seekg(0,ios::beg);
		for (int i=0;i<cantidad_personas;i++)
			vec[i].leer_datos(archi);
		archi.close();
	}
}


bool Entrenamiento::Guardar(){
	ofstream archi(nombre_archivo.c_str(),ios::binary);
	if (archi.is_open()) {
		int cantidad_personas = CantidadEntrenamientos();
	for (int i=0;i<cantidad_personas;i++)
		vec[i].guardar_datos(archi);
	archi.close();
	return true;}
	else {
		ofstream archi(nombre_archivo.c_str(),ios::binary | ios::trunc);
		archi.close();
			return false;
	}
}

int Entrenamiento::CantidadEntrenamientos(){
	return vec.size();
}


Persona &Entrenamiento::operator[](int pos) {
	return vec[pos];
}

Persona &Entrenamiento::VerPersona(int pos) {
	return vec[pos];
}

Entrenamiento::~Entrenamiento() {
	
}


void Entrenamiento::agregar_persona (Persona p) {
	vec.push_back(p);
}

void Entrenamiento::eliminar_persona (int pos) {
	vec.erase(vec.begin()+pos);
}

int Entrenamiento::buscar_nombre (string nomb, int pos_desde) {
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
	for(int i=pos_desde; i<vec.size(); i++){
	Persona p1=vec[i];
	string nom1=p1.ver_nombre();
		if(nom1.find(nomb,0)!=string::npos){
			return i;
		}
	}
	return -1;
	}

int Entrenamiento::buscar_apellido (string apel, int pos_desde) {
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
	for(int i=pos_desde; i<vec.size(); i++){
		Persona p1=vec[i];
		string ape1=p1.ver_apellido();
		if(ape1.find(apel,0)!=string::npos){
			return i;
		}
	}
	return -1;
}


int Entrenamiento::buscar_peso (string pes, int pos_desde) {
	for(int i=pos_desde; i<vec.size(); i++){
		Persona p1=vec[i];
		stringstream ss;
		ss<<p1.ver_peso();
		string peso=ss.str();
		if(peso.find(pes,0)!=string::npos)
			return i;
	}
	return -1;
}

int Entrenamiento::buscar_altura (string altur, int pos_desde) {
	for(int i=pos_desde; i<vec.size(); i++){
		Persona p1=vec[i];
		stringstream ss;
		ss<<p1.ver_altura();
		string altura=ss.str();
		if(altura.find(altur,0)!=string::npos)
			return i;
	}
	return -1;
}


void Entrenamiento::Ordenar (CriterioOrden criterio) {
	switch (criterio) {
	case ORDEN_APELLIDO: 
		sort(vec.begin(),vec.end(), criterio_comparacion_apellido); 
		break;
	case ORDEN_NOMBRE: 
		sort(vec.begin(),vec.end(),criterio_comparacion_nombre); 
		break;
	case ORDEN_PESO: 
		sort(vec.begin(),vec.end(),criterio_comparacion_peso); 
		break;
	case ORDEN_ALTURA: 
		sort(vec.begin(),vec.end(),criterio_comparacion_altura); 
		break;
	case ORDEN_EDAD: 
		sort(vec.begin(),vec.end(),criterio_comparacion_edad); 
		break;
	case ORDEN_DNI: 
		sort(vec.begin(),vec.end(),criterio_comparacion_dni); 
		break;
}}




string Entrenamiento::validar_dni (Persona & p) {
	string errores;
	int aux_dni=p.ver_dni();
	int cantidad_personas=CantidadEntrenamientos();
	for(int i=0;i<cantidad_personas;i++)
		if(vec[i].ver_dni()==aux_dni) {
			errores+="Ya existe una persona con ese DNI\n";
			continue;
		}
	return errores;
}

string Entrenamiento::validar_dni_edit (int pos, Persona & p) {
	string errores;
	int aux_dni=p.ver_dni();
	int cant_personas=CantidadEntrenamientos();
	for(int i=0;i<cant_personas;i++)
		if(i!=pos){
			if(vec[i].ver_dni()==aux_dni) {
				errores+="Ya existe una persona con ese DNI\n";
				continue;
			}
		}
	return errores;
}


