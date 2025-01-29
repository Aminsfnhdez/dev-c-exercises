// Taller 7 Ejercicio 4 Ciclos C++
// Autor Isaac Amín Sofán Hernández
#include <iostream>
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'

using namespace std;
void grupos (int);
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	cout<<"Por favor ingrese el número de grupos a evaluar"<<endl;
	cin>>n;
	grupos(n);
	
	getch();
}
void grupos(int N)
{
	int m_alum, k_mat;
	float notas=0, promEst, prom_tot, acum_tot=0, acum_prom_est=0, acum_mat=0, prom_mat=0, prom_grup=0, acum_grup=0;
	for(int i=0; i<N; i++)
	{
		cout<<"Digite la cantidad de alumnos que tiene el grupo "<<i+1<<endl;
		cin>>m_alum;
		cout<<m_alum<<endl;
		cout<<"Digite la cantidas de materias que cursan los alumnos del grupo "<<i+1<<endl;
		cin>>k_mat;
		cout<<k_mat<<endl;
		float vec_not[3];
		for(int j=0; j<m_alum; j++)
		{
			
			for(int k=0; k<k_mat; k++)
			{
				for(int snot=0; snot<3; snot++)
				{
					cout<<"\nDigite la nota "<<snot+1<<" de la materia "<<k+1<<" del alumno "<<j+1<<" del grupo "<<i+1<<endl;
					cin>>vec_not[snot];
					notas=notas+vec_not[snot];
					cout<<notas<<endl;
				}
				promEst=notas/3;
				cout<<promEst<<endl;
				acum_prom_est = acum_prom_est + promEst;
				cout<<acum_prom_est<<endl;
				notas = 0;
				cout<<"Alumno "<<j+1<<", su promedio de la materia "<<k+1<<" es: "<<promEst<<endl;
				promEst = 0;
			}
				
		}
		acum_grup = acum_grup + acum_prom_est;
		cout<<iacum_grup<<endl;
		prom_grup = acum_grup / (m_alum*k_mat);
		cout<<prom_grup<<endl;
		cout<<"El promedio del grupo "<<i+1<<" es: "<<prom_grup<<endl;
		acum_tot = acum_tot + prom_grup;
		cout<<acum_tot<<endl;
		prom_grup = 0;
		m_alum=0;
		k_mat=0;
	} 
	prom_tot = acum_tot / N;
	cout<<prom_tot<<endl;
	cout<<"El promedio total de los grupos es: "<<prom_tot<<endl;
}
