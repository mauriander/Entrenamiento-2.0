#include "Persona.h"
#include <ctime>
#include <cstddef>
#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Basquet.h"
#include "Futbol.h"
#include "Bicicleta.h"
#include "Boxeo.h"
#include "Correr.h"
#include "Caminar.h"
#include "Natacion.h"
#include "Remo.h"
#include "Tennis.h"
#include "Definiciones.h"
#include <string>
#include "Deporte.h"
#include <sstream>
using namespace std;



Persona::Persona(string nom, string ape,string loc, string domi,
	int _dni, int _dia, int _mes, int _anio,int _altura, float _peso) {
	nombre=nom;
	apellido=ape;
	localidad=loc;
	domicilio=domi;
	dni=_dni;
	dia=_dia;
	mes=_mes;
	anio=_anio;
	altura=_altura;
	peso=_peso;
}

Persona::~Persona() {
	
}


string Persona::ver_nombre ( ) const {
	return nombre;
}

string Persona::ver_apellido ( ) const {
	return apellido;
}

string Persona::ver_localidad ( ) const {
	return localidad;
}

string Persona::ver_domicilio ( ) const {
	return domicilio;
}

int Persona::ver_altura ( ) const {
	return altura;
}

int Persona::ver_dni ( ) const {
	return dni;
}

int Persona::ver_dia ( ) const {
	return dia;
}

int Persona::ver_mes ( ) const {
	return mes;
}

int Persona::ver_anio ( ) const {
	return anio;
}

int Persona::ver_edad ( ) const {
	return edad;
}

float Persona::ver_peso ( ) const {
	return peso;
}

void Persona::calcular_edad ( ) {
	int diah,mesh,anioh;
	time_t actual = time(NULL);
	struct tm fechaHoy = *(localtime(&actual));
	diah= fechaHoy.tm_mday;
	mesh= fechaHoy.tm_mon+1;
	anioh=fechaHoy.tm_year+1900;
	int f1= anioh*10000+mesh*100+diah;
	int f2= anio*10000+mes*100+dia;
	edad= (f1 - f2)/10000;
}

void Persona::modificar_nombre (string nom1) {
	nombre=nom1;
}

void Persona::modificar_apellido (string ape1) {
	apellido=ape1;
}

void Persona::modificar_localidad (string loc1) {
	localidad=loc1;
}

void Persona::modificar_domicilio (string domi1) {
	domicilio=domi1;
}

void Persona::modificar_altura (int al1) {
	altura=al1;
}

void Persona::modificar_dni (int dni1) {
	dni=dni1;
}

void Persona::modificar_dia (int dia1) {
	dia=dia1;
}

void Persona::modificar_mes (int mes1) {
	mes=mes1;
}

void Persona::modificar_anio (int anio1) {
	anio=anio1;
}

void Persona::modificar_edad (int edad1) {
	edad=edad1;
}

void Persona::modificar_peso (float peso1) {
	peso=peso1;
}

void Persona::guardar_datos (ofstream &archivo) {
	registro regi;
	strcpy(regi.nombr,nombre.c_str());
	strcpy(regi.apellid,apellido.c_str());
	strcpy(regi.localida,localidad.c_str());
	strcpy(regi.domicili,domicilio.c_str());
	regi.dn=dni;
	regi.di=dia;
	regi.me=mes;
	regi.ani=anio;
	regi.altur=altura;
	regi.pes=peso;
	archivo.write((char*)&regi,sizeof(regi));
}

void Persona::leer_datos (ifstream &archivo) {
	registro regi;
	archivo.read((char*)&regi,sizeof(regi));
	nombre=regi.nombr;
	apellido=regi.apellid;
	domicilio=regi.domicili;
	localidad=regi.localida;
	dni=regi.dn;
	dia=regi.di;
	mes=regi.me;
	anio=regi.ani;
	altura=regi.altur;
	calcular_edad();
	edad=ver_edad();
	peso=regi.pes;
}

string Persona::validad_datos ( ) {
	string errores;
	if (nombre.size()==0) errores+="El nombre no puede estar vacio\n";
	if (nombre.size()>256) errores+="El nombre es demasiado largo\n";
	if (apellido.size()==0) errores+="El apellido no puede estar vacio\n";
	if (apellido.size()>256) errores+="El apellido es demasiado largo\n";
	if (domicilio.size()==0) errores+="La direccion no puede estar vacia\n";
	if (localidad.size()==0) errores+="La localidad no puede estar vacia\n";
	if (dni<=0) errores+="DNI incompleto\n";
	if (dia<0 || dia>31) errores+="El dia de nacimiento debe estar entre 1 y 31, o vacio\n";
	if (mes<0 || mes>12) errores+="El mes de nacimiento debe estar entre 1 y 12, o vacio\n";
	if (anio!=0 && anio<=1900) errores+="El año de nacimiento no puede ser menor a 1900\n";
	if (altura>250) errores+="La altura no es valida\n";
	if (altura<60)errores+="La altura no es valida\n";
	if (peso==0.0) errores+= "Peso fuera de rango\n";
	return errores;
}

