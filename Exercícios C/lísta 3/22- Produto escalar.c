#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	float vetorA[5] ;
	float vetorB[5] ;
	int i ;
	float Produto_escalar, soma ;

	for (i = 0; i < 5; i++)
	{
		printf ("\n Digite o valor do vetorA..: ") ;
		scanf ("%f", &vetorA[i]) ;
		
		printf ("\n Digite o valor do vetorB..: ") ;
		scanf ("%f", &vetorB[i]) ;
		
		printf ("\n") ;
	}

	for (i = 0; i < 5; i++)
	{
		Produto_escalar = vetorA[i] * vetorB[i] ;
		
		printf ("\n Produto escalar é..: %.2f \n", Produto_escalar) ;
		
		soma = soma + Produto_escalar ;	
	}
	
		printf ("\n À soma de todos os valores multiplicados é..: %.2f", soma) ;

	return 0 ;
	system ("pause") ;
}
