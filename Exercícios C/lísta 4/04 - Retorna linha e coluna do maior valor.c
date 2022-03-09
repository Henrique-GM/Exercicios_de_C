#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int maior, auxiliar = 0, posicao1, posicao2 ;
	int i, j ;
	int matriz[4][4] = {{1, 2, 3, 4} ,
						{5, 6, 7, 8} ,
						{9, 10, 11, 12} ,
						{13, 14, 15, 16}} ;
											
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (auxiliar == 0)
			{
				maior = matriz[i][j] ;
				
				auxiliar++ ;
			}
			
			else if (matriz[i][j] > maior)
			{
				maior = matriz[i][j] ;
				
				posicao1 = i ;
				posicao2 = j ;
			}
		}
	}

	printf ("\n O maior número é %d e sua posição é [%d][%d]", maior, posicao1, posicao2) ;

	return 0 ;
	system ("pause") ;
}
