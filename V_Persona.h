#ifndef V_PERSONA_H
#define V_PERSONA_H
#include "Ventanas.h"

class V_Persona : public PersonaVentana {
	
private:
	
protected:
	void Bclose( wxCloseEvent& event ) ;
	void BClose( wxCloseEvent& event ) ;
	void Click_Boton_Guardar( wxCommandEvent& event ) ;
	void Click_Boton_Salir( wxCommandEvent& event ) ;
	
public:
	V_Persona(wxWindow *parent=NULL);
	~V_Persona();
};

#endif

