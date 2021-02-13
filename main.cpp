//main 
#include "Cliente.cpp" 
#include "Empleado.cpp"
#include <iostream> 
using namespace std; 
main(){ 
	string nit,nombres,apellidos,direccion;
	int telefono; 
	String cod_empleado, puesto;
	double sueldo;
	cout<<"---------------------------------------"<<endl;
	cout<<"DATOS CLIENTE"<<endl;
	cout<<"Ingrese Nit: ";
	cin>>nit; 
	cout<<"Ingrese Nombres: "; 
	cin>>nombres; 
	cout<<"Ingrese Apellidos: "; 
	cin>>apellidos; 
	cout<<"Ingrese Direccion: "; 
	cin>>direccion; 
	cout<<"Ingrese Telefono: "; 
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
	
	cout<<"--------------------------------------"<<endl;
	cout<<"DATOS EMPLEADO"<<endl;
	cout<<"Ingrese codigo de empleado:"<<endl;
	cin>>cod_empleado;
	cout<<"Ingrese puesto de empleado:"<<endl;
	cin>>puesto;
	cout<<"Ingrese sueldo:"<<endl;
	cin>>sueldo;
	cout<<"Ingrese Nombres: "; 
	cin>>nombres; 
	cout<<"Ingrese Apellidos: "; 
	cin>>apellidos; 
	cout<<"Ingrese Direccion: "; 
	cin>>direccion; 
	cout<<"Ingrese Telefono: "; 
	cin>>telefono; 
	
	//objeto empleado
	Empleado emp = Empleado(nombres,apellidos,direccion,telefono,cod_empleado,puesto,sueldo);
	emp.setApellidos(apellidos);
	emp.setCod_empleado(cod_empleado);
	emp.setDireccion(direccion);
	emp.setNombres(nombre);
	emp.setPuesto(puesto);
	emp.setSueldo(sueldo);
	emp.setTelefono(telefono);
	
	cout<<"Nombres: "<<emp.getNombres()<<endl; 
	cout<<"Apellidos: "<<emp.getApellidos()<<endl; 
	cout<<"Direccion: "<<emp.getDireccion()<<endl; 
	cout<<"Telefono: "<<emp.getTelefono()<<endl; 
	cout<<"Codigo empleado: "<<emp.getCod_empleado()<<endl;
	cout<<"Puesto: "<<emp.getPuesto()<<endl;
	cout<<"Sueldo: "<<emp.getSueldo()<<endl;
}