void Persona::pasar_mayuscula () {
	for(unsigned int i=0;i<nombre.length();i++){
		nombre[i]=tolower(nombre[i]);
	}
	nombre[0]=toupper(nombre[0]);
	size_t pos=0;
	pos=nombre.find(' ',pos);
	while(pos!=string::npos){
		nombre[pos+1]=toupper(nombre[pos+1]);
		pos=nombre.find(' ',pos+1);
	}
	
	for(unsigned int i=0;i<apellido.length();i++){
		apellido[i]=tolower(apellido[i]);
	}
	apellido[0]=toupper(apellido[0]);
	size_t pos1=0;
	pos1=apellido.find(' ',pos1);
	while(pos1!=string::npos){
		apellido[pos1+1]=toupper(apellido[pos1+1]);
		pos1=apellido.find(' ',pos1+1);
	}
	
	for(unsigned int i=0;i<localidad.length();i++){
		localidad[i]=tolower(localidad[i]);
	}
	localidad[0]=toupper(localidad[0]);
	size_t pos2=0;
	pos2=localidad.find(' ',pos2);
	while(pos2!=string::npos){
		localidad[pos2+1]=toupper(localidad[pos2+1]);
		pos2=localidad.find(' ',pos2+1);
	}
	
	for(unsigned int i=0;i<domicilio.length();i++){
		domicilio[i]=tolower(domicilio[i]);
	}
	domicilio[0]=toupper(domicilio[0]);
	size_t pos3=0;
	pos3=domicilio.find(' ',pos3);
	while(pos3!=string::npos){
		domicilio[pos3+1]=toupper(domicilio[pos3+1]);
		pos3=domicilio.find(' ',pos3+1);
	}
}
float Persona::agregar_entrenamiento(TipoDeporte tipo, IntensidadDeporte intensidad, float t){
	Deporte *d;
	switch(tipo)
	{
	case futbol:
		d = new Futbol(t, this->ver_peso(),intensidad);
		break;
	case basquet:
		d = new Basquet (t, this->ver_peso(),intensidad);
		break;
	case bicicleta:
		d = new Bicicleta (t, this->ver_peso(),intensidad);
		break;
	case boxeo:
		d = new Boxeo (t, this->ver_peso(),intensidad);
		break;
	case caminar:
		d = new Caminar (t, this->ver_peso(),intensidad);
		break;
	case correr:
		d = new Correr (t, this->ver_peso(),intensidad);
		break;
	case natacion:
		d = new Natacion (t, this->ver_peso(),intensidad);
		break;
	case remo:
		d = new Remo (t, this->ver_peso(),intensidad);
		break;
	case tennis:
		d = new Tennis (t, this->ver_peso(),intensidad);
		break;
	}
	float c=d->Calcular_Calorias();
	return c;
}

bool criterio_comparacion_apellido(const Persona & p1, const Persona & p2) {
	string s1 = p1.ver_apellido();
	string s2 = p2.ver_apellido();
	return s1<s2;
}

bool criterio_comparacion_nombre(const Persona & p1, const Persona & p2) {
	string s1 = p1.ver_nombre();
	string s2 = p2.ver_nombre();
	return s1<s2;
}

bool criterio_comparacion_peso(const Persona & p1, const Persona & p2) {
	float s1=p1.ver_peso();
	float s2=p2.ver_peso();
	return s1<s2;
}

bool criterio_comparacion_altura(const Persona & p1, const Persona & p2) {
	int s1=p1.ver_altura();
	int s2=p2.ver_altura();
	return s1<s2;
}

bool criterio_comparacion_edad(const Persona & p1, const Persona & p2) {
	int s1=p1.ver_edad();
	int s2=p2.ver_edad();
	return s1<s2;
}

bool criterio_comparacion_dni(const Persona & p1, const Persona & p2) {
	int s1=p1.ver_dni();
	int s2=p2.ver_dni();
	return s1<s2;
}
bool operator< (const Persona  & p1,const Persona  & p2){
	return ((p1.ver_dni() > p2.ver_dni()))? true: false;	
}



