#ifndef MX_APPLICATION_H
#define MX_APPLICATION_H
#include <wx/app.h>
#include "V_Persona.h"
#include "V_Entrenamiento.h"
#include "V_Buscador22.h"
#include "V_Buscador.h"
#include <map>
#include "Persona.h"
#include "Definiciones.h"
#include "V_Graficas.h"

using namespace std;
extern V_Buscador22 *NBuscador2;
extern V_Persona *NPersona;
extern V_Entrenamiento *NEntrenamiento;
extern V_Buscador *NBuscador;
extern V_Persona *NPerson;
extern V_Graficas *NGrafica;
extern vector<Practicas> VP;
extern int largor;
class mxApplication : public wxApp {
public:
	virtual bool OnInit();
};

#endif
