/* Realizar un programa mediante un men� que me permita realizar una calculadora. 
*  En la cual cada opci�n se seleccionar� pulsando los caracteres correspondientes, 
*  '+', '-', '*', '/', 'p'. Siendo 'p' la opci�n para calcular potencias con base 
*  y exponente enteros.
*/

#include <stdio.h>
#include <math.h>


void main(){
	// Variables	
	float op1=0, op2=0;
	char op;
	
	do{
		fflush(stdin);
		do{
		
			printf("\nMenu Calculadora\n");	
			printf("Suma (+) \n");
			printf("Resta (-)\n");
			printf("Multiplicacion (*)\n");
			printf("Division (/)\n");
			printf("Potencia (p)\n");
			printf("Salir (s)\n");
			printf("Introduce una opcion (+, -, *, /, p, s): ");
			scanf("%c", &op);
			if (!(op=='+' || op=='-' || op=='*' || op=='/' || op=='p' || op=='s')){
				printf("Opcion invalida\n");
			}
		}while (!(op=='+' || op=='-' || op=='*' || op=='/' || op=='p' || op=='s'));
		
		switch(op){
		case '+':
			printf("Introduce operandos: ");
			scanf("%f %f", &op1, &op2);	
			printf("\nSuma(%0.2f + %0.2f): %0.2f \n\n", op1, op2, op1+op2);
			break;
		case '-':
			printf("Introduce operandos: ");
			scanf("%f %f", &op1, &op2);	
			printf("\nResta(%0.2f - %0.2f): %0.2f \n\n", op1, op2, op1-op2);		
			break;
		case '*':
			printf("Introduce operandos: ");
			scanf("%f %f", &op1, &op2);	
			printf("\nMultiplicacion(%0.2f * %0.2f): %0.2f \n\n", op1, op2, op1*op2);		
		break;
		case '/':
			do{		
				printf("Introduce operandos: ");
				scanf("%f %f", &op1, &op2);	
				if (op2==0){
					printf("\nEl segundo operando no puede ser cero \n");
				}
			}while (op2==0);
			printf("\nDivision(%0.2f / %0.2f): %0.2f \n\n", op1, op2, op1/op2);		
		break;
		case 'p':
			printf("Introduce operandos: ");
			scanf("%f %f", &op1, &op2);	
			printf("\nPotencia(%0.2f ^ %0.2f): %0.2f \n\n", op1, op2, pow(op1,op2));		
		break;
		case 's':
			printf("\nFIN");
			break;
		default:
			printf("\nOpcion incorrecta.");
			break;
		}
		
	}while (op!='s');
			
}

