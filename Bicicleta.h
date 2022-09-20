#ifndef BICICLETA_H
#define BICICLETA_H
#include "Deporte.h"

class Bicicleta : public Deporte {
private:
public:
	Bicicleta(float t, float _peso, IntensidadDeporte _inte);
	~Bicicleta();
	float Calcular_Calorias ();
};

#endif

