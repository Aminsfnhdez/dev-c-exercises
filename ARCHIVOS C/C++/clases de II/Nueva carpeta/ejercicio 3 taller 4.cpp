/*punto 3 taller 4*/
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

printf("ingrese un valor\n");//mostrar en pantalla
scanf("%f",&a);//leer las variables o datos

printf("ingrese otro valor\n");
scanf("%f",&b);

printf("ingrese otro valor\n");
scanf("%f",&c);

system("cls");//borrar pantalla

if((a>b)&&(a>c))//condicional(aqui presunto si el primer numero es el mayor
{
	if(a>c)//hay pregunto que si el primer numero es mayor que el segundo numero
	{
		printf("los numeros de menor a mayor quedan asi:%2.f,%2.f,%2.f\n,",c,b,a);
	}
	
	else//si no se cumple (entra)
	{
		printf("los numeros de menor a mayor quedan asi:%2.f,%2.f,%2.f\n,",b,c,a);
	}
}

if((b>a)&&(b>c))//hay pregunto si el segundo numero es mayor que todos
{
	if(a>c)//hay pregunto si el primer numero es mayor que el ultimo
	{
		printf("los numeros de menor a mayor quedan asi:%2.f,%2.f,%2.f\n,",c,a,b);
	}
	
	else//si no se cumple (entra)
	{
		printf("los numeros de menor a mayor quedan asi:%2.f,%2.f,%2.f\n,",a,b,c);
	}
}

if((c>b)&&(c>a))//hay pregunto si el ultimo es el mayor que todos
{
	if(a>b)//hay pregunto primer numero es mayor que el segundo
	{
		printf("los numeros de menor a mayor quedan asi:%2.f,%2.f,%2.f\n,",b,a,c);
	}
	
	else//si no se cumple (entra)
	{
		printf("los numeros de menor a mayor quedan asi:%2.f,%2.f,%2.f\n,",a,b,c);
	}
	
}
   getch();//restornar un valor,Lee un solo carácter directamente desde el teclado, sin mostrar tal carácter en pantalla.(una pausa)
}
