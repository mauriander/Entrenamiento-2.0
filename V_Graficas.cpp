#include "V_Graficas.h"
#include "gnuplot.h"
#include <map>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <sstream>
#include "Singleton.h"
#include "Entrenamiento.h"
#include <string>
#include "Application.h"
#include <cstdio>
using namespace std;





V_Graficas::V_Graficas(wxWindow *parent,int quien) : Graficas(parent) {
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	Persona &tre=(*Mi_Entrenamiento)[quien];
	int d=tre.ver_dni();
	stringstream aux_d;
	aux_d << d;
	string docu=aux_d.str();
	string comando= "Textos\\";
	string comando2="\'Textos\\";
	string extension=".txt";
	string extension2=".txt\'";
	string total;
	total=comando+docu+extension;
	fstream archivito(total.c_str(),ios::in|ios::out);
	archivito.seekg(0,ios::end);
	largor=archivito.tellg();
	archivito.close();
		
}
	


V_Graficas::~V_Graficas() {
	Close();
}

void V_Graficas::Mostrar(int quien){
	GNUplot plotter;
	
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	Persona &tre=(*Mi_Entrenamiento)[quien];
	int d=tre.ver_dni();
	stringstream aux_d;
	aux_d << d;
	string docu=aux_d.str();
	string comando= "Textos\\";
	string comando2="\'Textos\\";
	string extension=".txt";
	string extension2=".txt\'";
	
	
	///modifica la primera grafica 
	string wty="plot "+comando2+docu+"5"+extension2;
	
	
	///modifica la segunda imagen
	string wwty="plot "+comando2+docu+"30"+extension2;
	
	plotter("set style data linespoints" );
	plotter("set xlabel 'Dia'");
	plotter("set style data linespoints");
	plotter("set ylabel 'Calorias'");
	plotter("set grid");
	plotter("set title 'Ultimos 5 Entrenamientos'");
	
	plotter("set terminal png");
	plotter("set output \"output.png\"");
	plotter(wty.c_str());
	
	plotter("set style data linespoints" );
	plotter("set xlabel 'Dia'");
	plotter("set style data linespoints");
	plotter("set ylabel 'Calorias'");
	plotter("set grid");
	plotter("set title 'Entrenamientos del mes'");
	plotter("set terminal png");
	plotter("set output \"output2.png\"");
	plotter(wwty.c_str());
}

