#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char palavra [50] ;
	char caractere [2] ;
	int i, z ;
	int posicao ;
	
	printf ("\n Digite uma palavra..: ") ;
	gets (palavra) ;
	
	printf ("\n Digite uma letra do alfab�to contido na palavra digitada..: ") ;
	scanf ("%s", caractere) ;
	
	printf ("\n Digite � posi��o que ser� iniciada �s buscas p�la letra..: ") ;
	scanf ("%d", &i) ;
	
	for (i = i ; i < strlen (palavra); i++)
	{
		for (z = 0; z < strlen (caractere); z++)
		{
			if (palavra[i] == caractere[z])
			{
				posicao = i ;
				
				printf ("\n O caractere desejado est� na posi��o %d", posicao) ;
			}
			
			else 
			{
				printf ("\n Caractere n�o encontrado") ;
			}	
		}
	}
	
	return 0 ;
	system ("pause") ;	
}
