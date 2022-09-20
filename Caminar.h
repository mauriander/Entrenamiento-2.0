#ifndef CAMINAR_H
#define CAMINAR_H
#include "Deporte.h"

class Caminar : public Deporte {
private:
public:
	Caminar(float t, float _peso, IntensidadDeporte _inte);
	~Caminar();
	float Calcular_Calorias ();
};

#endif

