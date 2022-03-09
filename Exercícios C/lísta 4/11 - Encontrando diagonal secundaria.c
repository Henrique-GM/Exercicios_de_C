#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int matriz[3][3] ;
	int i, j, soma ;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("\n digite um número[%d][%d]..: ", i, j) ;
			scanf ("%d", &matriz[i][j]) ;
	    }
    }

	for (i = 0; i < 3; i++)
	{	
		for (j = 0; j < 3; j++)
		{
			if (i + j == 2) // Encontrando matriz secundaria.
			{
				soma = soma + matriz[i][j] ; 
			}
	    }
    }
    
	printf ("%d", soma);
	
	return 0 ;
	system ("pause") ;
}
