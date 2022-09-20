#include "Futbol.h"

Futbol::~Futbol() {
	
}

float Futbol::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.052)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.097)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}


Futbol::Futbol (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

