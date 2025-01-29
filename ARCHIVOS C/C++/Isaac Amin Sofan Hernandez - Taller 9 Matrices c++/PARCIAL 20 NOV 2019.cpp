//PARCIAL 20 NOV 2019
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int op = 0,  i, j, horas, cargo, hijos, consul, new_horas[5]={0}, pos, cambio;
float matriz[5][8]={0}, deducido[5]={0}, aux;
void registrar_ingresos()
{
	cout<<"\t\t\t====== REGISTRANDO INGRESOS EMPLEADOS ======"<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<8; j++)
		{
			if(j==0){ //cuando estoy en la primera columna asigno el cod del trabajador
 				matriz[i][j] = i+1;
			}
			if(j==1){ //cuando estoy en la segunda columna las horas laboradas del trabajador
				cout<<"DIGITE LA CANTIDAD DE HORAS QUE TRABAJO EL EMPLEADO "<<i+1<<endl;
				cin>>matriz[i][j];
			}
			if(j==2){ //cuando estoy en la tercera columna asigno el aumento por horas de acuerdo al cargo del trabajador
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
			if(j==3){ //cuando estoy en la cuarta columna pido la cantidad de hijo que tiene el trabajador
				cout<<"DIGITE LA CANTIDAD DE HIJOS QUE TIENE EL EMPLEADO "<<i+1<<endl;
				cin>>matriz[i][j];
				
			}
			if(j==4){ //cuando estoy en la quinta columna aplico la formula de ingrsos es igual a horas por valor de hora mas el aumento de acuerdo al cargo
				matriz[i][j] = matriz[i][j-3] * (15000 + (15000 * matriz[i][j-2]));
			}
			if(j==5){ //cuando estoy en la sexta columna asigno el valor de la bonificacion de acuerdo al numeroa de hijos del trabajador
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
			if(j==6){ //cuando estoy en la septima columna aplico la formula de deduccion es igual a ingreso mas bonificacion por el tres porciento que son los impuestos
				matriz[i][j] = (matriz[i][j-2] + matriz[i][j-1]) * 0.03;
			}
			if(j==7){ //cuando estoy en la octava columna aplico la formula de total es igual a ingreso mas bonificacion menos deduccion 
				matriz[i][j] = (matriz[i][j-3] + matriz[i][j-2]) - matriz[i][j-1];
			}
		}
		system("cls");
	}
	
	cout<<"MOSTRANDO"<<endl<<endl;
	cout<<"EMP    HORAS   CARGO   HIJOS      INGRESOS      BONO    DEDUCC     TOTAL"<<endl;//muestro la matriz completa 
	for(i=0; i<5; i++){
		for(j=0; j<8; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\t\t\t====== INGRESOS EMPLEADOS REGISTRADOS  ======"<<endl;
}
void deducciones()
{
	cout<<"\t\t\t====== CALCULANDO DEDUCCIONES ======"<<endl;
	for(i=0; i<5; i++)//en el vector 'deducido' almaceno todos los valores de duduccion de cada empleado
	{
		deducido[i] = matriz[i][6];	
	}
	
	cout<<" mostrando "<<endl;//muestro los valores de deduccion para cada empleado
	for(i=0; i<5; i++)
	{
		cout<<"las deducciones del empleado "<<i+1<<" es: "<<deducido[i]<<endl;
	}
	
	cout<<"\t\t\t====== DEDUCCIONES CALCULADAS ======"<<endl;
}
void consulta()
{
	cout<<"\t\t\t====== CONSULTANDO INGRESOS Y EGRESOS ======"<<endl;
	cout<<"Ingrese el número del empleado al cual desea consultar"<<endl;//pido el numero del empleado al cual se le desea consultar su estado
	cin>>consul;
	for(i=0; i<5; i++)
	{
		for(j=0; j<8; j++)
		{
			if(i == consul-1)//muestro el estado del empleado que se esta consultando
			{
				cout<<"Los ingresos del empleado "<<consul<<" es:"<<endl;
				cout<<"Por horas trabajadas es: "<<matriz[i][4]<<endl;
				cout<<"Por Bonificaciones es: "<<matriz[i][5]<<endl;
				cout<<"Total de ingresos es: "<<matriz[i][5] + matriz[i][4]<<endl<<endl;
				cout<<"Los egresos del empleado "<<endl;
				cout<<"Por deducciones es: "<<matriz[i][6]<<endl;
				break;
			}
		}
	}
	cout<<"\t\t\t====== CONSULTA FINALIZADA ======"<<endl;
}
void modificar()
{
	cout<<"\t\t\t====== MODIFICANDO HORAS ======"<<endl;//para modificar el numero de horas laboradas de todos los empleados
	for(i=0; i<5; i++)
	{
		cout<<"Digite las nuevas horas trabajadas para el empleado "<<i+1<<endl;
		cin>>new_horas[i];
	}
	
	cout<<" \nmostrando original"<<endl;//muestro los saldos de los empleados sin haber modificado sus horas laboradas
	cout<<"EMP    HORAS   CARGO   HIJOS      INGRESOS      BONO    DEDUCC     TOTAL"<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<8; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
//	asignando nuevas horas
	for(i=0; i<5; i++)//desde aqui ...
	{
		for(j=0; j<8; j++)
		{
			if(j == 1)
			{
				matriz[i][j] = new_horas[i];
			}
			if(j==4){
				matriz[i][j] = matriz[i][j-3] * (15000 + (15000 * matriz[i][j-2]));
			}
			if(j==6){
				matriz[i][j] = (matriz[i][j-2] + matriz[i][j-1]) * 0.03;
			}
			if(j==7){
				matriz[i][j] = (matriz[i][j-3] + matriz[i][j-2]) - matriz[i][j-1];
			}
		}
	}// ... hasta aqui se actualizan los valores de ingresos y deduccion de acuerdo al nuevo numero de horas laboradas por los empleados

//	for(i=0; i<5; i++)
//	{	
//		for(j=0; j<8; j++)
//		{
//			 
//			if(j==4)
//			{
//				matriz[i][j] = horas * (15000 + (15000 * matriz[i][j-2]));
//			}
//		}
//	}
	cout<<"\n mostrando modificada"<<endl;//muestro los saldos de los empleados actualizados de acuerdo al nuevo numero de horas laboradas
	cout<<"EMP    HORAS   CARGO   HIJOS      INGRESOS      BONO    DEDUCC     TOTAL"<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<8; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\t\t\t====== HORAS MODIFICADAS ======"<<endl;
}
void ordenar()
{
	cout<<"\t\t\t====== ORDENANDO DATOS ======"<<endl;
	for(i=0; i<5; i++)//en el vector 'deducido' almaceno todos los valores de duduccion de cada empleado
	{
		deducido[i] = matriz[i][6];
	}
	
	for(i=0; i<5; i++)//ordeno de menor a mayor los valores almacenados en el vector 'deducido'. Por insercion
	{
		pos = i;
		aux = deducido[i];
		while((pos>0) && (deducido[pos-1] > aux))
		{
			deducido[pos] = deducido[pos-1];
			pos--;
		}
		deducido[pos] = aux;
	}
	
	cout<<" mostrando "<<endl;
	cout<<"EMP    HORAS   CARGO   HIJOS      INGRESOS      BONO    DEDUCC     TOTAL"<<endl;
	for (i=0; i <5; i++)// para recorrer todas las posiciones del vector 'deducido'
	{
		for (j=0; j <5; j++)// para recorrer todas las filas de la matriz
		{
			if (deducido[i] == matriz[j][6])// como el vector 'deducido' ya esta ordenado, reviso toda la columna de deduccion de la matriz. Y si encuantra valores iguales entonces muestra toda la fila
											// de la donde los valores son iguales...
			{
				for (int x =0; x <8; x++)
				{
				cout <<matriz[j][x]<<"\t";
				}
				cout <<endl;
			}
		}
	}
//	cout<<" mostrando "<<endl;
//	for(i=0; i<5; i++)
//	{
//		for(j=0; j<8; j++)
//		{
//			cout<<matriz[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
cout<<"\t\t\t====== DATOS ORDENADOS ======"<<endl;
}
void menu()
{
	while(op<6)
	{ 
		cout<<"                       ==== PARCIAL 20 NOV 2019 ===="<<endl;
		cout<<"1. Para Registrar los ingresos de los empleados"<<endl;
		cout<<"2. Para Calcular las deducciones"<<endl;
		cout<<"3. Para Consultar los ingresos y egresos de un empleado"<<endl;
		cout<<"4. Para Modificar las horas trabajadas"<<endl;
		cout<<"5. Para Ordenar los datos de acuerdo al valor a pagar"<<endl;
		cout<<"6. Para Salir"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					registrar_ingresos();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					deducciones();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					consulta();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					modificar();
					system("pause");
					system("cls");
					break;	
			case 5: system("cls");
					ordenar();
					system("pause");
					system("cls");
					break;				
			case 6: system("cls");
					cout<<"          ========== Hasta la vista Baby =========="<<endl;
					break;		
			default:system("cls");
					cout<<"Error opción Icorrecta, digite un número entre 1 y 6"<<endl;
					op=0;
					Sleep(2000);
					system("cls");			
		}
	}
}

main()
{
	setlocale(LC_ALL, "");
	menu();
	getch();
	
}
