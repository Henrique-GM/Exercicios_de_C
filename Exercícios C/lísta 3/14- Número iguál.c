#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "poruguese") ;	

	int vetor[10] = {12, 12, 5, 6, 45, 15, 9, 7 ,25, 8} ;
	int i, j ;

		for (i = 0; i < 10; i++) // For para �s leituras dos valores.
		{	
			for (j = i + 1; j < 10; j++) // For para compara��o.(j = i + 1) significa pr�xima posis�o,comparando � primeira at� � �ltima,se n�o f�r igu�l.
			{
				if (vetor[i] == vetor[j]) // Se vetor[i] for igual o vetor[j].
				{
					printf ("\n O valor %i se repte", vetor[i]) ;
				}
			}
		}
	
	return 0 ;
	system ("pause") ;
}
