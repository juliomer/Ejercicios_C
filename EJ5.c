/* Conversion Ptas a Euros y viceversa */

#include <stdio.h>

#define FACTOR 166.386

void main(){
	
	int op=0;
	float n=0, pesetas=0, euros=0, resultado=0;
	
	do{	
	printf("Conversion Ptas a Euros y viceversa\n");
	// Datos 
	printf("1. Conversion Pesetas a Euros\n");
	printf("2. Conversion Euros a Pesetas\n");
	printf("0. Salir\n ");
	printf("Introduce una opcion: ");
	scanf("%d", &op);
	
	switch(op){
	case 1:
		printf("\nIntroduce cantidad en pesetas: ");
		scanf("%f", &pesetas);
		resultado=pesetas/FACTOR;
		printf("\nResultado en Euros: %f \n",resultado );
		break;
	case 2:
		printf("\nIntroduce cantidad en Euros: ");
		scanf("%f", &euros);
		resultado=euros*FACTOR;
		printf("nResultado en Pesetas: %f \n",resultado );
		break;
	case 0:
		printf("\nFIN");
		break;
	default:
		printf("\nOpcion incorrecta.\n");
		break;
	}
	
	}while (op!=0);
	
}
