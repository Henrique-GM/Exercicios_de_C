#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale (LC_ALL, "portuguese") ;
	
	float Valor1, Valor2, Resposta ; 
	char Operador ;
	
	printf ("\n =============================================================================") ;
	printf ("\n Digite 1 - Soma entre dois n�meros. \n") ;
	printf ("\n Digite 2 - A difere�a entre dois n�meros -- O maior pelo menor. \n") ;
	printf ("\n Digite 3 - O produto entre dois n�meros. \n") ;
    printf ("\n Digite 4 - Divi�o entre dois n�meros -- O denominador n�o pode ser 0. \n") ;	
	printf ("\n =============================================================================") ;
	
	printf ("\n") ;
	
	printf ("\n Digite o primeiro valor: ") ;
	scanf ("%f", &Valor1) ;
	
	printf ("\n") ;
	
	printf ("\n Digite a op��o desejada: ") ;
	scanf (" %c", &Operador) ;
	
	printf ("\n") ;
	
	printf ("\n Digite o segundo valor: ") ;
	scanf ("%f", &Valor2) ;
	
	printf ("\n") ;
	
	printf ("\n A op��o desejada foi: %c \n", Operador) ;
	
	printf("\n") ;
	
	
	
	switch (Operador){
			
		case '1' :
			Resposta = Valor1 + Valor2 ;
			
			printf ("\n A soma entre os dois valores foi %.2f \n: ", Resposta) ;
		break ;
		
		
		case '2' :
			if (Valor1 > Valor2){
				Resposta = Valor1 - Valor2 ; 			
				
				printf ("\n A diferen�a entre os valores foi %.2f \n: ", Resposta) ;
				
			}if (Valor1 < Valor2){
				Resposta = Valor2 - Valor1 ;
				
				printf ("\n A diferen�a entre os valores foi %.2f \n: ", Resposta) ;
				
			}else{
				printf ("\n Valores iguais invalidos. \n") ;
			}	
		break ;
		
		
		case '3' :
			Resposta = Valor1 * Valor2 ;
			
			printf ("\n O produto dos dois valores foi %.2f \n: ", Resposta) ;
		break ;
		
		
		case '4' :
			if ( Valor2 == 0){
				printf ("\n O denominador n�o pode ser 0. \n") ;
						
			}else{
				Resposta = Valor1 / Valor2 ;
				
				printf ("\n A divis�o entre os dois valores � %.2f \n :", Resposta) ;
			}
			
		break ;	 
		
		
		default :
			printf ("\n informa��o invalida \n") ;
	}
	
system ("pause") ;
return 0 ;	
}
