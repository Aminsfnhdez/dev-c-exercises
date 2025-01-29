#include<iostream>

using namespace std;

void convertir(int);

int main(){
	int n,bandera=1;
	
	do{	
		cout<<"ingrese un numero a convertir: ";
		cin>>n;
		cout<<"el binario de "<<n<<" es: ";
		convertir(n);
		cout<<endl<<"desea calcular otro decimal? "<<endl;
		cout<<"1. si"<<endl;
		cout<<"0. no"<<endl;
		cout<<"R/= "; cin>>bandera;
	}while(bandera!=0);
}

void convertir(int n){
	if(n>1){
		convertir(n/2);
	}
		cout<<n%2;
}
