#ifndef DEFINICIONES_H
#define DEFINICIONES_H
#include <vector>
#include "Definiciones.h"
#include <string>
using namespace std;
enum IntensidadDeporte {Baja, Alta};
enum TipoDeporte {basquet, bicicleta, boxeo, caminar, correr, futbol, natacion, remo, tennis};

struct Practicas{
	char nombre[50];
	char apellido[50];
	int dni;
	int dia,mes,anio;
	int minutos;
	TipoDeporte tdep;
	IntensidadDeporte tint;
	float calo;
};



#endif
