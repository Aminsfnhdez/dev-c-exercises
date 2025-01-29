#include<iostream>
#include<conio.h>
using namespace std;
int vector[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, i, op, x=1;
main()
{
	while(x==1)
	{
		cout<<"BIENVENIDO"<<endl;
		cout<<"SELECIONE EL MES AL CUAL DESEA CONSULTAR SU NUMERO DE DIAS QUE POSEE"<<endl;
		cout<<"1. ENERO"<<endl;
		cout<<"2. FEBRERO"<<endl;
		cout<<"3. MARZO"<<endl;
		cout<<"4. ABRIL"<<endl;
		cout<<"5. MAYO"<<endl;
		cout<<"6. JUNIO"<<endl;
		cout<<"7. JULIO"<<endl;
		cout<<"8. AGOSTO"<<endl;
		cout<<"9. SEPTIEMBRE"<<endl;
		cout<<"10. OCTUBRE"<<endl;
		cout<<"11. NOVIEMBRE"<<endl;
		cout<<"12. DICIEMBRE"<<endl;
		cin>>op;
//		switch(op)
//		{
//			case 1: cout<<"EL MES ENERO POSEE"
//		}
		for(i = 0; i<12; i++)
		{
			if(op == i+1)
			{
				cout<<"ESTE MES POSEE "<<vector[i]<<" dias"<<endl;
				system("pause");
				break;
			}
		}
		system("cls");
		cout<<"DESEA VOLVER A CONSULTAR"<<endl;
		cout<<"1. SI"<<endl;
		cout<<"0. NO"<<endl;
		cin>>x;
		system("cls");
	}

	
}
