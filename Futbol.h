#ifndef FUTBOL_H
#define FUTBOL_H
#include "Deporte.h"

class Futbol : public Deporte {
private:
	
public:
	Futbol(float t, float _peso, IntensidadDeporte _inte );
	~Futbol();
	float Calcular_Calorias ();
};

#endif

