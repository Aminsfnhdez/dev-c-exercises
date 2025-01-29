#include<iostream>
#include <stdio.h>
#include<stdlib.h>//para el uso de memoria dinamica para usar new y delete
using namespace std;
void PedirMedicion();
void MostrarMediciones();
int NMedicion, *Medicion;
int main (){
	PedirMedicion();
	MostrarMediciones();
	delete [] Medicion;
}
void PedirMedicion(){
	cout<<"por favor ingresa el numero de dias a digitar/ ";
	cin>>NMedicion;
	Medicion = new int[NMedicion]; //Creando el Arreglo de tipo puntero y reservando memoria.
	for (int i=0; i<NMedicion; i++){
		cout<<"Por favor digita el numero de la medicion del dia "<<i+1<<": ";
		cin>>Medicion[i];
	}
}
void MostrarMediciones()
{
	int promedio=0,;
	for (int i=0; i<NMedicion; i++){
		promedio=promedio+Medicion[i];
	}
	promedio=promedio/NMedicion;
	cout<<" Promedio de autos al dia: "<<promedio;
	
	for (int i=0; i<NMedicion; i++)
	{
		if(i==0){
			menor=Medicion[i];
			pos=i;
		}else{
			if(Medicion[i]<menor){
				menor=Medicion[i];
				pos=i;
			}
		}

	}
}

