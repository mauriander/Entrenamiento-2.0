#ifndef CORRER_H
#define CORRER_H
#include "Deporte.h"

class Correr : public Deporte {
private:
public:
	Correr(float t, float _peso, IntensidadDeporte _inte);
	~Correr();
	float Calcular_Calorias ();
};

#endif

