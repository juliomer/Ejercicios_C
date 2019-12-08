/*
* EJ.1  Dado un dato recogido como un carácter, de tamaño 1 byte 
* separar la parte alta de la baja.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

# define ALTO 240
# define BAJO 15
# define MASK 0xF

typedef unsigned char BYTE;


void main(){
	
	unsigned char a;
	//char resultado[8], ra[8], rb[8];
	
	printf("Introduce un caracter: ");
	scanf("%c", &a);
	
	printf("\nCaracter: %c  Dec: %d  Hex: %x", a, a, a);
			
	printf ("\nDec -> ALTO = % d BAJO = % d ", a&ALTO, a&BAJO);
	printf ("\nHex -> ALTO = % d BAJO = % d ", (a>>4)&MASK, a&MASK);
	
	/*
	printf ("\nResultado HEX= % s Binario: %s" , ltoa(b, resultado, 16), ltoa(b, resultado, 2) ) ;
	printf ("\nresAlto HEX= % s Binario: %s" , ltoa((int)resAlto, ra, 16), ltoa((int)resAlto, ra, 2) ) ;
	printf ("\nresBajo HEX= % s Binario: %s" , ltoa((int)resBajo, rb, 16), ltoa((int)resBajo, rb, 2) ) ;
	*/
}
