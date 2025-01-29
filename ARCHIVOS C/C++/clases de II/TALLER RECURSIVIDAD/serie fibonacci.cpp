//serie fibonacci con recursividad algoritmica procesada 2.0 :)
// 0 1 1 2 3 5 8 13 21 34 55 ....

#include<iostream>
using namespace std;

int ultimo=1, penultimo=0, nuevo;

void serie(int n){
	if(n==0){//sirve pero no sirve
//		cout<<"0"<<endl; 
	}else{
	cout<<ultimo<<endl;
	if(n>1){
	nuevo=ultimo+penultimo;	
	penultimo=ultimo;
	ultimo=nuevo;
	serie(n-1);
	}else{
//		cout<<"\nSe acabo, llego a la pos "<<n<<endl;
	}
	}	
}

int posfibo(int n){
	if(n==0){
		return 0;
	}
	if((n==1)||(n==2)){
		return 1;
	}else{
		return posfibo(n-1)+posfibo(n-2); //seguros????? -_-
	}
	
}

main(){
	int N, op;
	
	cout<<"MENU:\n1. Imprimir serie hasta\n2. Imprimir pos exacta\nR: ";
	cin>>op;
	if(op==1){
	cout<<"Digite las posiciones max de la serie: ";
	cin>>N;
	cout<<"0"<<endl;
	serie(N);
	}else{
		cout<<"Posicion a imprimir: ";
			cin>>N;
		system("CLS");
		cout<<"el numero en la pos #"<<N<<" es: "<<posfibo(N)<<endl;
	}
	
}

