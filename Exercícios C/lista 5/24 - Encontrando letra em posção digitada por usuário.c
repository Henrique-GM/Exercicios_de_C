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
	
	printf ("\n Digite uma letra do alfabéto contido na palavra digitada..: ") ;
	scanf ("%s", caractere) ;
	
	printf ("\n Digite à posição que será iniciada às buscas pêla letra..: ") ;
	scanf ("%d", &i) ;
	
	for (i = i ; i < strlen (palavra); i++)
	{
		for (z = 0; z < strlen (caractere); z++)
		{
			if (palavra[i] == caractere[z])
			{
				posicao = i ;
				
				printf ("\n O caractere desejado está na posição %d", posicao) ;
			}
			
			else 
			{
				printf ("\n Caractere não encontrado") ;
			}	
		}
	}
	
	return 0 ;
	system ("pause") ;	
}
