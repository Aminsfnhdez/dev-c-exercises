#include<iostream>
#include<conio.h>
using namespace std;
void menu();
void llenar_matriz();void mostrar_matriz();void ordenar();
int op=0,f,c,i,j,bandera=0,mini,aux;int matriz[100][100];
main(){
	menu();
}
void menu(){
	while(op<5){
		cout<<"1. Ingresar las dimenciones de la matriz"<<endl;
		cout<<"2. Para llenar la matriz"<<endl;
		cout<<"3. Mostrar la matriz"<<endl;
		cout<<"Ordenar la columnas de ascendente "<<endl;
		cout<<"5. Para salir"<<endl;
		cin>>op;
		switch(op){
			case 1:cout<<"Digite el numero de filas de la matriz"<<endl;
				cin>>f;
				cout<<"Digite el numero de columnas de la matriz"<<endl;
				cin>>c;
				bandera=1;
				break;
			case 2: llenar_matriz();
				break;
			case 3: mostrar_matriz();
			break;	
			case 4: ordenar();
			break;
			case 5: cout<<"HASTA LA PROXIMA"<<endl;
//			default
		}
	}
}
void llenar_matriz(){
	if(bandera=1){
		cout<<"******LLENAR MATRIZ*******"<<endl;
		for(i=0;i<f;i++){
	for(j=0;j<c;j++){
		cout<<"Digite el valor en la fila "<<i<<" columna "<<j<<endl;
		cin>>matriz[i][j];
	}
	}
}
else{
	cout<<"Error por favor digite primero las dimensiones de la matriz"<<endl;
	getch();
}
}
void mostrar_matriz(){
	{
		cout<<"******MOSTRAR MATRIZ*******"<<endl;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}	
	getch();
	}
}
void ordenar(){
	cout<<"******ORDENAR MATRIZ ASCENDENTE*******"<<endl;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			mini=j;
			aux=matriz[j][i];
			while((mini>0)&&(matriz[mini-1][i]>aux)){
				matriz[mini][i]=matriz[mini-1][i];
				mini--;
			}
			matriz[mini][i]=aux;
	}
}
}
