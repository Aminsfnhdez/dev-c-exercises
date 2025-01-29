#include<iostream>
#include<conio.h>
using namespace std;
float  suma=0, mult=1;
//float vector[100]={0};
main()
{
	for(int i=1; i<=100; i++)
	{
		if((i%2)==0)
		{
			suma = suma + i;
		}
		
		if((i%2)!=0)
		{
			mult = mult * i;
		}
	}
	
	
	cout<<"LA SUMA DE LOS NUMEROS PARES DE 1 A 100 ES: "<<suma<<endl;
	cout<<"LA MULTIPLICACION DE LOS NUMEROS IMPARES DE 1 A 100 ES: "<<mult<<endl;
}
