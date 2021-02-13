//Cliente 
#include "Persona.cpp" 
#include <iostream> 
using namespace std; 
class Cliente : Persona{ 
	//atributos 
	private : string nit; 
	//constructor 
	public : 
	Cliente(){ 
	} 
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){ 
		nit = n; 
	} 
	
	//metodos
	//get (mostrar) 
	void mostrar(){ 
		cout<<"__________________"<<endl; 
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl; 
	} 
	
	string getNit(){
		return nit;
	} 

	string getNombres() {
		return nombres;
	} 

	string getApellidos(){
		return apellidos;
	} 

	int getTelefono(){
		return telefono;
	}	

	string getDireccion() {
		return direccion;
	}
	
	// set(modificar) 
	void setNit(string n){
		nit = n;
	} 
	void setNombres(string nom){
		nombres = nom;
	} 
	void setApellidos(string ape){
		apellidos = ape;
	}	 
	void setDireccion(string dir){
		direccion = dir;
	} 
	void setTelefono (int tel){
		telefono=tel;
	} 
};
