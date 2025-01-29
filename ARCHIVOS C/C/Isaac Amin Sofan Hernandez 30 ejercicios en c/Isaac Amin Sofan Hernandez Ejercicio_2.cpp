//Hacer un algoritmo que, dado los dos lados diferentes de un rectángulo, encuentre el perímetro y el área del mismo (Perímetro = 2*a+2*b, Área = a * b)


#include <stdio.h>
#include <conio.h>

main()
{
float lado1, lado2, perimetro, area;

	printf(" **** Segundo ejercicio - AREA y PERIMETRO DE UN TRIANGULO **** \n");  
	//  \n = alt + 92 + n 
	//Pregunta: para que sirve \n ?. coloquelo al inicio de las comillas. que sucede?. Comente en el grupo de whatsapp
	
	
	printf ("Digite el primer lado del triangulo ");
	scanf ("%f", &lado1);
	 
	printf ("Digite el segundo lado del triangulo ");
	scanf ("%f", &lado2);
	
	perimetro = 2*lado1 + 2*lado2;
	area = lado1 * lado2;
	
	
	printf("\n El perímetro del triangulo cuyos lado 1 igual a: %f y lado 2 igual a %f es: %.1f \n \n",lado1, lado2, perimetro); 
	printf("El area del triangulo cuyos lado 1 igual a: %.2f y lado 2 igual a %.3f es: %.1f",lado1, lado2, area); 
	
	getch();
	
	
}

