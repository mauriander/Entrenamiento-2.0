#ifndef V_GRAFICAS_H
#define V_GRAFICAS_H
#include "Ventanas.h"

class V_Graficas : public Graficas {
	
private:
	
protected:
	
public:
	V_Graficas(wxWindow *parent,int quien);
	
	~V_Graficas();
	void Mostrar(int quien);
	void Modificar(int quien);
};

#endif

