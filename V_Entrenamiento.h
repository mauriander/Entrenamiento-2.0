#ifndef V_ENTRENAMIENTO_H
#define V_ENTRENAMIENTO_H
#include "Ventanas.h"

class V_Entrenamiento : public EntrenamientoVentana {
	
private:
	int quien;
protected:
	void Click_Boton_Guardar( wxCommandEvent& event ) ;
	void Click_Boton_Salir( wxCommandEvent& event ) ;
	
public:
	V_Entrenamiento(wxWindow *parent, int quien);
	~V_Entrenamiento();
};

#endif

