#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>
#include<windows.h>

using namespace std;
int op;

class Reloj
{
	private:
		int hora, minutos, segundos;
	public:
		Reloj(int,int,int);
		void mostrar();
		void puesta_a_cero();
		void incremento();
		void pausa();
};

Reloj::Reloj(int _hora, int _minutos, int _segundos){
	hora=_hora;
	minutos=_minutos;
	segundos=_segundos;
}

void Reloj::puesta_a_cero()
{
	
	hora=0;
	minutos=0;
	segundos=0;
	system("cls");
	cout<<"EL CRONOMETRO SE HA REINICIADO"<<endl;
	cout<<hora<<" : "<<minutos<<" : "<<segundos<<endl;
}

void Reloj::pausa()
{
	system("cls");
	cout<<"EL CRONOMETRO SE HA PAUSADO"<<endl;
	cout<<hora<<" : "<<minutos<<" : "<<segundos<<endl;
}

void Reloj::incremento()
{
	bool band = true;
	do{
		for(hora;hora<24;hora++)
		{	
			for(minutos;minutos<60;minutos+=10)
			{
				for(segundos;segundos<60;segundos+=10)
				{
					Sleep(1000);
					cout<<hora<<" : "<<minutos<<" : "<<segundos<<endl<<endl;
					cout<<"DIGITE 1 PARA PAUSAR EL CRONOMETRO"<<endl;
					cout<<"DIGITE 2 PARA REINICIAR EL CRONOMETRO"<<endl;
					cout<<"DIGITE 3 PARA CONTINUAR EL INCREMENTO DEL CRONOMETRO"<<endl;
					cout<<"DIGITE AQUI SU OPCION: ";	cin>>op;
					if(op == 1)
					{
						band = false;
						pausa();
						segundos = 70;
						minutos = 70;
						break;
					}
					
					if(op == 2)
					{
						band = false;
						puesta_a_cero();
						segundos = 70;
						minutos = 70;
						break;
					}	
				}
				
			
				if(segundos==60)
				{
					segundos=0;
				}
			}
			
			if(minutos==60)
			{
				minutos=0;
			}
		}
		
	}while(((hora<24)&&((minutos<60)||(segundos<60))) && (band==true));
	
	if( band == true)
	{
		hora=0;
		minutos=0;
		segundos=0;
		Sleep(1000);
		cout<<hora<<" : "<<minutos<<" : "<<segundos<<endl;
	}
	
	
}
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	Reloj crono1 = Reloj(0,0,0);
	crono1.incremento();
}

