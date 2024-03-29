/*
* EJ.4  Dado un dato recogido como un car�cter, de tama�o 1 byte 
* presentarlos en pantalla en binario.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>


// Prototipos
void binario(int num);
void showbits(unsigned char x);


void main(){
	// Variables
	unsigned char a, aux, b;
		
	printf("Introduce un caracter: ");
	scanf("%c", &a);	
	
	printf("\nCaracter: %c Dec: %d  Hex: %X", a, a, a);
	
	printf("\nBinario: ");
	showbits(a);
}


/* Funciones */
void showbits(unsigned char x){
	int i;
    for (i = (sizeof(char) * 8) - 1; i >= 0; i--){
       putchar(x & (1u << i) ? '1' : '0');
    }
    printf("\n");
}

