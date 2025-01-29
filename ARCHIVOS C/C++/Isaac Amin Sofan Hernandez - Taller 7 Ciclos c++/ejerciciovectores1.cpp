#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	int cant_alumnos, cant_notas, cont_gan=0, cont_perd=0, contal=0, contnt=0;
	float notas=0, promEst, prom_tot, acum_prom=0;
	cout<<"Digite la cantidad de estudiantes: ";
	cin>>cant_alumnos;
	int valum[cant_alumnos];
	cout<<"Digite la cantidad de notas por estudiante: ";
	cin>>cant_notas;
	float vnotas[cant_notas];
	cout<<"\n========== Registo de notas ==========\n";
	for (contal=0;contal<cant_alumnos;contal++)
	{
		cout<<"\nPor favor a continuacion digite la notas del estudiante #: "<<contal+1<<endl;
		for (contnt=0;contnt<cant_notas;contnt++)
		{
			cout<<"\nDigite la nota # "<<contnt+1<<": ";
			cin>>vnotas[contnt];
			notas=notas+vnotas[contnt];
		}
		promEst=notas/cant_notas;
		acum_prom = acum_prom + promEst;
		notas = 0;
		if (promEst>=3)
			{
				cont_gan=cont_gan+1;
				
			}
			else
			{	
				cont_perd=cont_perd+1;
			}
		cout<<"\nEstudiante su promedio es: "<<promEst;
		
		getch();
	}
	prom_tot = acum_prom /cant_alumnos;
	system("cls");
	cout<<"Cantidad de estudiantes que ganaron: "<<cont_gan<<endl;
	cout<<"Cantidad de estudiantes que perdieron: "<<cont_perd<<endl;
	cout<<"El promedio total de los estudiantes es: "<<prom_tot<<endl;	
}
