#include "Natacion.h"

Natacion::Natacion (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Natacion::~Natacion() {
	
}

float Natacion::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.032)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.088)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
