#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Alumno *alumno;

class Alumno 
{
	//atributos
	private:
	string nombre, direccion, ciudad, especialidad;
	int notas;
	
	//metodos
	public:
	void mostrar_alumno(/*string, string, string, string, int*/);	
	Alumno(string, string, string, string, int); //contructor parametrzado
	Alumno(); // contructor por defecto
	void asignar_nota(int);
	~Alumno();
		
};


Alumno::~Alumno()
{
	cout<<"OBJETO DESTRUIDO"<<endl;
}

Alumno::Alumno(/*string n_nombre, string n_direcion, string n_ciudad, string n_especialidad, int n_asignturas*/)
{
	cout<<"NO HAY DATOS"<<endl<<endl; //cuando se crea un objeto vacio
}

Alumno::Alumno(string n_nombre, string n_direccion, string n_ciudad, string n_especialidad, int n_notas)
{
	nombre = n_nombre;
	direccion = n_direccion;
	ciudad = n_ciudad;
	especialidad = n_especialidad;
	notas = n_notas;

}
void Alumno::mostrar_alumno(/*string nombre, string direccion, string ciudad, string especialidad, int asignaturas*/)
{
	cout<<"EL NOMBRE DEL ALUMNO ES: "<<nombre<<endl;
	cout<<"LA DIRECCION DEL ALUMNO ES: "<<direccion<<endl;
	cout<<"LA CIUDAD DEL ALUMNO ES: "<<ciudad<<endl;
	cout<<"LA ESPECIALIDAD DEL ALUMNO ES: "<<especialidad<<endl;
	cout<<"EL NUMERO DE ASIGNATURAS DEL ALUMNO ES: "<<notas<<endl;
}
void Alumno::asignar_nota(int nota)
{
	notas = nota;
}
class Universidad
{
	//atributos
	private:
	Alumno alumno;
	string asignatura;
	
	//metodo
	public:
	Universidad(string, Alumno);
	void mostrar_universidad(string, Alumno);
	static void examen(string, Alumno); 	// el static permite instanciar el metodo sin tener que crear el objeto de la clase
};

Universidad::Universidad(string n_asignatura, Alumno n_alumno)
{
	asignatura = n_asignatura;
	alumno = n_alumno;
}

void Universidad::mostrar_universidad(string asignatura, Alumno alumno)
{
	cout<<"PARA LA ASIGNATURA: "<<asignatura<<endl;
	alumno.mostrar_alumno();
}

static void examen(string asignatura, Alumno alumno)
{
	int cualquier_cosa;
	cout<<"DIGITE UNA NOTA: ";	cin>>cualquier_cosa;
	alumno.asignar_nota(cualquier_cosa);
	alumno.mostrar_alumno();
	cout<<"LA ASIGNATURA ES: "<<asignatura<<endl<<endl;
}

main()
{
	Alumno alumno1 = Alumno("PEDRO", "EN LA CALLE", "QUIEN SABE", "CACHARRERO", 0);
	
//	Universidad universidad1 = Universidad("ALGORIMOS", alumno1);
	examen("MATEMATICAS", alumno1);
	
//	alumno1.mostrar_alumno();
	
	getch();
}
