#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;


	int i, j ;
	int numero, posicao1, posicao2, nao_encontrado ;
	
	int matriz[5][5] = {{1, 2, 3, 4, 5} ,
				   		{6, 7, 8, 9, 10} ,
				   		{11, 12, 13, 14} ,
				   		{15, 16, 17, 18} ,
				   		{19, 20, 21, 22}} ;
				   
	printf ("\n Digite um número..: ") ;
	scanf ("%d", &numero) ;			
					
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (matriz[i][j] == numero)
			{
				posicao1 = i ;
				posicao2 = j ;
				
				printf ("\n O número que você digitou %d está nas posiçãoes[%d][%d]", numero, posicao1, posicao2) ;
			}
			
			if ((numero < 1) || (numero > 23))
			{
				printf ("\n O Número %d não encontrado", numero) ;
        		break ;
			}
		}	
	}
	
	return 0 ;
	system ("pause") ;
}
