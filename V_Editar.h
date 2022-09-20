#ifndef V_EDITAR_H
#define V_EDITAR_H
#include "Ventanas.h"

class V_Editar : public PersonaVentana {
	
private:
	int posicion_persona;
protected:
	void Bclose( wxCloseEvent& event ) ;
	void Click_Boton_Guardar( wxCommandEvent& event ) ;
	void Click_Boton_Salir( wxCommandEvent& event ) ;
	
public:
	V_Editar(wxWindow *parent, int cual);
	~V_Editar();
};

#endif

