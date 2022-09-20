#include "Bicicleta.h"

Bicicleta::Bicicleta (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Bicicleta::~Bicicleta() {
	
}

float Bicicleta::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.049)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.071)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
