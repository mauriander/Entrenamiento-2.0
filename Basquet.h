#ifndef BASQUET_H
#define BASQUET_H
#include "Deporte.h"

class Basquet : public Deporte {
private:
public:
	Basquet(float t, float _peso, IntensidadDeporte _inte );
	~Basquet();
	float Calcular_Calorias ();
};

#endif

