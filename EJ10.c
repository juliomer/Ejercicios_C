/*
* EJ.10  Dado un dato recogido como un carácter, de tamaño 1 byte 
* presentarlos en pantalla en binario y me informe si ese dato tiene paridad par o impar.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>


// Prototipos
void binario(int num);
void showbits(unsigned char x);
void paridad (unsigned char x);


void main(){
	// Variables
	unsigned char a, aux, b;
		
	printf("Introduce un caracter: ");
	scanf("%c", &a);	
	
	printf("\nCaracter: %c Dec: %d  Hex: %X", a, a, a);
	
	printf("\nBinario: ");
	showbits(a);
	paridad(a);
}


/* Funciones */
void showbits(unsigned char x){
	int i;
    for (i = (sizeof(char) * 8) - 1; i >= 0; i--){
       putchar(x & (1u << i) ? '1' : '0');
    }
    printf("\n");
}

void paridad (unsigned char x){
	(x % 2 ==0)? printf("Es par. \n"): printf("Es impar. \n");
}

