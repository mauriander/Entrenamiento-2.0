#ifndef BOXEO_H
#define BOXEO_H
#include "Deporte.h"

class Boxeo : public Deporte {
private:
public:
	Boxeo(float t, float _peso, IntensidadDeporte _inte);
	~Boxeo();
	float Calcular_Calorias ();
};

#endif

