#include "Application.h"
#include <wx/image.h>
#include "V_Principal.h"
#include "V_Persona.h"
#include "V_Entrenamiento.h"
#include "V_Buscador22.h"
#include "V_Buscador.h"
#include "Persona.h"
#include <map>
#include "Definiciones.h"
#include <vector>
#include "V_Graficas.h"

#include <string>
using namespace std;
V_Persona *NPersona;
V_Entrenamiento *NEntrenamiento;
V_Buscador *NBuscador;
V_Buscador22 *NBuscador2;
V_Persona *NPerson;
V_Graficas *NGrafica;
vector<Practicas> VP;
int largor;
	
int cantidad_de_practicas=0;
IMPLEMENT_APP(mxApplication)

bool mxApplication::OnInit() {
	wxInitAllImageHandlers();
	new V_Principal(NULL);
	return true;
}

