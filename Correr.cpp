#include "Correr.h"

Correr::Correr (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Correr::~Correr() {
	
}

float Correr::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.068)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.129)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
