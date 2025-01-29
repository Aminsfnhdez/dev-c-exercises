#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Persona
{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void levantarse();	
		string getnombre();
		void comer();
		void dormir();
};

Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}
string Persona::getnombre()
{
	return nombre;
}
void Persona::levantarse()
{
	cout<<"LA PERSONA "<<nombre<<" SE LEVANTO "<<endl;
}
void Persona::comer()
{
	cout<<"LA PERSONA "<<nombre<<" COMIO "<<endl;
}

void Persona::dormir()
{
	cout<<"LA PERSONA "<<getnombre()<<" DURMIO "<<endl;
}
//__________________________________________________________________________________________________________________

class Alumno : public Persona
{
	private:
		string curso;
	public:
		Alumno(string, int, string);
		void ir_a_clase();
		void examinarse();
			
};

Alumno::Alumno(string _nombre, int _edad, string _curso) : Persona(_nombre, _edad)
{
	curso = _curso;
}

void Alumno::ir_a_clase()
{
	cout<<"EL ALUMNO "<<getnombre()<<" FUE A CLASE DE: "<<curso<<endl;
}

void Alumno::examinarse()
{
	cout<<"EL ALUMNO "<<getnombre()<<" SE EXAMINO"<<endl;
}


//_________________________________________________________________________________________________

class Profesor : public Persona
{
	private:
		string especialidad, materias;
	public:
		Profesor(string, int, string, string);
		void evaluar();
		void investigar();
		void dar_clase();
};

Profesor::Profesor(string _nombre, int _edad, string _especialidad, string _materias) : Persona(_nombre, _edad)
{
	especialidad = _especialidad;
	materias = _materias;
}

void Profesor::evaluar()
{
	cout<<"EL PROFESOR "<<getnombre()<<" EVALUO"<<endl;
}

void Profesor::investigar()
{
	cout<<"EL PROFESOR "<<getnombre()<<" INVESTIGO"<<endl;
}

void Profesor::dar_clase()
{
	cout<<"EL PROFESOR "<<getnombre()<<" DIO LA CLASE"<<endl;
}

//__________________________________________________________________________________________________________________________________________

class Informatica : public Alumno
{
	public:
		Informatica(string, int, string );
		void programar();
};

Informatica::Informatica(string _nombre, int _edad, string _curso) : Alumno(_nombre, _edad, _curso)
{
	
}

void Informatica::programar()
{
	cout<<"EL ALUMNO "<<getnombre()<<" DE INFORMATICA PROGRAMO"<<endl;
}
//____________________________________________________________________________________________________________________________________________

class Arquitectura : public Alumno
{
	public:
		Arquitectura(string, int, string);
		void dibujar();
};

Arquitectura::Arquitectura(string _nombre, int _edad, string _curso) : Alumno(_nombre, _edad, _curso)
{
	
}

void Arquitectura::dibujar()
{
	cout<<"EL ALUMNO "<<getnombre()<<" DE ARQUITECTURA DIBUJO"<<endl;
}

//_________________________________________________________________________________________________________________________________________

class ObrasPublicas : public Alumno
{
	public:
		ObrasPublicas(string, int, string);
		void disenar();
};

ObrasPublicas::ObrasPublicas(string _nombre, int _edad, string _curso) : Alumno(_nombre, _edad, _curso)
{
	
}

void ObrasPublicas::disenar()
{
	cout<<"EL ALUMNO "<<getnombre()<<" DE OBRAS PUBLICAS DISENO"<<endl;
}

//_____________________________________________________________________________________________________________________________________________________

main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	Informatica informatica1 = Informatica("PABLO SUAREZ", 23, "CALCULO");
	informatica1.levantarse();
	informatica1.comer();
	informatica1.dormir();
	informatica1.ir_a_clase();
	informatica1.examinarse();
	informatica1.programar();
	cout<<endl<<endl;
	getch();
	
	Arquitectura arquitectura1 = Arquitectura("YAN TANO", 24, "INGLES");
	arquitectura1.levantarse();
	arquitectura1.ir_a_clase();
	arquitectura1.examinarse();
	arquitectura1.dibujar();
	arquitectura1.comer();
	arquitectura1.dormir();
	cout<<endl<<endl;
	getch();
	
	ObrasPublicas obrasPublicas1 = ObrasPublicas("CRISTIAN ARBOLEDA", 25, "MATEMATICAS DISCRETAS 2");
	obrasPublicas1.levantarse();
	obrasPublicas1.ir_a_clase();
	obrasPublicas1.examinarse();
	obrasPublicas1.disenar();
	obrasPublicas1.comer();
	obrasPublicas1.dormir();
	cout<<endl<<endl;
	getch();
	
	Profesor profesor1 = Profesor("VICTOR MERCADO", 36, "INGENIERO", "ALGORITMOS");
	profesor1.levantarse();
	profesor1.dar_clase();
	profesor1.evaluar();
	profesor1.investigar();
	profesor1.comer();
	profesor1.dormir();
	profesor1.dormir();
	profesor1.dormir();
	profesor1.dormir();
	profesor1.dormir();
	
	getch();
}
