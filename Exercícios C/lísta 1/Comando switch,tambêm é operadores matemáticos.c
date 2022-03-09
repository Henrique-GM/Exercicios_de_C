#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale (LC_ALL, "portuguese") ;
	
	float Valor1, Valor2, Resposta ; 
	char Operador ;
	
	printf ("\n =============================================================================") ;
	printf ("\n Digite 1 - Soma entre dois números. \n") ;
	printf ("\n Digite 2 - A difereça entre dois números -- O maior pelo menor. \n") ;
	printf ("\n Digite 3 - O produto entre dois números. \n") ;
    printf ("\n Digite 4 - Divião entre dois números -- O denominador não pode ser 0. \n") ;	
	printf ("\n =============================================================================") ;
	
	printf ("\n") ;
	
	printf ("\n Digite o primeiro valor: ") ;
	scanf ("%f", &Valor1) ;
	
	printf ("\n") ;
	
	printf ("\n Digite a opção desejada: ") ;
	scanf (" %c", &Operador) ;
	
	printf ("\n") ;
	
	printf ("\n Digite o segundo valor: ") ;
	scanf ("%f", &Valor2) ;
	
	printf ("\n") ;
	
	printf ("\n A opção desejada foi: %c \n", Operador) ;
	
	printf("\n") ;
	
	
	
	switch (Operador){
			
		case '1' :
			Resposta = Valor1 + Valor2 ;
			
			printf ("\n A soma entre os dois valores foi %.2f \n: ", Resposta) ;
		break ;
		
		
		case '2' :
			if (Valor1 > Valor2){
				Resposta = Valor1 - Valor2 ; 			
				
				printf ("\n A diferença entre os valores foi %.2f \n: ", Resposta) ;
				
			}if (Valor1 < Valor2){
				Resposta = Valor2 - Valor1 ;
				
				printf ("\n A diferença entre os valores foi %.2f \n: ", Resposta) ;
				
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
				printf ("\n O denominador não pode ser 0. \n") ;
						
			}else{
				Resposta = Valor1 / Valor2 ;
				
				printf ("\n A divisão entre os dois valores é %.2f \n :", Resposta) ;
			}
			
		break ;	 
		
		
		default :
			printf ("\n informação invalida \n") ;
	}
	
system ("pause") ;
return 0 ;	
}
