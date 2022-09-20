#ifndef NATACION_H
#define NATACION_H
#include "Deporte.h"

class Natacion : public Deporte {
private:
public:
	Natacion(float t, float _peso, IntensidadDeporte _inte);
	~Natacion();
	float Calcular_Calorias ();
};

#endif

