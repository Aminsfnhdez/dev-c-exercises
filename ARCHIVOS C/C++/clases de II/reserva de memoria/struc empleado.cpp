#include<iostream>
using namespace std;

struct empleados{
	
	char name[20],cargo[20];
	int edad;
}empleado[3];

main(){
	int i=0,mayor=0,pos;
	
	while(i<3){
		fflush(stdin); //vaciar bufer
		cout<<i<<". nombre: ";
		cin.getline(empleado[i].name,20, '\n');
		
		cout<<"cargo: ";
		cin.getline(empleado[i].cargo,20, '\n');
		
		cout<<"edad: ";
		cin>>empleado[i].edad;
		
		i++;
	}
	
	for(int k=0; k<3;k++){
		if(empleado[k].edad>mayor){
			mayor=empleado[k].edad;
			pos=k;
		}
		
	}
	cout<<endl<<"El empleado mayor es :"<<empleado[pos].name<<endl;
}

