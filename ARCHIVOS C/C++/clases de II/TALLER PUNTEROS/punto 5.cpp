#include<iostream>
using namespace std;

main(){
	int c,num,pos,ban=0;
	
cout<<"cantidad de numeros a evaluar: ";
	cin>>c;
	
	int n[c],*p=&n[0];//variables principales
	
	for(int i=0; i<c; i++){
		cout<<"#"<<i+1<<": ";
		cin>>n[i];
	}	
	cout<<"\nDigita el numero a encontrar en el arreglo: ";
	cin>>num;
	//__________________________________________________
	for(int i=0; i<c; i++){
		if(p[i]==num){
			pos==i;//pos nose porque no toma a i
			i=c;
			ban=0;
		}else{
			ban++;
		}
	}
	//___________________________________________________
	if(ban==0){
	cout<<"el numero "<<num<<" esta en la posicion: "<<pos;
	cout<<"\n su direccion de memoria es: "<<*p;//aqui no me da
	}else{
		cout<<"el numero no esta en el arreglo"<<endl;
	}

	
}

