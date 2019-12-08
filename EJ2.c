/*
* EJ.2  Dado un dato recogido como un carácter, de tamaño 1 byte 
* invertir la parte alta de la baja.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

# define ALTO 240
# define BAJO 15
# define MASK 0xF

void main(){
	
	unsigned char a, aux;
	
	printf("Introduce un caracter: ");
	scanf("%c", &a);
		
	printf("\nCaracter: %c  Dec: %d  Hex: %x", a, a, a);
			
	printf ("\nDec -> ALTO = % d BAJO = % d ", a&ALTO, a&BAJO);
	printf ("\nHex -> ALTO = % d BAJO = % d ", (a>>4)&MASK, a&MASK);

	aux=((a&MASK)<<4) | (a>>4)&MASK;
	printf ("\nInvertido Char=%c Dec=%d Hex=%x ", aux, aux, aux);
}
