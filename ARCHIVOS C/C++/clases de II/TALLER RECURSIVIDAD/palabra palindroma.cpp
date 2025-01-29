// palabra palindroma = si se lee igual en ambas direcciones;
#include<iostream>
#include<string.h>
using namespace std;
// ana
int validacion(char p[], int t, int ban){
	if(ban>=t){
		return 1;
	}
	if(p[ban]==p[t]){
		validacion(p,t-1, ban+1);
	}else{
		return 0;
	}
	
}

main(){
	int tamanio;
	char palabra[100];
	cout<<"ingrese la palabra: ";
	cin>>palabra;
	tamanio = strlen(palabra);
	
	if(validacion(palabra, tamanio-1, 0)==1){
		cout<<"la palabra es PALINDROMA "<<endl;
	}else{
		cout<<"No es PALINDROMA la palabra"<<endl;
	}
	
	
}
