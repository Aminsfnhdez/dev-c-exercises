#include<iostream>
#include<conio.h>
#include<stdlib.h>//para new delete reservado de memoria
using namespace std;
void PedirDatos();
void MostrarMatriz(int **,int,int);
int **PunteroM, Nf, Nc;


int main (){
	PedirDatos();
	MostrarMatriz(PunteroM,Nf,Nc);
	for(int i=0; i<Nf; i++){
		delete [] PunteroM[i];
	}
	delete [] PunteroM;
	
	getch();
	return(0);
}
void PedirDatos(){
	cout<<"Digita el numero de de filas: ";
	cin>>Nf;
	cout<<"Digita el numero de de columnas: ";
	cin>>Nc;
	PunteroM= new int*[Nf];//reservando memoria para las filas
	for (int i=0; i<Nf; i++){
		PunteroM[i]=new int[Nc];//reservando memoria para las columnas
	}
	
	for(int i=0; i<Nf; i++){
		for(int j=0; j<Nc; j++){
			cout<<"ingrese el numero de la posicion ["<<i+1<<"] ["<<j+1<<"]: ";
			cin>>*(*(PunteroM+i)+j);
		}
	}
}
void MostrarMatriz(int **PunteroM, int Nf, int Nc){
for(int i=0; i<Nf; i++){
	for (int j=0; j<Nc; j++){
		cout<<*(*(PunteroM+i)+j)<<"	";
	}
	cout<<endl;	
}

}