void V_Graficas::Modificar(int quien){
	GNUplot plotter;
	
	Entrenamiento *Mi_Entrenamiento=Singleton::ObtenerInstancia();
	Persona &tre=(*Mi_Entrenamiento)[quien];
	
	int d=tre.ver_dni();
	stringstream aux_d;
	aux_d << d;
	string docu=aux_d.str();
	string comando= "Textos\\";
	string comando2="\'Textos\\";
	string extension=".txt";
	string extension2=".txt\'";
	
	///modifica la primera grafica 
	string wty="plot "+comando2+docu+"5"+extension2;
	
	
	///modifica la segunda imagen
	string wwty="plot "+comando2+docu+"30"+extension2;
	
	
	string total,toti,totip,tot,totp,sing;
	
	//docu="36302909";
	sing='"';
	stringstream aux_s;
	aux_s<<sing;
	string comi=aux_s.str();
	
	
	
	
	
	
	/**Aca creo un archivo con los ultimos 5 valores para entrenamiento**/
	map<int,int> m;
	map<int,int>::iterator t,w;
	t=m.begin();
	string cadena;
	char texto1[200];
	char texto2[200];
	total=comando+docu+extension;
	
	
		
		
		
	fstream archi(total.c_str(),ios::in|ios::out);
	
	
	//if(!archi.is_open()) {cout<<"ERROR";};//Si da error finalizo y saco return 1
	
	cout<<"Abrio el archivo..."<<endl;
	while(archi>>texto1){//mientras haya texto leo el archivo
		cadena+= texto1;
		cadena+=" ";
		archi>>texto2;
		cadena+= texto2;//concateno lo leido en el string cadena
		int k=atoi(texto1);
		//int x;
		//x=k%100;//tengo la fecha en formato aaaa/mm/dd saco el modulo para que me quede el dia solo
		int w=atoi(texto2);
		t=m.find(k);
		if(t!=m.end()){
			m[k]=w+t->second;
			t=m.begin();
			
		}
		else{
			m[k]=w;}
		
		cout<<"texto: "<<texto1<<" ... "<<texto2<<endl;//opcional, muestro por pantalla
		//cout<<"   k: "<<k<<" y w es: "<<w<<"\n";
		cadena+="\n";
		
	}
	archi.close();
	
	
	map<int,int>::iterator prin;
	prin=m.begin();
	while(prin!=m.end()){
		cout<<prin->first<<"  "<<prin->second<<endl;
		prin++;
	}
	
	map<int,int>::iterator p,q;
	p=m.end();
	
	//p=key.end();
	p--;	//sino escribe basura en la primera posicion
	
	map<int,int> m5;
	m5.clear();
	//value5.clear();
	for(int i=0;i<5;i++) {
		
		int keyu=(p->first%100);
		m5[keyu]=p->second;
		p--;
		
		//los ingreso de atras para adelante;
	}
	
	
	q=m5.begin();
	cout<<"Muestro los ultimos 5: "<<endl;
	toti=comando+docu+"5"+extension;
	fstream archit(toti.c_str() ,ios::out);
	
	if(!archit.is_open()) {
		fstream archi(toti.c_str(), ios::trunc | ios::in |ios::out);//sacor return 1
		while(q!=m5.end()){
			archit<<q->first<<" "<<q->second<<"\n";
			//cout<<*b++<<"  "<<*c++<<"\n";
			q++;
		}}
	else{ while(q!=m5.end()){
		archit<<q->first<<" "<<q->second<<"\n";
		//cout<<*b++<<"  "<<*c++<<"\n";
		q++;
	}}
	
	
	cout<<"Archivo: "<<endl<<cadena<<endl;
	archit.close();
	
	plotter("set xlabel 'Dia'");
	plotter("set style data linespoints");
	plotter("set ylabel 'Calorias'");
	plotter("set grid");
	plotter("set title 'Ultimos 5 Entrenamientos'");
	
//	plotter("set terminal png");
//	string tipo;
//	tipo="set terminal png";
//	plotter(tipo.c_str());
//	string salit="set output \"output.png\"";
//	plotter(salit.c_str());
//	totip=comi+"plot "+comi+comando2+docu+"5"+extension2+comi;
//	string ty:
//	plotter(wty.c_str());
	
	///----------------------------------------------
	
	map< pair<int,int>,int> r;
	map<int,int>::iterator busque;
	busque=m.begin();
	//prin=m.begin();
	while(busque!=m.end()){
		
		int x;
		x=busque->first%10000;
		int z=x/100;
		int y=x%100;
		pair <int,int> l (z,y);
		int w=busque->second;
		r[l]=w;
		busque++;
	}
	
	map < pair <int,int> ,int>::iterator j;
	j=r.end();
	j--;
	
	map<int,int> m30;
	m30.clear();
	int i=j->first.first;
	cout<<i<<"\n";
	while(j->first.first==i) {
		
		m30[j->first.second]=j->second;
		
		j--;
		//los ingreso de atras para adelante total a la hora de graficar dara lo mismo
	}
	
	map<int,int>::iterator s;
	s=m30.begin();
	cout<<"Muestro los ultimos entrenamientos del mes: "<<endl;
	tot=comando+docu+"30"+extension;
	
	fstream archito(tot.c_str(),ios::out);
	
	if(!archito.is_open()) {
		fstream archi(tot.c_str(), ios::trunc | ios::in |ios::out);
		
		while(s!=m30.end()){
			archito<<s->first<<" "<<s->second<<"\n";
			//cout<<s->first<<"  "<<s->first<<"\n";
			s++;
		}}
	else {
		
		while(s!=m30.end()){
			archito<<s->first<<" "<<s->second<<"\n";
			//cout<<s->first<<"  "<<s->first<<"\n";
			s++;
			
		}}
	
	archito.close();
	
//	plotter("set style data linespoints" );
//	plotter("set xlabel 'Dia'");
//	plotter("set style data linespoints");
//	plotter("set ylabel 'Calorias'");
//	plotter("set grid");
//	plotter("set title 'Entrenamientos del mes'");
//	
//		plotter("set terminal png");
//		plotter("set output \"output2.png\"");
//	
//	plotter(wwty.c_str());
	
}
