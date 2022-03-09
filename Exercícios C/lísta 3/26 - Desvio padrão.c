#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float vetorN [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
	float media, soma, Desvio_padrao ;
	int i ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	for (i = 0; i < 10; i++)
	{
		soma = soma + vetorN[i] ;
	}
	
	printf ("\n\n") ;
	
	media = soma / 10 ;
	
	for (i = 0; i < 10; i++)
	{
		Desvio_padrao = sqrt (pow (vetorN[i] - media, 2)) ; 
	}
	
	printf ("\n O desvio padrão dos valores são..: %.4f", Desvio_padrao) ;
	
	return 0 ;
	system ("pause") ;
}
