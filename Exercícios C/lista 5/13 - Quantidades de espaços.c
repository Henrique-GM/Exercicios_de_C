#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char frase[100] ;
	int i, j ;
	char espaco[3] = " " ;
	int cont = 0 ;
	
	printf ("\n Digite uma frase..: ") ;
	fgets (frase, 100, stdin) ;
	
	printf ("\n") ;
	
	for (i = 0; i < strlen (frase); i++)
	{
		for (j = 0; j < strlen (espaco); j++)
		{
			if (frase[i] == espaco[j])
			{
				cont++ ;
			}
		}
	}
	
	printf ("\n À quantidade de espaços contados são..: %d", cont) ;
	
	return 0 ;
	system ("pause") ;
}
