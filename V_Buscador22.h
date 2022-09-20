#ifndef V_BUSCADOR22_H
#define V_BUSCADOR22_H
#include "Ventanas.h"
#include <string>
#include "Definiciones.h"
using namespace std;
enum Criterio {O_APELLIDO, O_NOMBRE, O_CALORIAS, O_DEPORTE, O_INTENSIDAD, O_TIEMPO};

class V_Buscador22 : public BuscadorVentana2 {
	
private:
	void CargarFila(int i);
	int buscar_nombre_ent(string nomb, int pos_desde);
	int buscar_apellido_ent(string apel, int pos_desde);
	void OrdenarPra(Criterio cri);
protected:
	void ClickGrilla( wxGridEvent& event ) ;
	
	void OnBuscar( wxCommandEvent& event ) ;
	void Click_Boton_Eliminar( wxCommandEvent& event ) ;
	void Click_Boton_Editar_Entrenamiento( wxCommandEvent& event ) ;
	void Click_Boton_Agregar_Entrenamiento( wxCommandEvent& event ) ;
	
public:
	V_Buscador22(wxWindow *parent=NULL);
	~V_Buscador22();
};

bool criterio_apellido( const Practicas  &p1,const Practicas  &p2);
bool criterio_nombre( const Practicas  &p1,const Practicas  &p2);
bool criterio_calorias( const Practicas  &p1,const Practicas  &p2);
bool criterio_deporte( const Practicas  &p1,const Practicas  &p2);
bool criterio_intensidad( const Practicas  &p1,const Practicas  &p2);
bool criterio_tiempo( const Practicas  &p1,const Practicas  &p2);

#endif

