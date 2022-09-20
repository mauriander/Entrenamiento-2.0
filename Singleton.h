#ifndef SINGLETON_H
#define SINGLETON_H
#include "Entrenamiento.h"
#include <fstream>
using namespace std;

class Singleton : public Entrenamiento {
private:
	static Singleton *instancia;
	Singleton():Entrenamiento("Archivo_Personas.dat"){};
public:
	static Singleton *ObtenerInstancia() {
		if (!instancia) instancia=new Singleton();
		return instancia;
	}
	~Singleton();
};

#endif

