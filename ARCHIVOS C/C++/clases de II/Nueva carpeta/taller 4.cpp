/*punto 1 taller 4*/
#include<stdio.h>//nos sirve para trabajar con el printf y scanf
#include<conio.h>//sirve para el imput y output(printf y scanf)
#include<wchar.h>//maneja mayuscula y minuscula en los mensajes
#include<locale.h>//nos permite mostrar los carecteres como se deben en la pantalla
#include<math.h>//esto nos sirve para hacer operaciones matematicas
#include<stdlib.h>//para mostrar mejor los procesos

main()//funcion principal
{
	
setlocale(LC_ALL,"");//para mostrar bien los mensajes 
float a,b,c;//declaracion de variables

printf("digite el valor del dividendo\n");//mostrar en pantalla
scanf("%f",&a);//leer las variables o datos

printf("digite el valor del divisor\n");
scanf("%f",&b);

if(b==0)//condicional, si se cumple entra 
    {
	printf("No se puede hacer la division con un valor de 0,ingrese otro valor.\n");
	
	}
	else//si no se cumple con b==0, se entra 
	{
		c=a/b;//operacion 
		
		printf("El resultado de dividir %.0f y %0f es:  %.2f\n",a,b,c);
	}
	getch();//restornar un valor,Lee un solo carácter directamente desde el teclado, sin mostrar tal carácter en pantalla.(una pausa)


}
