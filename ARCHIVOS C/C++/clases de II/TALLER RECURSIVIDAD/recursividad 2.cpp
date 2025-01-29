#include<iostream>
using namespace std;

int potencia(int,int);

int main(){
	int n,p,bandera=1,r;
	
	do{	
		cout<<"ingrese un numero: ";
		cin>>n;
		cout<<"ingrese el exponente: ";
		cin>>p;
//		r=factorial(n);
		cout<<"el exponente de "<<n<<" es: "<<potencia(n,p)<<endl;
		cout<<"desea calcular otra potencia? "<<endl;
		cout<<"1. si"<<endl;
		cout<<"0. no"<<endl;
		cout<<"R/= "; cin>>bandera;
	}while(bandera!=0);
}
int potencia(int n, int p){
	if(p==0){
		return 1;
		}
		if(p==1){
			return n;
		}
	else{
		return n*potencia(n,p-1);
	}
	
}

