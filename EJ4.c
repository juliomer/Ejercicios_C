/*
* EJ.4  Dado un dato recogido como un carácter, de tamaño 1 byte 
* presentarlos en pantalla en binario.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>


typedef unsigned char BYTE;

// Prototipos
void binario(int num);


void main(){
	// Variables
	unsigned char a, aux, b;
		
	printf("Introduce un caracter: ");
	scanf("%c", &a);	
	
	printf("\nCaracter: %c Dec: %d  Hex: %X", a, a, a);
	
	printf("\nBinario: ");
//	binario(a);
	
	int i=0;
	b=a;
	do{
		//bin[i++]=(b&1)?'1':'0';
		//b=b>>1;
		//bin[i++]=(b%2)?'1':'0';
		aux=((b&1)?'1':'0'); //(b%2)?'1':'0';
		printf("%d", aux);
		b=b>>1;		
		//b=(int)b/2;		
	}while(b);
	printf("%d", b);
	//printf("\nBin= %s", bin);
}



void binario(int num){
   int aux, i=0;
   
   while (num!=0){
		aux=(num&1)?'1':'0'; //num%2;
		num=num>>1;
   		//num=num/2;
   		printf("%d",aux);
   }
	printf("%d",num);
}


int binarior(int num){
   int aux, i=0;
   char r[8];
   
   if(num==0)
    return 0;

   aux=num%2;
   num=num/2;
   binarior(num);
   r[i]=aux;
   printf("%d",aux);   
}

