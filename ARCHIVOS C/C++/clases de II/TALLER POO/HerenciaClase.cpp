// herenncia en POO
#include<iostream>
#include<stdlib.h>
using namespace std;
class Persona{
	private:// tambien podrian usar protected que permitiria acceder a los atributos desde los que heredan esta clase.
		string nombre;
		int edad, identidad;
	public:
		Persona(string, int,int);
		void MostrarPersona();
		
};
class Alumno : public Persona{//los : son para relacionar la relacion de herencia que tiene alumno con persona.
	private:
		int nMateria;
		string programa_A;
		float n_prom;
	public:
		Alumno(string,int,int,int, string, float);// deben colocar los tipos de datos de los atibutos heredados.
		void MostarAlumno();
		
};
//constructor dde persona:
Persona::Persona(string _nombre, int _edad,int _identidad){
	nombre=_nombre;
	edad=_edad;
	identidad=_identidad;
}
void Persona::MostrarPersona(){
	cout<<"El nombre es: "<<nombre<<endl;
	cout<<"La edad es: "<<edad<<endl;
}
//constructor de alumno  linea 35: el constructor de alumno debe contener los atributos heredados, pero no se inicializan si no que se hace uso de la herencia ver codigo de lina 35. 
Alumno::Alumno(string _nombre, int _edad, int _identidad,int NMateria, string Programa_A, float N_prom):Persona( _nombre,_edad,_identidad)
{
	nMateria = NMateria;
	programa_A=Programa_A;
	n_prom = N_prom;
}
void Alumno::MostarAlumno(){
	MostrarPersona();// este metodo es heredado por esto no hay que instanciarlo solo se implementa.
	cout<<"el numero materias cursadas hasta lafecha es: "<<nMateria<<endl;
	cout<<"el Alumno esta matriculado en: "<<programa_A<<endl;
	cout<<"La nota promedio es: "<<n_prom;
}
int main(){
	Alumno alumno1("pedro perez", 20, 123345, 14, "Ingenieria", 4.);
	alumno1.MostarAlumno();
}
