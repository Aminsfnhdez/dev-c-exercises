#include<iostream>

using namespace std;

int sumar(int);

int main(){
	int n,bandera=1;
	
	do{	
		cout<<"ingrese el limite donde desea calcular la suma: ";
		cin>>n;
		cout<<"la suma de "<<n<<" es: ";
		cout<<sumar(n);
		cout<<endl<<"desea calcular otra suma? "<<endl;
		cout<<"1. si"<<endl;
		cout<<"0. no"<<endl;
		cout<<"R/= "; cin>>bandera;
	}while(bandera!=0);
}
int sumar(int n){
	if(n==1){
		return 1;
	}
	else if(n==0){
		return 0;
	}
	else{
		return n + sumar(n-1);
	}
}

