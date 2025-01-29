#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int op=0, i, j, cargo, pos;
float matriz[5][8]={0}, vector[5], aux; 
//char datos[1][8]=´{TRABAJADOR, CANTIDA_HORAS, CARGO, INGRESOS, BONIFICACIONES, DEDUCCIONES, TOTAL};
void registro()
{

	for(i=0; i<5; i++)
	{
			cout<<"\t\t\t ======= REGISTRANDO INGRESOS ======="<<endl;
		for(j=0; j<8; j++)
		{
			if(j==0){
				matriz[i][j] = i+1;
			}
			if(j==1){
				cout<<"DIGITE LA CANTIDAD DE HORAS QUE TRABAJO EL EMPLEADO "<<i+1<<endl;
				cin>>matriz[i][j];
			}
			if(j==2){
				cout<<"1. PARA AUXILIAR"<<endl;
				cout<<"2. PARA TECNICO"<<endl;
				cout<<"3. PARA PROFESIONAL"<<endl;
				cin>>cargo;
				switch(cargo){
					case 1: matriz[i][j] = 0.05;
							break;
					case 2: matriz[i][j] = 0.10;
							break;
					case 3: matriz[i][j] = 0.15;
							break;		
				}
			}
			if(j==3){
				cout<<"DIGITE LA CANTIDAD DE HIJOS QUE TIENE EL EMPLEADO "<<i+1<<endl;
				cin>>matriz[i][j];
				
			}
			if(j==4){
				matriz[i][j] = matriz[i][j-3] * (15000 + (15000 * matriz[i][j-2]));
			}
			if(j==5){
				if(matriz[i][j-2] == 1){
					matriz[i][j] = 150000;
				}
				if(matriz[i][j-2] == 2){
					matriz[i][j] = 300000;
				}
				if(matriz[i][j-2]>2){
					matriz[i][j] = 400000;
				}
			}
			if(j==6){
				matriz[i][j] = (matriz[i][j-2] + matriz[i][j-1]) * 0.03;
			}
			if(j==7){
				matriz[i][j] = (matriz[i][j-3] + matriz[i][j-2]) - matriz[i][j-1];
			}
		}
		system("cls");
	}
	
	cout<<"MOSTRANDO"<<endl<<endl;
	cout<<"EMP    HORAS   CARGO   HIJOS      INGRESOS      BONO    DEDUCC     TOTAL"<<endl;
	for(i=0; i<5; i++){
		for(j=0; j<8; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\t\t\t ======= INGRESOS REGISTRADOS ======="<<endl;
}
void ordenar()
{
	cout<<"\t\t\t ======= ORDENANDO DATOS ======="<<endl;
	for(i=0; i<5; i++){
		vector[i] = matriz[i][6];
	}
	
	for(i=0;i<5;i++)
	{
		pos = i;
		aux = vector[i];
		
		while((pos>0) && (vector[pos-1] > aux))
		{
			vector[pos] = vector[pos-1];
			
			pos--;
		}
		vector[pos] = aux;
	}
	
	cout<<"MOSTRANDO"<<endl<<endl;
	for(i=0; i<5; i++){
		cout<<vector[i]<<endl;
	}
	
	cout<<"MOSTRANDO OTRA VEZ"<<endl<<endl;
	cout<<"EMP    HORAS   CARGO   HIJOS      INGRESOS      BONO    DEDUCC     TOTAL"<<endl;
	for (i=0; i <5; i++){
	for (j=0; j <5; j++){
	if (vector[i] == matriz[j][6]){
	for (int x =0; x <8; x++){
	 cout <<matriz[j][x]<<"\t";
	}
cout <<endl;
}

}
}
}
void menu()
{
	while(op<3)
	{
		cout<<"1. PARA REGISTRAR LOS INGRESOS DE LOS EMPLEADOS"<<endl;
		cout<<"2. PARA ORDENAR LOS DATOS"<<endl;
		cout<<"3. PARA SALIR"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					registro();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					ordenar();
					system("pause");
					system("cls");
					break;	
			case 3: cout<<"HASTA LA VISTA BABY"<<endl;
					break;		
			default: cout<<"\t\t======= ERROR ======="<<endl;			
					 cout<<"\t\tDIGITE UNA OPCION ENTRE 1 Y 3"<<endl;
					 op = 0;			
		}
		
	}
}
main()
{
	menu();
	getch();
}
