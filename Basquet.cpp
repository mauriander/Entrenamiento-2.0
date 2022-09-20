#include "Basquet.h"

Basquet::Basquet (float t, float _peso, IntensidadDeporte _inte): Deporte (t, _peso, _inte) {}

Basquet::~Basquet() {
	
}

float Basquet::Calcular_Calorias ( ) {
	float calorias;
	switch (inte){
	case Baja:
		calorias=(0.0045)*((2.2)*peso)*(tiempo);
		break;
	case Alta:
		calorias=(0.0071)*((2.2)*peso)*(tiempo);
		break;
	}
	return calorias;
}



