#include<iostream>

using namespace std;

void invertir(int);

int main(){
	int n,bandera=1;
	
	do{	
		cout<<"ingrese un numero a convertir: ";
		cin>>n;
		cout<<"el inverso de  "<<n<<" es: ";
		invertir(n);
		cout<<endl<<"desea invertir otro numero? "<<endl;
		cout<<"1. si"<<endl;
		cout<<"0. no"<<endl;
		cout<<"R/= "; cin>>bandera;
	}while(bandera!=0);
}
void invertir(int n){
	cout<<n%10;
	if(n>10){
		invertir(n/10);
	}
//	else{
//		invertir(n/10);
//	}
}
