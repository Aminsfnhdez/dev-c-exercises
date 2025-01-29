#include<iostream>
//division con resta sucesiva =D
using namespace std;

int resta_sus(int N,int NN){
	if(N < NN){
		return 0;
	}
		if(NN==1){
			return 1;
		}
	else
	{
		return resta_sus(N-NN,NN)+1;
	}
	
}


int main()
{
	int n,nn,bandera=1;
	do{
		cout<<"ingrese el primer numero: "<<endl;
		cin>>n;
		cout<<"Ingrese el segundo numero: "<<endl;
		cin>>nn;
		cout<<"Resultado: "<<resta_sus(n,nn);
		cout<<endl;
		cout<<"desea calcular otra resta sucesiva?"<<endl;
		cout<<"1. Si"<<endl<<"2. No"<<endl;
		cin>>bandera;
		
	}while(bandera!=2);
		
}
