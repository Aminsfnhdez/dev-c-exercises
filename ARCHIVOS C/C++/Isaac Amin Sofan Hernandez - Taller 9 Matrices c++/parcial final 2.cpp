/*KAREN YULISSA MERCADO RIVERA 
    1003291209*/
#include<conio.h>
#include<iostream>
#include<locale.h>
#include <wchar.h>
#include <windows.h>
using namespace std;
float matrizA[4][3];
float matrizB[4][3];
float matrizC[4][3];
int i,j,op=0;
int new_valor[1];
void menu();
void presentar_matriz();
void calcular_matriz();
void consultar();
void ordenar();
void modificar();

main()
{
	setlocale(LC_ALL, "");
	menu();
	getch();
	
}
void menu()
{
	while(op<6)
	{ 
		cout<<"   ==== PARCIAL FINAL ===="<<endl;
		cout<<"1. para ingresar valores a la matriz A y B"<<endl;
		cout<<"2. Para calcular la matriz C"<<endl;
		cout<<"3. Para consultar la cantidad de veces que hay en un valor"<<endl;
		cout<<"4. Para Modificar el valor de la matriz B"<<endl;
		cout<<"5. Para Ordenar ascendentemente por columna los valores de la matriz C"<<endl;
		cout<<"6. Para Salir"<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1: system("cls");
					presentar_matriz();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					calcular_matriz();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					consultar();
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
void presentar_matriz()
{
	
	cout<<"ingresando matriz A"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"digite el elemento de en la posicion "<<i<<" en la columna "<<j<< " de la matriz A"<<endl;
			cin>>matrizA[i][j];
		}
	}
	cout<<"mostrar matriz A"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matrizA[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"ingresando matriz B"<<endl;

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		
		{
			cout<<"digite el elemento de en la posicion "<<i<<" en la columna "<<j<< " de la matriz B"<<endl;
			cin>>matrizB[i][j];
		}
	}
	
	cout<<"mostrar matriz B "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matrizB[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void calcular_matriz()
{
	int mult;
    cout<<"calcula matriz C"<<endl;
	for(i=0; i<4; i++)
    {
    mult=0;
         for(j=0;j<3;j++)
         {       
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
         }
}

    cout<<"mostrar matriz C "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matrizC[i][j]<<"\t";
		}
		cout<<endl;
	}
    cout<<" matriz C calculada"<<endl;
}

void consultar()
{
    int num=0, cont=0;
    cout<<"INGRESE EL NUMERO A CONSULTAR QUE VECES ESTA EN LA MATRIZ C"<<endl;
    cin>>num;
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if (num==matrizC[i][j])
            {
            cont=cont+1;
            }
       }
   }
    cout<<"LA CANTIDAD DE VECES QUE SE REPITE EL NUMERO "<<num<<" ES DE: "<<cont<<endl;
}

void modificar()
{
	int new_valor[1];
	cout<<"\t\t\t====== MODIFICANDO HORAS ======"<<endl;
	for(i=0; i<1; i++)
	{
		cout<<"Digite el nuevo valor que quiere agregar en la MATRIZ B "<<i+1<<endl;
		cin>>new_valor[1];
	}
	
	cout<<" \nmostrando original"<<endl;
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<matrizB[i][j]<<"\t";
		}
		cout<<endl;
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j == 1)
			{
				matrizB[i][j] = new_valor[i]; 
			}
			
		}
	}
	cout<<"\n MOSTRANDO MODIFICADA"<<endl;
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<matrizB[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\t\t\t====== VALOR MODIFICADO ======"<<endl;
}


void ordenar()
{
	int pos,aux;

	cout<<"odenamiento"<<endl;
	for(i=0; i<4; i++)//filas
	{
		for(j=0;j<3;j++)//columnas
		{
			pos=j;
			aux=matrizC[j][i];
			while((pos>0)&&(matrizC[pos-1][i]>aux)){
				matrizC[pos][i]=matrizC[pos-1][i];
				pos--;
			}
			matrizC[pos][i]=aux;
		}
	
	}
	
	cout<<"mostrar matriz"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matrizC[i][j]<<"\t";
		}
		cout<<endl;
	}
}


