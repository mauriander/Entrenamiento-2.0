#include <iostream>


#include <cstdio>
#include "gnuplot.h"
using namespace std;

GNUplot::GNUplot() throw(string)
{
	gnuplotpipe=popen("pgnuplot -persist","w");
	if (!gnuplotpipe) {
		throw("¡ No se encontro GNUPLOT!");
	}
}

GNUplot::~GNUplot()
{
	fprintf(gnuplotpipe,"exit\n");
	
	pclose(gnuplotpipe);
	
	

}

void GNUplot::operator() (const string& command)
{
	fprintf(gnuplotpipe,"%s\n",command.c_str());
	fflush(gnuplotpipe);
	
	// fflush es necesario para poder dibujar
}

