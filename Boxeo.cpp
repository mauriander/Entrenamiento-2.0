#include "Boxeo.h"

Boxeo::Boxeo (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Boxeo::~Boxeo() {
	
}

float Boxeo::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.052)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.078)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}
