#include<iostream>
#include<string>
using namespace std;


	class artista {
	private:
		string nombreart;
		string procedencia;
		string genero;
	public:
		artista(string art,string pro,string gen){
			nombreart=art;
			procedencia=pro;
			genero=gen;
		}
		void verinfoartista(){
			cout<<" Artista: "<<nombreart<<endl;
			cout<<" Procedencia: "<<procedencia<<endl;
			cout<<" Genero: "<<genero<<endl;
			cout<<" "<<endl;
		}
};

