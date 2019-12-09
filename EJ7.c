/* Realizar un programa mediante un men� que convierta en ambos sentidos 
*  de grados cent�grados a grados Fahrenheit y viceversa.
*/

#include <stdio.h>
// Constantes
#define FACTOR 1.8


void main(){
	// Variables
	int op=0;
	float cent=0, far=0;
	
	do{
		// Menu
		printf("Conversion de temperaturas\n");
		printf("1. Grados Centigrados a Farenheit\n");
		printf("2. Grados Farenheit a Centigrados\n");
		printf("0. Salir\n");
		printf("Introduce una opcion: ");
		scanf("%d", &op);
		printf("\n");
		
		switch(op){
		case 1:
			printf("\nIndica grados (�C): ");
			scanf("%f", &cent);		
			printf("\nFarenheit: %0.2f �F\n\n", ((FACTOR*cent)+32));
			break;
		case 2:
			printf("\nIndica grados (�F): ");
			scanf("%f", &far);		
			printf("\nCentigrados: %0.2f �C\n\n", ((far-32)/FACTOR));
			break;
		case 0:
			printf("\nFIN");
			break;
		default:
			printf("\nOpci�n incorrecta.");
			break;
		}
		
	}while (op!=0);
		
}

