/* Realizar un programa mediante un menú que convierta en ambos sentidos 
*  de grados centígrados a grados Fahrenheit y viceversa.
*/

#include <stdio.h>

#define FACTOR 1.8


void main(){
	
	int op=0;
	float cent=0, far=0;
	
	do{	
	printf("Conversion de temperaturas\n");
	printf("1. Grados Centigrados a Farenheit\n");
	printf("2. Grados Farenheit a Centigrados\n");
	printf("0. Salir\n ");
	printf("Introduce una opcion: ");
	scanf("%d", &op);
	
	switch(op){
	case 1:
		printf("\nIndica grados (ºC): ");
		scanf("%f", &cent);		
		printf("\nFarenheit: %0.2f ºF\n", ((FACTOR*cent)+32));
		break;
	case 2:
		printf("\nIndica grados (ºF): ");
		scanf("%f", &far);		
		printf("\nCentigrados: %0.2f ºC\n", ((far-32)/FACTOR));
		break;
	case 0:
		printf("\nFIN");
		break;
	default:
		printf("\nOpción incorrecta.");
		break;
	}
	
	}while (op!=0);
		
}

