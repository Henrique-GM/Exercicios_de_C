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
			printf ("\n digite um n�mero[%d][%d]..: ", i, j) ;
			scanf ("%d", &matriz[i][j]) ;
	    }
    }

	for (i = 1; i < 3; i++) // para evitar � diagonal principal.
	{
		for (j = 0; j < i; j++) // Vai encontrar os n�meros abaixo da diagonal principal.
		{
			soma = soma + matriz[i][j] ;
		}
	}
	
	printf ("A soma resultante foi de..: %d", soma) ;

	return 0 ;
	system ("pause") ;
}
