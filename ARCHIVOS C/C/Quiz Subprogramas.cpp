// QUIZ Subprogramas
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
float desayuno(char, float, float, float, float, float);
float ingredientes (float , float );
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	char tipo_cliente;
	float gpostre, vgpostre, gplatano, gvplatano, garroz, gvarroz, ghuevo, gvhuevo, gcondimentos, gvcondimentos, valor_adicional;
	float valorpostre, valorplatano, valorarroz, valorhuevo, valorcondimentos;
	printf("==== Restaurant Barbacoa ====\n");
	printf("Por favor seleccione el tipo de cliente:\n");
	printf("Para Socio, teclee 'S'\n");
	printf("Para Cliente, teclee 'C'\n");
	printf("Para No Cliente, teclee 'N'\n");
	scanf("%c", &tipo_cliente);
	system("CLS");
	printf("==== Restaurant Barbacoa ====\n");
	printf("Ingredientes del desayuno\n");
	printf("Postre, cuantos gramos: ");
	scanf("%f", &gpostre);
	printf("Postre, valor por gramos: ");
	scanf("%f", &vgpostre);
	valorpostre = ingredientes(gpostre, vgpostre);
	system("CLS");
	printf("==== Restaurant Barbacoa ====\n");
	printf("Ingredientes del desayuno\n");
	printf("Platano, cuantos gramos:");
	scanf("%f", &gplatano);
	printf("Platano, valor por gramos: ");
	scanf("%f", &gvplatano);
	valorplatano = ingredientes(gplatano, gvplatano);
	system("CLS");
	printf("==== Restaurant Barbacoa ====\n");
	printf("Ingredientes del desayuno\n");
	printf("Arroz, cuantos gramos: ");
	scanf("%f", &garroz);
	printf("Arroz, valor por gramos: ");
	scanf("%f", &gvarroz);
	valorarroz = ingredientes(garroz, gvarroz);
	system("CLS");
	printf("==== Restaurant Barbacoa ====\n");
	printf("Ingredientes del desayuno\n");
	printf("Huevo, cuantos gramos: ");
	scanf("%f", &ghuevo);
	printf("Huevo, valor por gramos: ");
	scanf("%f", &gvhuevo);
	valorhuevo = ingredientes(ghuevo, gvhuevo);
	system("CLS");
	printf("==== Restaurant Barbacoa ====\n");
	printf("Ingredientes del desayuno\n");
	printf("Condimentos, cuantos gramos: ");
	scanf("%f", &gcondimentos);
	printf("Codimentos, valor por gramos: ");
	scanf("%f", &gvcondimentos);
	valorcondimentos = ingredientes(gcondimentos, gvcondimentos);
	desayuno(tipo_cliente, valorpostre, valorplatano, valorarroz, valorhuevo, valorcondimentos);
	
	getch();
}

float ingredientes (float gramos, float valorgramos)
{
	float valor;
	valor = gramos * valorgramos;
	return valor;
}
float desayuno(char tipoCliente, float postre, float platano, float arroz, float huevo, float condimentos)
{
	float valorAdicional, mano_de_obra, valorTotal;
	mano_de_obra = 2000;
	switch(tipoCliente)
	{
		case 's': case 'S': valorAdicional = 2000;
		break;
		case 'c': case 'C': valorAdicional = 2500;
		break;
		case 'n': case 'N': valorAdicional = 3000;
		break;
		default: printf("******* Opción Incorrecta *******");
	} 
	valorTotal = valorAdicional + mano_de_obra + postre + platano + arroz + huevo + condimentos;
	printf("\nEl valor total a pagar por el desayuno es: %.0f", valorTotal);
}
