#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	char frase[100] ;
	char substituta[3] = {"A"} ;
	int invertido ;
	int i, j, z ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite uma frase..: ") ;
	fgets (frase, 100, stdin) ;
	
	for (i = 0; i < strlen (frase); i++)
	{
		for (j = 0; j < strlen (substituta); j++)
		{
			//BLOCO DE CÓDIGO PARA INVERSÃO E SUBSTITUIÇÃO DE CARACTERES.
			if (frase[i] == substituta[j])
			{
				frase[i] = 42 ;
				
				invertido = strlen (frase) ;
				
				for (z = invertido; z >= 0; z--)
				{
					printf ("%c", frase[z]) ;
				}			
			}
		}
	}
	
	return 0 ;
	system ("pause") ;
}
