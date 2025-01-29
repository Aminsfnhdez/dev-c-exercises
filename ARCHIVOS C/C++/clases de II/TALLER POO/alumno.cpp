#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Alumno 
{
	//atributos
	private:
	string nombre, direccion, ciudad, especialidad;
	int asignaturas, media;
	
	//metodos
	public:
	void mostrar_alumno(/*string, string, string, string, int*/);
	Alumno cacular_media();	
	Alumno(string, string, string, string, int, int); //contructor parametrzado
	Alumno(); // contructor por defecto
	Alumno(string, string, int);
	~Alumno();
		
};

Alumno::Alumno(string n_especialidad, string n_ciudad, int n_asignaturas)
{
	especialidad = "IT INFORMATICA";
	ciudad = "CACERES";
	asignaturas = 5;
}
Alumno::~Alumno()
{
	cout<<"OBJETO DESTRUIDO"<<endl;
}

Alumno::Alumno(/*string n_nombre, string n_direcion, string n_ciudad, string n_especialidad, int n_asignturas*/)
{
	cout<<"NO HAY DATOS"<<endl; //cuando se crea un objeto vacio
}

Alumno::Alumno(string n_nombre, string n_direccion, string n_ciudad, string n_especialidad, int n_asignaturas, int n_media)
{
	nombre = n_nombre;
	direccion = n_direccion;
	ciudad = n_ciudad;
	especialidad = n_especialidad;
	asignaturas = n_asignaturas;
	media = n_media;
}
void Alumno::mostrar_alumno(/*string nombre, string direccion, string ciudad, string especialidad, int asignaturas*/)
{
	cout<<"EL NOMBRE DEL ALUMNO ES: "<<nombre<<endl;
	cout<<"LA DIRECCION DEL ALUMNO ES: "<<direccion<<endl;
	cout<<"LA CIUDAD DEL ALUMNO ES: "<<ciudad<<endl;
	cout<<"LA ESPECIALIDAD DEL ALUMNO ES: "<<especialidad<<endl;
	cout<<"EL NUMERO DE ASIGNATURAS DEL ALUMNO ES: "<<asignaturas<<endl;
	cout<<"LA MEDIA DE LAS NOTAS DEL ALUMNO ES: "<<media<<endl;
}

Alumno Alumno::cacular_media()
{
//	int media = 0;
	int n1, n2, n3, n4;
	cout<<"DIGITE LA NOTA 1: ";	cin>>n1;
	cout<<"DIGITE LA NOTA 2: ";	cin>>n2;
	cout<<"DIGITE LA NOTA 3: ";	cin>>n3;
	cout<<"DIGITE LA NOTA 4: ";	cin>>n4;
	
	media = (n1+n2+n3+n4)/4;
	
	return *this; // se instancia el objeto ( para general para todos los objetos de una clase dada)
}
main()
{
	Alumno alumno1 = Alumno("JOSE", "LA PLAYA", "BOGOTA", "INGENIERO", 12, 0);
	alumno1.cacular_media();
	cout<<"TERMINO DE CALCULAR"<<endl;
	alumno1.mostrar_alumno();
	cout<<"TERMINO DE MOSTRAR"<<endl;
	
	Alumno alumno2 = Alumno("", "", 0);
	alumno2.mostrar_alumno();
	
	Alumno alumno3;
	
	Alumno alumno4(alumno1); //constructor copia
	alumno4.mostrar_alumno(); // con constructor copia los metodos se ponen manuales
	
	
	getch();
}
