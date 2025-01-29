#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>


using namespace std;

/*
struct tm {

 int tm_sec;   // Segundos pasados del minuto (0-61)

 int tm_min;   // Minutos pasados de la hora (0-59)

 int tm_hour;  // Horas desde medianoche (0-23)

 int tm_mday;  // Dia del mes (1-31)

 int tm_mon;   // Número del mes (0-11)

 int tm_year;  // Años transcurridos desde 1900

 int tm_wday;  // Dia de semana (0-6; Domingo = 0)

 int tm_yday;  // Dia del año (0-365)

 int tm_isdst; /* Adelanto de hora para horario de verano

                   1=Si; 0=No; -1=Indefinido */


class Persona{
	private:
		string nombre;
		int dia, mes, anio;
	public:
		Persona(string,int,int,int);
		void mostrar_fecha();
		void calcular_edad();
};

Persona::Persona(string _nombre, int _dia, int _mes, int _anio)
{
	nombre = _nombre;
	dia = _dia;
	mes = _mes;
	anio = _anio;
}

void Persona::mostrar_fecha()
{
	cout<<"LA PERSONA: "<<nombre<<endl;
	cout<<"NACIÓ EN EL DÍA: "<<dia<<" DEL MES "<<mes<<" DEL AÑO "<<anio<<endl;
	calcular_edad();
}
void Persona::calcular_edad()
{
	int anios, meses, dias;	
	time_t 	now= time(NULL);
	struct	tm *time= localtime(&now);
    anios = (time->tm_year+1900) - (anio + 1);
    meses = (time->tm_mon+1) - mes;
    dias = (time->tm_mday) - dia;
    if((dias<0) || (meses<0))
    {
    	if(dias<0)
    	{
    		dias += 30;
		}
		if(meses<0)
		{
			meses += 12;
		}
		cout<<"TIENE: "<<anios<<" AÑOS, "<<meses<<" MESES, "<<dias<<" DÍAS DE VIDA"<<endl;
	}
    else
    {
    	cout<<"TIENE: "<<anios<<" AÑOS, "<<meses<<" MESES, "<<dias<<" DÍAS DE VIDA"<<endl;
	}
    
    
       
}
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	int d,m,a;
	string name;
	cout<<"INGRESE SU NOMBRE: ";	cin>>name; 	 cout<<endl;
	cout<<"INGRESE SU DÍA DE NACIMIENTO: ";		cin>>d; 	cout<<endl;
	cout<<"INGRESE SU MES DE NACIMIENTO: ";		cin>>m;		cout<<endl;
	cout<<"INGRESE SU AÑO DE NACIMIENTO: ";		cin>>a;		cout<<endl;
	
	Persona persona1 = Persona(name,d,m,a);
	persona1.mostrar_fecha();
}
