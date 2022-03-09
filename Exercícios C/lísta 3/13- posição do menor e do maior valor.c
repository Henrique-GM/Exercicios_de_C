#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "poruguese") ;	

	int i, vetor[5] = {12, 32, 54, 10, 7} ;
	int maior = 0, menor = 0, posicao1, posicao2, auxiliar = 0 ;

	for (i = 0; i < 5; i++)
	{
		if (auxiliar == 0)
		{
			maior = vetor[i] ;
			menor = vetor[i] ;
			auxiliar++ ;
		}
		
		else if (vetor[i] > maior)
		{
			maior = vetor[i] ;
			posicao1 = i ;
		}
		
		else if (vetor[i] < menor)
		{
			menor = vetor[i] ;
			posicao2 = i ;
		}
	}
		printf ("\n O maior é..: %d", maior) ;
		printf ("\n") ;
		printf ("\n A posição do maior é..: %d", posicao1) ;
		printf ("\n") ;
		printf ("\n O menor é..: %d", menor) ;
		printf ("\n") ;
		printf ("\n A posição do menor é..: %d", posicao2) ;

	return 0 ;
	system ("pause") ;
}
