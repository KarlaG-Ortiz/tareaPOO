//main 
#include "Cliente.cpp" 
#include <iostream> 
using namespace std; 
main(){ 
	string nit,nombres,apellidos,direccion;
	int telefono; 
	
	cout<<"Ingrese Nit: ";
	cin>>nit; cout<<"Ingrese Nombres: "; 
	cin>>nombres; cout<<"Ingrese Apellidos: "; 
	cin>>apellidos; cout<<"Ingrese Direccion: "; 
	cin>>direccion; cout<<"Ingrese Telefono: "; 
	cin>>telefono; 
	
	//instanciar la clase 
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit); 
	obj.mostrar(); 
	
	obj.setNombres(nombres); 
	obj.setApellidos(apellidos); 
	obj.setDireccion(direccion); 
	obj.setTelefono(telefono); 
	cout<<"Nit: "<<obj.getNit()<<endl; 
	cout<<"Nombres: "<<obj.getNombres()<<endl; 
	cout<<"Apellidos: "<<obj.getApellidos()<<endl; 
	cout<<"Direccion: "<<obj.getDireccion()<<endl; 
	cout<<"Telefono: "<<obj.getTelefono()<<endl; 
}







