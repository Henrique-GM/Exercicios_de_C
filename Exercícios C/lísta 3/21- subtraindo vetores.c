#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	float vetorA[10] ;
	float vetorB[10] ;
	float vetorC[10] ;
	int i ;
	
	for (i = 0; i < 4; i++)
	{
		printf ("\n digite 10 valores do vetorA..: ") ;
		scanf ("%f", &vetorA[i]) ;
		
		printf ("\n digite 10 valores do vetorB..: ") ;
		scanf ("%f", &vetorB[i]) ;
		
		printf ("\n\n") ;
	}

	for (i = 0; i < 4; i++)
	{
		vetorC[i] = vetorA[i] - vetorB[i] ;
		
		printf ("\n subtração do vetorC..: %.2f \n", vetorC[i]) ;
	}

	return 0 ;
	system ("pause") ;
}
