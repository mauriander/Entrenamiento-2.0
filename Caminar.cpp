#include "Caminar.h"

Caminar::Caminar (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Caminar::~Caminar() {
	
}

float Caminar::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.029)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.048)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
