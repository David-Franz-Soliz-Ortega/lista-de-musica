#include<iostream>
#include<vector>
#include<string>
#include"cancion.cpp"

using namespace std;
class playlist{
private:
	string nombreLista;
	string descripcion;
	
	vector<cancion> listaCancion;
public:
	
	
	
	void agregarcancion(cancion c) {
		listaCancion.push_back(c);
	}
	void verlista() {
		cout<<"  "<<endl;
		for (int i = 0; i < listaCancion.size(); i++) {
			cout<<(i+1)<<":";
			listaCancion[i].verinfo();
		}
	}
	void eliminarcancion(int nrocancion) {
		int i=0;
		
		while(i<listaCancion.size()){
			
			if(i=nrocancion){
				cout<<"Cancion borrada"<<endl;
				listaCancion.erase(listaCancion.begin()+(nrocancion-1));
			}
			else
				cout<<"La cancion que quiere borrar no existe"<<endl;
		}
		i=i+1;
	}
	void buscarcancion(string nombrecancion) {
		cout<<"  "<<endl;
		for (int i = 0; i < listaCancion.size(); i++) {
			bool aux =listaCancion[i].gettitulo()==nombrecancion;
			if (aux==true) {
				cout << "Cancion encontrada" << endl;
				listaCancion[i].verinfo();
			}
			
		}
	}
	
	void clonarlista(playlist lista){
		limpiarlista();
		for(int i=0;i<=listaCancion.size();i++){
		}
		cout<<"Lista clonada"<<endl;
	lista.verlista();
	
	}
	
	void limpiarlista(){
		listaCancion.clear();
	}
		
	bool existecancion(int nrocancion){
		bool existe=true;
		for(int i=1;i<listaCancion.size();i++){
			if(nrocancion==i){
				return existe;
			}
			else
			   return false;
		}
	}
	
};
























