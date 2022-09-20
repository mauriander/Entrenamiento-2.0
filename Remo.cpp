#include "Remo.h"

Remo::Remo (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Remo::~Remo() {
	
}

float Remo::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.032)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.097)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
