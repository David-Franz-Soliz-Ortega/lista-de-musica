#include<iostream>
#include<string>
#include<vector>
#include "playlist.cpp"
using namespace std;

void imprimirrocola(vector<cancion> lista)
{
	for(int i=0; i<lista.size();i++){
		cout<<(i+1)<<":"<<lista[i].gettitulo()<<endl;
		if(lista[i].getminutos()<10)
		cout<<" Duracion:"<<"0"<<lista[i].getminutos();
		else{
			cout<<" Duracion:"<<lista[i].getminutos();
		}
		if(lista[i].getsegundos()<10){
		cout<<":0"<<lista[i].getsegundos()<<endl;}
		else{
			cout<<":"<<lista[i].getsegundos()<<endl;
		}
		lista[i].verinfoartista();
	}
}
int main(){

	cout<<"Creando funcionalidad de una Rockola"<<endl;
	cout<<"\t\t\tROCKOLA USFX"<<endl;
	cout<<"Listas Disponibles, seleccione una de ellas"<<endl;
	playlist lista1;
	playlist lista2;
	playlist latino;
	playlist *currentlist;
	vector<cancion> rocola;
	rocola.push_back(cancion("cumbianinja",3,4,"Mr Cumbia","Mexico","Cumbia"));
	rocola.push_back(cancion("livetowin ",3,2,"Paco Stanley","EE.UU","Rock"));
	rocola.push_back(cancion("peaches",2,2,"Jack Black","EE.UU","Romantica"));
	rocola.push_back(cancion("unalobacomoyo",3,1,"Shakira","Colombia","Pop"));
	rocola.push_back(cancion("holamundo",3,2,"Mi computadora","Bolivia","Cumbia"));
	rocola.push_back(cancion("allstars",3,1,"Shrek","EE.UU","Rock"));
	
int num,opcion; 
int numlista;
string ab="si";
cout<<"Seleccione una lista"<<endl;
cout<<"1.lista 1"<<endl;
cout<<"2.Favoritos"<<endl;
cout<<"3.Latino"<<endl;
cin>>numlista;
switch(numlista){
case 1:
	currentlist=&lista1;
	break;
case 2:
	currentlist=&lista2;
	break;
case 3:
	currentlist=&latino;
	break;	
default:
	break;
}
do{
cout<<"Seleccione la Operacion que desea realizar sobre alguna de ellas"<<endl;
cout<<"1.- Insertar una Cancion"<<endl;
cout<<"2.- Eliminar una Cancion"<<endl;
cout<<"3.- Buscar una Cancion"<<endl;
cout<<"4.- Ver la Lista"<<endl;
cout<<"5._ Limpiar lista"<<endl;
cout<<"6._ Clonar lista"<<endl;
cin>>opcion;
switch(opcion){
case 1:{

	
	if(currentlist==nullptr){
		cout<<"Seleccione una lista"<<endl;
		break;
	}
	else{
	
    imprimirrocola(rocola);
	cout<<"Selecciona una canción"<<endl;
	int cancionseleccionada;
	cin>>cancionseleccionada;
	currentlist->agregarcancion(rocola[cancionseleccionada-1]);
	cout<<"Cancion agregada"<<endl;
	cout<<rocola[cancionseleccionada-1].gettitulo()<<endl;
	break;}
case 2:{
	
	int nrocancion;
	cout<<"Introduzca el número de la cancion"<<endl;
	cin>>nrocancion;
if(currentlist->existecancion(nrocancion)==true){
	currentlist->eliminarcancion(nrocancion);
	break;}
else
   cout<<"La cancion que quiere borrar no existe"<<endl;
break;
}
case 3:{
	string nombrecancion;
	cout<<"Cual es el nombre de la canción"<<endl;
	cin>>nombrecancion;
	currentlist->buscarcancion(nombrecancion);
	break;}
case 4:{
		currentlist->verlista();
	break;
	}
case 5:{
			
			currentlist->limpiarlista();
			cout<<"Se vacio toda la lista"<<endl;
			cout<<" "<<endl;
			break;
		}

}
}


cout<<"¿Quiere hacer algo mas?"<<endl;
cin>>ab;

}while(ab=="si");}
	

	
	
