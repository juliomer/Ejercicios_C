/*
* EJ.3  Dado un dato recogido como un carácter, de tamaño 1 byte 
* invertir los bits pares.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

# define ALTO 240
# define BAJO 15
# define MASK 0x01


void main(){
	
	unsigned char a, aux, res;
	int i;
	
	printf("Introduce un caracter: ");
	scanf("%c", &a);	
	
	printf("\nCaracter: %c  Dec: %d  Hex: %x", a, a, a);
			
	printf ("\nDec -> ALTO = % d BAJO = % d ", a&ALTO, a&BAJO);
	printf ("\nHex -> ALTO = % d BAJO = % d ", (a>>4)&0xf, a&0xf);
	
	printf ("\nHex -> b7= %d b6= %d b5= %d b4= %d b3= %d b2= %d b1= %d b0= %d ", (a & (MASK<<7)), (a & (MASK<<6)) , (a & (MASK<<5)), (a & (MASK<<4)) , (a & (MASK<<3)), (a & (MASK<<2)) ,(a & (MASK<<1)), (a & (MASK<<0)) );
	printf ("\nHex -> Suma= %d ", (a & (MASK<<6))+ (a & (MASK<<5)) );
	
	//res=(((a>>7)&MASK)<<7 | ~((a>>6)&MASK)<<6 | ((a>>5)&MASK)<<5 | ((a>>4)&MASK)<<4 | ~((a>>3)&MASK)<<3 | ((a>>2)&MASK)<<2 | ~((a>>1)&MASK)<<1 | a&MASK);
	res=((a & (MASK<<7)) | ~(a & (MASK<<6)) | (a & (MASK<<5)) | ~( a & (MASK<<4))  | (a & (MASK<<3)) | ~( a & (MASK<<2))  | (a & (MASK<<1)) | ~a&MASK);
	printf("\nCaracter: %c  Dec: %d  Hex: %x", res, res, res);
	
	for (i=0; i<8; i++){
		aux=(a & (0x01<<i));
		if (i%2==0){
			aux>0?0:aux;
		}
		aux+= aux;
	}
	
	printf ("\nInvertido Char=%c  Dec=%d  Hex=%x ", aux, aux, aux);
}

