#ifndef DEPORTE_H

#define DEPORTE_H
#include "Persona.h"
#include "Definiciones.h"
class Deporte {
protected:
	Persona p;
	float tiempo;
	float peso;
	vector<Practicas> VP;
	IntensidadDeporte inte;
public:
	
	Deporte(float t, float _peso, IntensidadDeporte _inte );
	~Deporte();
	virtual float Calcular_Calorias()=0;
};

#endif

