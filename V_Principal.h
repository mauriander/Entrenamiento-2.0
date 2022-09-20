#ifndef V_PRINCIPAL_H
#define V_PRINCIPAL_H
#include "Ventanas.h"

class V_Principal : public PrincipalVentana {
	
private:

protected:
	void On_Tool_Person( wxCommandEvent& event ) ;
	void On_Tool_Entrenamient( wxCommandEvent& event ) ;
	void On_Tool_About( wxCommandEvent& event ) ;
	void On_Tool_Exit( wxCommandEvent& event ) ;
	void Click_Boton_Busqueda_Registros( wxCommandEvent& event ) ;
	void Bclose( wxCloseEvent& event ) ;
	void OnSalir( wxCommandEvent& event ) ;
	void OnAgregarPersona( wxCommandEvent& event ) ;
	void OnExplorarPersona( wxCommandEvent& event ) ;
	void OnGuardarPersona( wxCommandEvent& event ) ;
	void OnExplorarEntrenamiento( wxCommandEvent& event ) ;
	void OnGuardarEntrenamiento( wxCommandEvent& event ) ;
	void OnManualUsuario( wxCommandEvent& event ) ;
	void OnManualReferencia( wxCommandEvent& event ) ;
	void OnAutores( wxCommandEvent& event ) ;
	void Click_Boton_Registrar( wxCommandEvent& event ) ;
	void Click_Boton_Salir( wxCommandEvent& event ) ;
	
public:
	V_Principal(wxWindow *parent=NULL);
	~V_Principal();
};

#endif

