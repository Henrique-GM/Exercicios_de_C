#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int vetor[5] ;
	
	for (int i = 0; i < 5; i++) 
	{
	    printf ("Digite o %d valor: ", i + 1);
	    scanf("%d", &vetor[i]);
	}
	
	for (int i = 0; i < 5; i++) 
	{
	     if (vetor[i] % 7 != 0) 
		{
			//SE VETOR MENOS 7 RESTO DA DIVISÃO DELE POR 10 FOR DIFERENTE DE 0.
			if ((vetor[i] - 7) % 10 != 0)
			{
				printf ("\n %d \n", vetor[i]) ;		
			}
	    }
	}    

	return 0 ;
	system ("pause") ;
}
