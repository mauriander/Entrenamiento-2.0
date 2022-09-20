#ifndef EVENTOS_H
#define EVENTOS_H
#include "Persona.h"
#include <vector>
using namespace std;

enum CriterioOrden { ORDEN_APELLIDO, ORDEN_NOMBRE, ORDEN_PESO, ORDEN_ALTURA, ORDEN_EDAD, ORDEN_DNI };

class Entrenamiento{
private:
	string nombre_archivo;
	vector<Persona> vec;

	
protected:
	
public:

	Entrenamiento(string nombre_archivo);
	bool Guardar();
	int CantidadEntrenamientos();
	string validar_dni(Persona &p);
	string validar_dni_edit(int pos,Persona &p);
	Persona &operator[](int pos);
	Persona &VerPersona(int pos);
	~Entrenamiento();
	void agregar_persona(Persona p);
	void eliminar_persona(int pos);
	int buscar_nombre(string nomb, int pos_desde);
	int buscar_apellido(string apel, int pos_desde );
	int buscar_peso(string pes, int pos_desde);
	int buscar_altura(string altur, int pos_desde);
	void Ordenar(CriterioOrden criterio);
};

#endif

