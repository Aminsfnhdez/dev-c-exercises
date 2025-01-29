/*punto 2 taller 4*/
#include<stdio.h>//nos sirve para trabajar con el printf y scanf
#include<conio.h>//sirve para el imput y output(printf y scanf)
#include<wchar.h>//maneja mayuscula y minuscula en los mensajes
#include<locale.h>//nos permite mostrar los carecteres como se deben en la pantalla
#include<math.h>//esto nos sirve para hacer operaciones matematicas
#include<stdlib.h>//para mostrar mejor los procesos

main()//funcion principal
{
	
setlocale(LC_ALL,"");//para mostrar bien los mensajes 
float n,r;//declaracion de variables

printf("digite el numero al que desea saber su raiz cuadrada:\n");//mostrar en pantalla
scanf("%f",&n);//leer las variables o datos

if(n<0)//condicional, si se cumple entra 
    {
	printf("el numero tiene raiz imaginaria.\n");
	
	}
	else//si no se cumple con b==0, se entra g
	{
		r=sqrt(n);//operacion 
		
		printf("la raiz cuadrada del numero ingresadoes: %.2f\n,",r);
	}
	getch();//restornar un valor,Lee un solo carácter directamente desde el teclado, sin mostrar tal carácter en pantalla.(una pausa)


}
