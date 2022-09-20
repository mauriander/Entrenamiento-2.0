#include<iostream>
#include "Persona.h"
using namespace std;

int main (int argc, char *argv[]) {
	Persona p("LUCAS andRes esteban","VACcARO","SANTA fe","SAN geronimo 255",32152,20,8,1993,151,205.3);
	p.pasar_mayuscula();
	cout<<p.ver_nombre()<<endl;
	cout<<p.ver_apellido()<<endl;
	cout<<p.ver_domicilio()<<endl;
	cout<<p.ver_localidad()<<endl;
	
	return 0;
}

