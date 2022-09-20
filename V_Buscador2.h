#ifndef __ProyectoBuscadorVentana2__
#define __ProyectoBuscadorVentana2__

/**
@file
Subclass of BuscadorVentana2, which is generated by wxFormBuilder.
*/

#include "Ventanas.h"

//// end generated include

/** Implementing BuscadorVentana2 */
class ProyectoBuscadorVentana2 : public BuscadorVentana2
{
	protected:
		// Handlers for BuscadorVentana2 events.
		void Click_Boton_Buscar( wxCommandEvent& event );
		void Enter_Buscar( wxCommandEvent& event );
		void Escoger_Busqueda( wxCommandEvent& event );
		void Click_Boton_Eliminar( wxCommandEvent& event );
		void Click_Boton_Editar_Entrenamiento( wxCommandEvent& event );
		void Click_Boton_Agregar_Entrenamiento( wxCommandEvent& event );
	public:
		/** Constructor */
		ProyectoBuscadorVentana2( wxWindow* parent );
	//// end generated class members
	
};

#endif // __ProyectoBuscadorVentana2__
