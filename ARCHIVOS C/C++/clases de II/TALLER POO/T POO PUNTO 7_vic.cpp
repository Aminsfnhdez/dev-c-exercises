#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Alquiler
{	
	private:
		string nom_cliente, posicion_amarre;
		int ced_cliente, dia_ini, mes_ini, anio_ini;
		int dia_fin, mes_fin, anio_fin;
	public:
		Alquiler(string, string, int, int, int, int, int, int, int);
		int calcular();
		virtual	void mostrar();
};
Alquiler::Alquiler(string _nombre, string _posicion, int _cedula, int _dia_ini, int _mes_ini, int _anio_ini, int _dia_fin, int _mes_fin, int _anio_fin)
{
	nom_cliente = _nombre;
	posicion_amarre = _posicion;
	ced_cliente = _cedula;
	dia_ini = _dia_ini; 
	mes_ini = _mes_ini;
	anio_ini = _anio_ini;
	dia_fin = _dia_fin;
	mes_fin = _mes_fin;
	anio_fin = _anio_fin;
}

int Alquiler::calcular()
{
	int dias;
	dias = (dia_fin - dia_ini + 1) + ((mes_fin - mes_ini) * 30) + ((anio_fin - anio_ini) * 365);
	return dias;
	
}

void Alquiler::mostrar()
{
	
	cout<<"\t\tSACANDO SU FACTURA"<<endl;
	cout<<"CLIENTE: "<<nom_cliente<<endl;
	cout<<"ID CLIENTE: "<<ced_cliente<<endl;
	cout<<"AMARRADO EN: "<<posicion_amarre<<endl;
	cout<<"\tFECHA INICIAL DE ALQUILER"<<endl;
	cout<<"DIA "<<dia_ini<<" DEL MES "<<mes_ini<<" DEL AÑO "<<anio_ini<<endl;
	cout<<"\tFECHA FINAL DE ALQUILER"<<endl;
	cout<<"DIA "<<dia_fin<<" DEL MES "<<mes_fin<<" DEL AÑO "<<anio_fin<<endl;
	cout<<"DIAS TOTALES DE ALQUILER: "<<calcular()<<endl;
}

class Barco: public Alquiler
{
	private:
		string matricula;
		int longitud, anio_fabricacion;
	public:
		Barco(string, string, int, int, int, int, int, int, int,string, int, int);
		float ValorBasetipoBarco();
		void mostrar();
};

Barco::Barco(string _nombre, string _posicion, int _cedula, int _dia_ini, int _mes_ini, int _anio_ini, int _dia_fin, int _mes_fin, int _anio_fin,string _matricula, int _longitud, int _anio_fabricacion):Alquiler(_nombre, _posicion, _cedula, _dia_ini, _mes_ini, _anio_ini, _dia_fin, _mes_fin, _anio_fin)
{
	matricula = _matricula;
	longitud = _longitud;
	anio_fabricacion = _anio_fabricacion;
}

float Barco::ValorBasetipoBarco()
{
	float valor_base;
	valor_base = longitud * 1000;
	return valor_base;
}
void Barco::mostrar(){
	Alquiler::mostrar();
	cout<<"La matricula del Varco es: "<<matricula<<endl;
	cout<<"la longitud del Barco es: "<<longitud<<endl;
	cout<<"el año de fabricacion es: "<<anio_fabricacion<<endl;
	
}
//_________________________________________________________________________________________________________________

class Velero : public Barco
{
	private:
		int mastiles;
	public:
		Velero(string, string, int, int, int, int, int, int, int,string, int, int, int);
		void calcularVelero();
		void mostrar();
};

Velero::Velero(string _nombre, string _posicion, int _cedula, int _dia_ini, int _mes_ini, int _anio_ini, int _dia_fin, int _mes_fin, int _anio_fin,string _matricula, int _longitud, int _anio_fabricacion, int _mastiles) : Barco(_nombre, _posicion, _cedula, _dia_ini, _mes_ini, _anio_ini, _dia_fin, _mes_fin, _anio_fin,_matricula, _longitud, _anio_fabricacion)
{
	mastiles = _mastiles;
}


void Velero::calcularVelero()
{
	float valor_especial;
	valor_especial = ValorBasetipoBarco();
	valor_especial += mastiles*Alquiler::calcular(); 
	valor_especial = valor_especial * Alquiler::calcular();
	cout<<"El valor a pagar por el alquiler para el Velero es: "<< valor_especial<<endl;
	
}
void Velero::mostrar(){
	Barco::mostrar();
	cout<<"El numero de mastiles del velero es: "<<mastiles<<endl;
	calcularVelero();
}

//____________________________________________________________________________________________________________________________________

class Deportivo : public Barco
{
	private:
		int potencia_CV;
	public:
		Deportivo(string, string, int, int, int, int, int, int, int,string, int, int, int);
		void calcularDeportivo();
		void mostrar();	
};

Deportivo::Deportivo(string _nombre, string _posicion, int _cedula, int _dia_ini, int _mes_ini, int _anio_ini, int _dia_fin, int _mes_fin, int _anio_fin,string _matricula, int _longitud, int _anio_fabricacion, int _potencia_CV) : Barco(_nombre, _posicion, _cedula, _dia_ini, _mes_ini, _anio_ini, _dia_fin, _mes_fin, _anio_fin,_matricula, _longitud, _anio_fabricacion)
{
	potencia_CV = _potencia_CV;
}

void Deportivo::calcularDeportivo()
{
	float valor_especial;
	valor_especial = ValorBasetipoBarco();
	valor_especial += potencia_CV; 
	valor_especial = valor_especial * Alquiler::calcular();
	cout<<"El valor a pagar por el alquiler para el Depoirtivo es: "<< valor_especial<<endl;

}
void Deportivo::mostrar(){
	Barco::mostrar();
	cout<<"la potencia del deportivo es: "<<potencia_CV<<endl;
	calcularDeportivo();
}

//__________________________________________________________________________________________________________________________________

class Yate : public Barco
{
	private:
		int potencia_CV, camarotes;
	public:
		Yate(string, string, int, int, int, int, int, int, int,string, int, int, int, int);
		void calcularYate();	
		void mostrar();
}; 

Yate::Yate(string _nombre, string _posicion, int _cedula, int _dia_ini, int _mes_ini, int _anio_ini, int _dia_fin, int _mes_fin, int _anio_fin,string _matricula, int _longitud, int _anio_fabricacion, int _potencia_CV, int _camarotes) : Barco(_nombre, _posicion, _cedula, _dia_ini, _mes_ini, _anio_ini, _dia_fin, _mes_fin, _anio_fin,_matricula, _longitud, _anio_fabricacion)
{
	potencia_CV = _potencia_CV;
	camarotes = _camarotes;
}

void Yate::calcularYate()
{
	float valor_especial;
	valor_especial = ValorBasetipoBarco();
	valor_especial += potencia_CV + camarotes; 
	valor_especial = valor_especial * Alquiler::calcular();
	cout<<"El valor a pagar por el alquiler para el yate es: "<< valor_especial<<endl;
}
void Yate::mostrar(){
	Barco::mostrar();
	cout<<"la potencia en caballos de fuerza: "<<potencia_CV<<endl;
	cout<<"el numero de camarotes que tiene el yate es: "<<camarotes<<endl;
	calcularYate();
}

//___________________________________________________________________________________________________________________________________




//_______________________________________________________________________________________________________
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	Yate b1= Yate("el Sabroso", "SR34565", 14578, 10,1,2020,15,1,2020,"fer5875",100,2000,10000,10);
	b1.mostrar();
	
}

