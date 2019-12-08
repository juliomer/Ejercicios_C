/* Realizar un programa mediante un menú que me calcule las impedancias capacitivas 
*  e inductivas. 
*/

#include <stdio.h>

#define PI 3.141596
//#define F 50


void main(){
	// Variables
	int opcion=0, f=50;
	float cap=0, ind=0;
	
	do{	
	printf("\nCalculo de Impedancias\n");
	printf("1. Impedancia Capacitiva\n");
	printf("2. Impedancia Inductiva\n");
	printf("0. Salir\n ");
	printf("Introduce una opcion: ");
	scanf("%d", &opcion);
	
	switch(opcion){
	case 1:
		printf("\nIndica Capacidad (Faradios): ");
		scanf("%f", &cap);		
		printf("\nXc: %f Ohm\n", (1/(2*PI*f*cap)) );
		break;
	case 2:
		printf("\nIndica Inductancia (Henrios): ");
		scanf("%f", &ind);		
		printf("\nXl: %f Ohm\n", (2*PI*f*ind);
		break;
	case 0:
		printf("\nFIN");
		break;
	default:
		printf("\nOpción incorrecta.");
		break;
	}
	
	}while (opcion!=0);
		
}

