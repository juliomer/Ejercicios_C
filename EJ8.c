/* Realizar un programa mediante un menú que me permita calcular 
*  las áreas del triangulo,  trapecio y circulo
*  Calcular área de circulo y trapecio A=PI*r*r y T=(b+b)*h/2 con funciones
*/

#include <stdio.h>

// Constantes
#define PI 3.141596


void main(){
	// Variables	
	int r=0, bi=0, bs=0, ht=0, baset=0, altt=0;
	int op=0;
	
	do{
		// Menu
		printf("Calculo de areas\n");
		printf("1. Calculo area circulo \n");
		printf("2. Calculo area triangulo\n");
		printf("3. Calculo area trapecio\n");
		printf("0. Salir\n");
		printf("Introduce una opcion: ");
		scanf("%d", &op);
		printf("\n");
		
		switch(op){
		case 1:
			printf("Introduce radio del circulo: ");
			scanf("%d", &r);	
			printf("\nArea Circulo: %0.2f \n\n", (PI*r*r));
			break;
		case 2:
			printf("Introduce base y altura del triangulo: ");
			scanf("%d %d", &baset, &altt );	
			printf("\nArea Triangulo(b=%d, h=%d)= %0.2f \n\n", baset, altt, (baset * altt / 2.0));
			break;
		case 3:
			printf("Introduce bases y altura del trapecio: ");
			scanf("%d %d %d", &bi, &bs, &ht);	
			printf("\nArea Trapecio(BI=%d, BS=%d, H=%d)= %0.2f \n\n", bi, bs, ht, ((bi+bs)*ht/2.0));
			break;
		case 0:
			printf("\nFIN");
			break;
		default:
			printf("\nOpcion incorrecta.");
			break;
		}
		
		}while (op!=0);
			
}

