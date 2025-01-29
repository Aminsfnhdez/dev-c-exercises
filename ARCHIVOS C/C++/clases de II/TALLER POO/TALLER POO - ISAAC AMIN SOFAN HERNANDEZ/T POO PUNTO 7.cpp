#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Barco
{
	private:
		string matricula;
		int longitud, anio_fabricacion, tipo;
	public:
		Barco(string, int, int);
		float ValorBasetipoBarco();	
		void setTipo(int);
		int getTipo();
};

Barco::Barco(string _matricula, int _longitud, int _anio_fabricacion)
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
 
 void Barco::setTipo(int _tipo)
 {
	tipo = _tipo;
 }
 
 int Barco::getTipo()
 {
 	return tipo;
 }
//_________________________________________________________________________________________________________________

class Velero : public Barco
{
	private:
		int mastiles;
	public:
		Velero(string, int, int, int);
		float calcularVelero();	
};

Velero::Velero(string _matricula, int _longitud, int _anio_fabricacion, int _mastiles) : Barco(_matricula, _longitud, _anio_fabricacion)
{
	mastiles = _mastiles;
}


float Velero::calcularVelero()
{
	float valor_especial;
	valor_especial = ValorBasetipoBarco();
	valor_especial += mastiles; 
	return valor_especial;
}

//____________________________________________________________________________________________________________________________________

class Deportivo : public Barco
{
	private:
		int potencia_CV;
	public:
		Deportivo(string, int, int, int);
		float calcularDeportivo();	
};

Deportivo::Deportivo(string _matricula, int _longitud, int _anio_fabricacion, int _potencia_CV) : Barco(_matricula, _longitud, _anio_fabricacion)
{
	potencia_CV = _potencia_CV;
}

float Deportivo::calcularDeportivo()
{
	float valor_especial;
	valor_especial = ValorBasetipoBarco();
	valor_especial += potencia_CV; 
	return valor_especial;
}

//__________________________________________________________________________________________________________________________________

class Yate : public Barco
{
	private:
		int potencia_CV, camarotes;
	public:
		Yate(string, int, int, int, int);
		float calcularYate();	
}; 

Yate::Yate(string _matricula, int _longitud, int _anio_fabricacion, int _potencia_CV, int _camarotes) : Barco(_matricula, _longitud, _anio_fabricacion)
{
	potencia_CV = _potencia_CV;
	camarotes = _camarotes;
}

float Yate::calcularYate()
{
	float valor_especial;
	valor_especial = ValorBasetipoBarco();
	valor_especial += potencia_CV + camarotes; 
	return valor_especial;
}

//___________________________________________________________________________________________________________________________________

class Alquiler
{
	private:
		string nom_cliente, posicion_amarre;
		int ced_cliente, dia_ini, mes_ini, anio_ini;
		int dia_fin, mes_fin, anio_fin;
	public:
		Alquiler(string, string, int, int, int, int, int, int, int);
		void calcular();
		void mostrar();
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

void Alquiler::calcular()
{
	int x_tipo, dias;
	float total;
	x_tipo = Barco::getTipo();
	dias = (dia_fin - dia_ini + 1) + ((mes_fin - mes_ini) * 30) + ((anio_fin - anio_ini) * 365);
	if(x_tipo==1)
	{
		total = Velero::calcularVelero();
		cout<<"EL VALOR TOTAL A PAGAR POR EL ALQUILER ES: "<<total * dias<<endl<<endl;
	}
	if(x_tipo==2)
	{
		total = calcularDeportivo();
		cout<<"EL VALOR TOTAL A PAGAR POR EL ALQUILER ES: "<<total * dias<<endl<<endl;
	}
	if(x_tipo==3)
	{
		total = calcularYate();
		cout<<"EL VALOR TOTAL A PAGAR POR EL ALQUILER ES: "<<total * dias<<endl<<endl;
	}
	
}

void Alquiler::mostrar()
{
	int x_tipo, dias;
	x_tipo = getTipo();
	dias = (dia_fin - dia_ini + 1) + ((mes_fin - mes_ini) * 30) + ((anio_fin - anio_ini) * 365);
	cout<<"\t\tSACANDO SU FACTURA"<<endl;
	cout<<"CLIENTE: "<<nom_cliente<<endl;
	cout<<"ID CLIENTE: "<<ced_cliente<<endl;
	if(x_tipo==1)
	{
		cout<<"ALQUILÓ UN BARCO TIPO: VELERO"<<endl;
	}
	if(x_tipo==2)
	{
		cout<<"ALQUILÓ UN BARCO TIPO: DEPORTIVO A MOTOR"<<endl;
	}
	if(x_tipo==1)
	{
		cout<<"ALQUILÓ UN BARCO TIPO: YATE DE LUJO"<<endl;
	}
	cout<<"AMARRADO EN: "<<posicion_amarre<<endl;
	cout<<"\tFECHA INICIAL DE ALQUILER"<<endl;
	cout<<"DIA "<<dia_ini<<" DEL MES "<<mes_ini<<" DEL AÑO "<<anio_ini<<endl;
	cout<<"\tFECHA FINAL DE ALQUILER"<<endl;
	cout<<"DIA "<<dia_fin<<" DEL MES "<<mes_fin<<" DEL AÑO "<<anio_fin<<endl;
	cout<<"DIAS TOTALES DE ALQUILER: "<<dias<<endl;
	calcular();
}

//_______________________________________________________________________________________________________
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	
}

