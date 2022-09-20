#ifndef REMO_H
#define REMO_H
#include "Deporte.h"

class Remo : public Deporte {
private:
public:
	Remo(float t, float _peso, IntensidadDeporte _inte);
	~Remo();
	float Calcular_Calorias ();
};

#endif

