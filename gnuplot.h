#ifndef GNUPLOT_H_
#define GNUPLOT_H_

#include <iostream>

#include <string>
using namespace std;

class GNUplot
	{
	public:
		GNUplot() throw(string);
		~GNUplot();
		void operator ()(const string& command);
		
	protected:
		FILE *gnuplotpipe;
		
	};
#endif /*GNUPLOT_H_*/
