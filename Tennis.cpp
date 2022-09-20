#include "Tennis.h"

Tennis::Tennis (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}


Tennis::~Tennis() {
	
}

float Tennis::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.032)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.071)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
