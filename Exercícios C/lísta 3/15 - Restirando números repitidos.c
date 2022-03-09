#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[20] = {1, 1, 56, 36, 5, 5, 48, 76, 2, 2, 44, 82, 82, 15, 15, 16 ,16, 18, 18, 35} ;
	int i, j, removidos ;
	
	for (i = 0; i <= 20; i++) // Para o alocamento em removidos funcionar i e j tem que ser menor ou igual a 20.
	{	
		for (j = i + 1; j <= 20; j++) // Para o alocamento em removidos funcionar i e j tem que ser menor ou igual a 20.
		{
			if (vetor[i] == vetor[j])
			{
				removidos = vetor[i] ; // Alocando numeros 'iguais' ao removidos "ajudou pa carai viu" cada exemplo no youtube...puta que pariu.
			}
			
			if (vetor[i] != removidos) // Se vetor[i] for diferente de removidos.
			{
				printf ("\n %d \n", vetor[i]) ;
				break ;
			}					
		}
	}
	
	return 0 ;
	system ("pause") ;
}
