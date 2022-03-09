#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[10] = {11, 9, 5, 9, 7, 3, 12, 5, 12, 15} ;
	int i, maior = 0, auxiliar = 0, posicao ;
	
	for (i = 0; i < 10; i++)
	{
		if (auxiliar == 0)
		{
			maior = vetor[i] ;
			auxiliar++ ;
		}
		
		else if (vetor[i] > maior)
		{	
			maior = vetor[i] ;
      		posicao = i ; // vetor é igual à posição do vetor.
		}
	}
	
	printf ("\n O maior elemento é %d na %d posição", maior, posicao) ;
	
	return 0 ;
	system ("pause") ;
}
