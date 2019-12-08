/*
* EJ.4  Dado un dato recogido como un carácter, de tamaño 1 byte 
* presentarlos en pantalla en binario.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>


typedef unsigned char BYTE;

int binario(int num);

void main(){
	
	unsigned char a;
		
	printf("Introduce un caracter: ");
	scanf("%c", &a);	
	
	printf("\nCaracter: %c Dec: %d  Hex: %X", a, a, a);
	
	binario(b);
	
	int i=0;
	
	do{
		//bin[i++]=(b&1)?'1':'0';
		//b=b>>1;
		bin[i++]=(b%2)?'1':'0';
		b=(int)b/2;		
	}while(b);
	
	printf("\nBin= %s", bin);
}


int binario(int num){
   int aux, i=0;
   char r[8];
   
   if(num==0)
    return 0;

   aux=num%2;
   num=num/2;
   binario(num);
   r[i]=aux;
   printf("%d",aux);   
}

