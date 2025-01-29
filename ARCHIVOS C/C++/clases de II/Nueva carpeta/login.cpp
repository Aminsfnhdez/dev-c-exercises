#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void llenar();
void question();
void registro();
void login();
void mostrar();
void chao();
void menu();
void llenar_matriz();
void operaciones();
string bd[5][2]={"0"}, usuario, clave;
int i, op=0, n_filas, m_columnas;

void llenar_matriz()
{
	int pp;
	cout<<"CREANDO MATRICES"<<endl;
	cout<<"1. PARA CREAR UNA MATRIZ "<<endl<<"2. PAAR CREAR DOS MATRICES"<<endl;
	cin>>pp;
	if(pp==1)
	{
		cout<<"DIGITE LA CANTIDAD DE FILAS QUE TENDRA LA MATRIZ"<<endl;
		cin>>n_filas;
		cout<<"DIGITE LA CANTIDAD DE COLUMNAS QUE TENDRA LA MATRIZ"<<endl;
		cin>>m_columnas;
		int matriz_1[n_filas][m_columnas];
		for(int j=)
	}
}
operaciones()
{
	int h=0;
	
	while(h<5)
	{
		cout<<"DIGITE"<<endl<<"1. CREAR MATRICES"<<endl<<"2. SUMA DE MARICES"<<endl<<"3. RESTA DE MATICES"<<endl<<" 4. MULTIPLICACION DE MATRICES"<<endl;
		cout<<"5. TRANSPONER UNA MATRIZ"<<endl<<"6. SALIR DE ESTE MENU"<<endl;
		cin>>h;
		switch(h)
		{
			case 1: system("cls");
					llenar_matriz();
					system("pause");
					system("cls");
					break;
//			case 2:		
		}
	}
}
main()
{
	setlocale(LC_ALL, "");
	llenar();
	question();
	
	
}
void menu()
{
	while(op<4)
	{
		cout<<"BIENVENIDO '"<<bd[i][0]<<"'"<<endl;
		cout<<"POR FAVOR ELIJA"<<endl;
		cout<<"1. OPERACIONES CON MATRICES"<<endl<<"2. VALIDADCION DE DATOS PARA CREDITO"<<endl<<"3. CAMBIO DE CLAVE"<<endl<<"4. CERRAR SESION Y SALIR"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: operaciones();
					break;
//			case 2:
//			case 3:
//			case 4:
			default: 
		}
	}
	
}
void llenar()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<2; j++)
		{
			bd[i][j]="0";
		}
		cout<<endl;
	}	
}
void question()
{
	int q, r;
	cout<<"BIENVENIDO"<<endl;
	cout<<"¿Está registrado?"<<endl<<"1. SI"<<endl<<"0. NO"<<endl;
	cin>>q;
	switch(q)
	{
		case 0: cout<<"¿Desea registrarse?"<<endl<<"1. SI"<<endl<<"0. NO"<<endl;
				cin>>r;
				if(r==1)
				{
					registro();	
				}
				else
				{
					chao();
				}
				break;
		case 1: 
				login();
				break;
		default: system("cls");
				question(); 				
	}
}
void registro()
{
	int band=0;
	cout<<"BIENVENIDO AL REGISTRO"<<endl;
	cout<<"DIGITE UN NUEVO 'USUARIO' "<<endl;
	cin>>usuario;
	for(i=0; i<5; i++)
	{
		
		if((bd[i][0]=="0") || (bd[i][0]==usuario))
		{
//			num_usu++;
//			cout<<"DIGITE UN NUEVO 'USURIO' "<<endl;
//			cin>>bd[i][0];
			
				if(bd[i][0]=="0")
				{
					bd[i][0]=usuario;
					cout<<endl<<"DIGITE UNA NUEVA CONTRASEÑA PARA EL USUARIO '"<<bd[i][0]<<"' "<<endl;
					cin>>bd[i][1];
					system("cls");
					cout<<"USARIO CREADO CON EXITO "<<endl;
					system("pause");
					system("cls");
					band=1;
					i=0;
					break;	
				}
				else
				{
					if(bd[i][0]==usuario)// aqui quede verificando la existencia de un usuario.
					{
						cout<<"EL USUARIO '"<<usuario<<"' YA EXISTE. POR FAVOR DIGITE OTRO"<<endl;
						Sleep(3000);
						i=0;
						cin>>usuario;
//						registro();
//						break;
	
					}
				
				}

			break;
		}
		else
		{
			cout<<"LIMITE DE USUARIOS ALCANZADO"<<endl;
			break;
		}
//		break;
	}
	mostrar();
	if(band==1)
	{
		login();
	}
	
	
}
void login()
{
	int cur=0, car=0, h;
	while(cur<4)
	{
	
		cout<<"BIENVENIDO"<<endl;
		cout<<"Digite su usario"<<endl;
		cin>>usuario;
		cout<<"Digite su clave"<<endl;
		cin>>clave;
		for(int i=0; i<5; i++)
		{
			if(usuario == bd[i][0])
			{
				for(int j=0; j<5; j++)
				{
					if(clave == bd[j][1])
					{
						cout<<"ACCESS GRANTED"<<endl;
						cur = 4;
						car =1;
						mostrar();
						menu();
						break;
					}
					else
					{
						cout<<"ERROR CLAVE O USURARIO INCORRECT@. LLEVA "<<cur+1<<" INTENTOS"<<endl;
						cur++;
						break;
					}
				}
				break;
			}
			else
			{
				cout<<"USUARIO INEXISTENTE"<<endl<<"¿Desea registrarse"<<endl<<"1. SI"<<endl<<"0. NO"<<endl;
				cin>>h;
				if(h!=1)
				{
					cur++;
				}
				else
				{
					cur=4;
					registro();
					break;
				}
				
//				break;
			}
		}
		system("pause");
		system("cls");
	}
	
	if((cur==4)&&(car==0))
	{
		cout<<"LIMITE DE INTENTOS ALCANZADOS"<<endl;
		chao();
	}
	
}
void mostrar()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<bd[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void chao()
{
	cout<<"ADIOS"<<endl;
}
