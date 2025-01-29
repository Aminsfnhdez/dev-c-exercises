#include<iostream>
#include<conio.h>
using namespace std;
float sub_promedio();
int matriz[100][100];int acom, fil,colu,i,j,cont=0; float prom;
main(){
	cout<<"Digite las filas de la matriz"<<endl;
	cin>>fil;
	cout<<endl;
	cout<<"Digite las columnas de la matriz"<<endl;
	cin>>colu;
	
	for(i=0;i<fil;i++){
	for(j=0;j<colu;j++){
		cout<<"Digite el valor en la fila "<<i<<" columna "<<j<<endl;
		cin>>matriz[i][j];
	}
}
	cout<<"******MOSTRAR MATRIZ*******"<<endl;
	for(i=0;i<fil;i++){
		for(j=0;j<colu;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}	
	sub_promedio();
}
float sub_promedio(){
	if(fil==colu){
		for(i=0;i<fil-1;i++){
			for(j=i+1;j<colu;j++){
				acom=acom+matriz[i][j];
				cont++;
				
			}
		}
		prom=acom/cont;
		cout<<"El promedio sobre la linea diagonal de la matriz es: "<<prom<<endl;
	}
	else{
		acom=acom+matriz[0][0];
		acom=acom+matriz[fil-1][0];
		acom=acom+matriz[0][colu-1];
		acom=acom+matriz[fil-1][colu-1];
		prom=acom/4;
		cout<<"El promedio de los extremos de la matriz es: "<<prom<<endl;
	}
}

