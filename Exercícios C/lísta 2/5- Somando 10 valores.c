#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float numero, soma, i ;
	
	for (i = 0; i < 10; i++)
	{
		printf ("\n Digite um valor...: ") ;
		scanf ("%f", &numero) ;
		
		soma = soma + numero ;
	}
	
	printf ("\n À soma foi...: %.2f", soma) ;
	
	return 0 ;
	system ("pause") ;
}
