
// Tá dando errado porque tô perguntando para o usuario digitar, e não pre- alocar os valores.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor1[10] ;
	int vetor2[10] ;
	int i ;
	
	for (i = 0; i < 10; i++)
	{
		printf ("\n digite números inteiros entre 0 e 50..: ") ;
		scanf ("%d", &vetor1[i]) ;	  
	}

    for (i = 0; i < 10; i++)
  	{
	    if (vetor1[i] % 2 == 1)
		{
			vetor2[i] = vetor1[i] ;
		}
	
	    printf ("\n %d %d", vetor1[i], vetor2[i]) ;		
    }

	return 0 ;
	system ("pause") ;	
}
