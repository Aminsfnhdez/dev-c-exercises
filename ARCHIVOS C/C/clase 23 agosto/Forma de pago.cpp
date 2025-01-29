//Se tienen el área, el valor del metro cuadrado de una propiedad y la forma de pago de la cuota inicial. 
//Se pide calcular el precio de venta de la propiedad y el valor de la cuota inicial, que sería el 20% del valor del precio de venta. 
//Si la forma de pago es 1, se otorga un descuento del 10% sobre la cuota inicial y si la forma de pago es 2, se le recarga un 8% en el valor de la misma. 
//Mostrar el valor del precio de venta y el de la cuota inicial de la propiedad (solo hay 2 formas de pago).

#include<stdio.h>
#include<conio.h>

main()
{
    int formapago;
    float area, valmetro, precioventa, cuotainicial=0;
   
    printf("Digite el área en m2 de la propiedad y el valor del metro: ");
    scanf("%f %f",&area,&valmetro);
   
    printf("Digite ahora su forma de pago (1 o 2)");
    scanf("%d",&formapago);
    
    precioventa=area*valmetro;
    
    switch (formapago)
    {
        case 1:   cuotainicial = precioventa*0.2 - precioventa*0.2*0.1; 
                  printf("El precio de venta de la propiedad es de:%.2f y el valor de la cuota inicial es de %.2f\n", precioventa, cuotainicial); 
                  break; 
    
        case 2:   cuotainicial=precioventa*0.2 + precioventa*0.2*0.08;
                  printf("El precio de venta de la propiedad es de:%.2f y el valor de la cuota inicial es de %.2f\n", precioventa, cuotainicial);
                  break;
        
        default:  printf("Digitó una forma de pago incorrecta, por lo tanto no se pueden hacer los cálculos de forma adecuada");
        
    }
    getch();
}
