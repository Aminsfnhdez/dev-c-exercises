#include<stdio.h>
#include<malloc.h>
int main ()
{ int *datos;
  int capacidad=5, numDatos=0, valor;
  // Se genera un espacio inicial para el arrglo
  datos = (int *)malloc(capacidad * sizeof(int));  // se asigna a datos la dirección de un bloque de memoria del tamaño de un areglo de tipo int de tamaño capacidad
  printf("Ingrese valores enteros:\n");
  while(scanf("%d",&valor)!=EOF)  // leer hasta terminar el archivo
   { if (numDatos == capacidad) // si el arrego se llena...
      { capacidad += 2;
        datos = (int*)realloc(datos,capacidad* sizeof(int)); // ...aumentar la capacidad del arreglo
        if (datos==NULL)
         { printf("No se puede continuar,\n");
           printf("espacio insuficiente de memoria\n");
           //return;
         }
      }
     datos[numDatos]=valor;
     numDatos++;
   }
  for (int i=0; i<numDatos;i++) // mostrar los datos leídos
    printf("%d) %d\n",i,datos[i]);
}
