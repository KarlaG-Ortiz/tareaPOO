//clase empleado
#include "Persona.cpp" 
#include <iostream> 
using namespace std; 
class Empleado : Persona{ 
	//atributos 
	private : string cod_empleado, puesto;
			double sueldo; 
	//constructor 
	public : 
	Empleado(){ 
	} 
	Empleado(string nom,string ape,string dir,int tel,String cod, String p, double s) : Persona(nom,ape,dir,tel){ 
		cod_empleado = cod;
		puesto = p;
		sueldo = s; 
	} 
	
	//metodos
	//get (mostrar) 
	void mostrar(){ 
		cout<<"__________________"<<endl; 
		cout<<cod_empleado<<","<<puesto<<","<<sueldo<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	} 
	
	string getCod_empleado(){
		return cod_empleado;
	} 
	string getPuesto() {
		return puesto;
	} 
	double getSueldo(){
		return sueldo;
	}
	
	// set(modificar) 
	void setCod_empleado(string codigo){
		cod_empleado = codigo;
	} 
	void setPuesto(string pues){
		puesto = pues;
	} 
	void setSueldo(double sue){
		sueldo = sue;
	}
};
