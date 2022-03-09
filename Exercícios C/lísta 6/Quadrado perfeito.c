#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int Quadrado_Perfeito (int numero, float fracao, int numero2) // Função que irá retornar se o número é,ou não é um quadrado perfeito.
{	

	fracao = sqrt (numero) ; // Função Raiz quradrada, Vou estar achando a raiz da variavel * fracao *.  
	                     
	numero2 = fracao ; // Variavel 'numero2' é auxiliar, pois vai reber o valor de 'fracao'.
	
	
	if (fracao <= numero2)
	{
		printf ("\n O número digitado é um número perfeito") ;
	}
		
	else 
	{
		printf ("\n O número digitado não é quadrado perfeito") ;
	}
	
}


int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int numero, numero2 ;
	float fracao ;
	
	printf ("\n Digite um número interiro......: ") ;
	scanf ("%d", &numero) ;	
	
	// Invocando Função.
	
	Quadrado_Perfeito (numero, fracao, numero2) ;
	
	return 0 ;
	system ("pause") ;	
}
