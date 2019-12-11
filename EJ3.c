/*
* EJ.3  Dado un dato recogido como un carácter, de tamaño 1 byte 
* invertir los bits pares.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Constantes
# define MASK 0xAA

// Prototipos
void showbits(unsigned char x);


void main(){
	// Variables
	unsigned char a, aux, res;
	int i;
	
	printf("Introduce un caracter: ");
	scanf("%c", &a);	
	
	printf("\nCaracter: %c  Dec: %d  Hex: %x Bin: ", a, a, a);
	showbits(a);
	aux=a^MASK;
	printf ("\nCaracter: %c  Dec: %d  Hex: %x Bin: ", aux, aux, aux);
	showbits(aux);
}



/* Funciones */
void showbits(unsigned char x){
	int i;
    for (i = (sizeof(char) * 8) - 1; i >= 0; i--){
       putchar(x & (1u << i) ? '1' : '0');
    }
    printf("\n");
}
