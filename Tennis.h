#ifndef TENNIS_H
#define TENNIS_H
#include "Deporte.h"

class Tennis : public Deporte {
private:
public:
	Tennis(float t, float _peso, IntensidadDeporte _inte);
	~Tennis();
	float Calcular_Calorias ();
};

#endif

