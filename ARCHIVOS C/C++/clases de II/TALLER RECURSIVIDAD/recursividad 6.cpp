#include<iostream>

using namespace std;

int multiplicar(int,int);

int main(){
	int n,m,bandera=1;
	
	do{	
		cout<<"ingrese un numero: ";
		cin>>n;
		cout<<"Ingrese el multiplicador: ";
		cin>>m;
		cout<<"el resultado de "<<n<<" es: ";
		cout<<multiplicar(n,m);
		cout<<endl<<"desea multiplicar otro numero? "<<endl;
		cout<<"1. si"<<endl;
		cout<<"0. no"<<endl;
		cout<<"R/= "; cin>>bandera;
	}while(bandera!=0);
}
int multiplicar(int num, int mul){
	if((num==0)||(mul==0)){
		return 0;
	}
	if(mul==1){
		return num;
	}
	if(num==1){
		return mul;
	}
	else{
		return num + multiplicar(num,mul-1);
	}
	
}
