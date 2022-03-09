#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char frase[100] ;
	char espaco[3] = {" "} ;
	int i, j, tamanho ;
	
	printf ("\n digite uma frase..: ") ;
	gets (frase) ;
	
	tamanho = strlen (frase) ;
	
	printf ("\n O tamanho atual da frase é..: %d", tamanho) ;

  	printf ("\n") ;
	
	for (i = 0; i < strlen (frase); i++)
	{
		for (j = 0; j < strlen (espaco); j++)
		{
			if (frase[i] == espaco[j])
			{
				frase [i] = i - 1 ; // PARA RETIRAR OS ESPAÇOS E, DEPENDEDO DOS CASOS PODE ACRECER DE UM.
				
				printf ("\n ---À frase sem espaços ficou---\n\n %s", frase) ;
			}
		}
	}
	
	return 0 ;
	system ("pause") ;
}
