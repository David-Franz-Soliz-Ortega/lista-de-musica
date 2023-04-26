#include<iostream>
#include<string>
#include "artista.cpp"
using namespace std;

struct tiempo{
	int minutos;
	int segundos;
	
};
class cancion:public artista{
private:
	string titulo;
	tiempo duracion;

public:
	cancion(string tit,int min,int seg,string nombreart,string procedencia, string genero):artista(nombreart,procedencia,genero){
		titulo=tit;
		duracion.minutos=min;
		duracion.segundos=seg;
	}
	void verinfo(){
		cout<<"Titulo: "<<titulo<<endl;
		if(duracion.minutos>10)
		cout<<"duracion: "<<duracion.minutos; 
		else
			cout<<"duracion: "<<"0"<<duracion.minutos;
		if(duracion.segundos>10)
			cout<<":"<<duracion.segundos<<endl;
		else
			
			cout<<":0"<<duracion.segundos<<endl;
		verinfoartista();
	}
	string gettitulo(){
		return titulo;
	}
		int getminutos(){
			return duracion.minutos;
		}
		int getsegundos(){
			return duracion.segundos;
		}
};


