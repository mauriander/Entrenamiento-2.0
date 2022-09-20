#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <fstream>
#include <vector>
#include "Definiciones.h"
#include "Persona.h"
using namespace std;

struct registro{
	char nombr[40];
	char apellid[40];
	char localida[40];
	char domicili[40];
	int altur,dn,me,ani,eda,di;
	float pes;
};

class Persona{
private:
	string nombre, apellido, localidad, domicilio;
	int dni,altura, dia, mes, anio, edad;
	float peso;
	struct FechaCalorias
	{
		int dia, mes, ano;
		float calorias;
	};
	
protected:
	
public:
	
	Persona(string nom="", string ape="",string loc="", string domi="",
	int _dni=0, int _dia=0, int _mes=0, int _anio=0,int _altura=0, float _peso=0.0);
	~Persona();
	void calcular_edad();
	string ver_nombre() const;
	string ver_apellido() const;
	string ver_localidad() const;
	string ver_domicilio() const;
	int ver_altura() const;
	int ver_dni() const;
	int ver_dia() const;
	int ver_mes() const;
	int ver_anio() const;
	int ver_edad() const;
	float ver_peso() const;
	void modificar_nombre(string nom1);
	void modificar_apellido(string ape1);
	void modificar_localidad(string loc1);
	void modificar_domicilio(string domi1);
	void modificar_altura(int al1);
	void modificar_dni(int dni1);
	void modificar_dia(int dia1);
	void modificar_mes(int mes1);
	void modificar_anio(int anio1);
	void modificar_edad(int edad1);
	void modificar_peso(float peso1);
	void guardar_datos(ofstream &archivo);
	
	void leer_datos(ifstream &archivo);
	string validad_datos();
	void pasar_mayuscula();//string &ordenar);

	
	float agregar_entrenamiento(TipoDeporte tipo, IntensidadDeporte intensidad, float t);
};

	bool criterio_comparacion_apellido( const Persona  &p1,const Persona  &p2);
	bool criterio_comparacion_nombre( const Persona  &p1,const Persona  &p2);
	bool criterio_comparacion_peso( const Persona  &p1,const Persona  &p2);
	bool criterio_comparacion_altura( const Persona  &p1,const Persona  &p2);
	bool criterio_comparacion_edad( const Persona  &p1,const Persona  &p2);
	bool criterio_comparacion_dni( const Persona  &p1,const Persona  &p2);
	bool operator < (const Persona  &p1,const Persona  &p2);	
	
	

#endif

