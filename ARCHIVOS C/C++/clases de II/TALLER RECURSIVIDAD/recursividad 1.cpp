#include<iostream>

using namespace std;

int factorial(int);

int main(){
	int n, bandera=1,r;
	
	do{	
		cout<<"ingrese un numero: ";
		cin>>n;
		cout<<"el factorial de "<<n<<" es: "<<factorial(n)<<endl;
		cout<<"desea agregar otro numero: "<<endl;
		cout<<"1. si"<<endl;
		cout<<"0. no"<<endl;
		cout<<"R/= "; cin>>bandera;
	}while(bandera!=0);
	
}
int factorial(int n){
	if(n==0){
		n=1;
	}
	else{
		n=n*factorial(n-1);
	}
	return n;
}
