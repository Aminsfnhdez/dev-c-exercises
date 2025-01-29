#include<iostream>
#include<conio.h>
using namespace std;

void prom_g();
void prom_asignatura();
void prom_estudiante();
int estudiante=5,asignatura=2;
int mat[30][5]={0};
int i,j;
main()
{
	prom_g();
	prom_asignatura();
	prom_estudiante();
}
void prom_g()
{

	
	for(i=0;i<estudiante;i++)//filas
	{
		for(j=0;j<asignatura;j++)//columnas
		{
			
			cout<<"Digite la nota del estudiante  "<<i<<" en la asignatura  "<<j<<endl;
			cin>>mat[i][j];
		}
	}
}
void prom_asignatura()
{
	float suma=0,promedio=0;
	cout<<"vamos a promediar cada asignatura "<<endl;
	for(i=0;i<asignatura;i++)//filas
	{
		for(j=0;j<estudiante;j++)//columnas
		{
		  suma=suma+mat[j][i];
		  promedio=suma/estudiante;
		  cout<<"el promedio de general de la asignatura "<<i<<" es: "<<promedio<<endl;	
		}
		suma=0;
		getch();
	}
}
void prom_estudiante()
{
	int suma=0,promedio=0;
	cout<<"El resultado general de los estudiante "<<endl;
	for(i=0;i<estudiante;i++)//filas
	{
		
		for(j=0;j<asignatura;j++)
		{
		  suma=suma+mat[j][i];
		  promedio=suma/estudiante;
		  cout<<"el promedio de general de los estudiante "<<i<<" es: "<<promedio<<endl;		
		}
	suma=0;
	getch();	
	}
	
}
