#include<iostream>
using namespace std;

main(){
	int n[100],*p=&n[0];
	int mayor, menor,c;
	int aux,pos[2];
	cout<<"cantidad de numeros a evaluar: ";
	cin>>c;
	new int[n[c]];
	for(int i=0; i<c; i++){
		cout<<"#"<<i+1<<": ";
		cin>>n[i];
		if(i==0){
			mayor=n[i];
			menor=n[i];
		}
	}
	//------------------------------------------------------------
	for(int i=0; i<c; i++){
		if(p[i]>mayor){
			mayor=p[i];
			pos[0]=i;
		}
		if(p[i]<menor){
			menor=p[i];
			pos[1]=i;
		}
	}
	aux=p[pos[0]];
	p[pos[0]]=p[pos[1]];
	p[pos[1]]=aux;
	cout<<"\n\nM: "<<mayor<<endl;
	cout<<"m: "<<menor<<endl<<endl;
	//------------------------------------------------------------
	for(int i=0; i<c; i++){
		cout<<"#"<<i+1<<": "<<p[i]<<endl;
	
	}
	
}

