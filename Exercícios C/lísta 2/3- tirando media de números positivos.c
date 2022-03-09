#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float numero, media, i, soma ;
	
	for (i = 0; i < 3; i++)
	{
		printf ("\n Digite um número: ") ;
		scanf ("%f", &numero) ;
	
		if (numero >= 0)
		{
			soma = soma + numero ;
		}	
	}
	
	media = soma / 3;
	
	printf ("\n À média foi...: %.2f", media) ;
	
	return 0 ;
	system ("pause") ;
}