#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int Quadrado_Perfeito (int numero, float fracao, int numero2) // Fun��o que ir� retornar se o n�mero �,ou n�o � um quadrado perfeito.
{	

	fracao = sqrt (numero) ; // Fun��o Raiz quradrada, Vou estar achando a raiz da variavel * fracao *.  
	                     
	numero2 = fracao ; // Variavel 'numero2' � auxiliar, pois vai reber o valor de 'fracao'.
	
	
	if (fracao <= numero2)
	{
		printf ("\n O n�mero digitado � um n�mero perfeito") ;
	}
		
	else 
	{
		printf ("\n O n�mero digitado n�o � quadrado perfeito") ;
	}
	
}


int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int numero, numero2 ;
	float fracao ;
	
	printf ("\n Digite um n�mero interiro......: ") ;
	scanf ("%d", &numero) ;	
	
	// Invocando Fun��o.
	
	Quadrado_Perfeito (numero, fracao, numero2) ;
	
	return 0 ;
	system ("pause") ;	
}
