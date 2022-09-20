#ifndef V_BUSCADOR_H
#define V_BUSCADOR_H
#include "Ventanas.h"

class V_Buscador : public BuscadorVentana {
	
private:
	void CargarFila(int i);
protected:
	void OnBuscar( wxCommandEvent& event ) ;
	void DobleClickGrilla( wxGridEvent& event ) ;
	void ClickGrilla( wxGridEvent& event ) ;
	void BClose( wxCloseEvent& event ) ;
	void Click_Boton_Agregar_Entrenamiento( wxCommandEvent& event ) ;
	void Click_Boton_Mostrar_Graficas( wxCommandEvent& event ) ;
	void Click_Boton_Eliminar( wxCommandEvent& event ) ;
	void Click_Boton_Editar( wxCommandEvent& event ) ;
	
public:
	V_Buscador(wxWindow *parent=NULL);
	~V_Buscador();
};

#endif

