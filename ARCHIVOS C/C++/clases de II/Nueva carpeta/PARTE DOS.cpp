#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	setlocale(LC_ALL, "");
	int diasMes[12] =      // Días de cada mes
        {31, 28, 31, 30, 31, 30,
         31, 31, 30, 31, 30, 31};
    string meses[12]= {"Enero","febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};    
    int nm,dm,i,diasc, sus;
    cout << "ingrese el numero del mes que desea concultar"<<endl;
    cin >>nm;
    cout << "Los dias del mes "<< meses[nm-1]<<  " son: " << diasMes[nm-1]<<endl;
    cout<<"digite el dia del mes de "<<meses[nm-1]<<" que desea consultar "<<endl;
    cin>>diasc;
    for(int i=0; i<nm-1; i++)
    {
    	sus+=diasMes[i];
	}
    sus+=diasc;
    cout<<"Han transcurrido "<<sus<<" días en el año"<<endl;
    cout<<"A este año le quedan "<<365-sus<<" días"<<endl;
    
}
