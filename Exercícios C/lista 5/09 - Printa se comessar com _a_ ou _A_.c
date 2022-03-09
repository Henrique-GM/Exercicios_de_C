#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{	
	setlocale (LC_ALL, "portuguese") ;
	
	char nome[50] ;
	char printa_nome[50] ;
	int i ;
	
	printf ("\n Digite sue nome..: ") ;
	fgets (nome, 50, stdin) ;
	
	for (i = 0; i < 50; i++)
	{
		if ((nome[0] == 'a') || (nome[0] == 'A'))
		{
			strcpy (printa_nome, nome) ;
		}
		
		else
		{
			strcpy (printa_nome, " ") ;
		}
	}
	
	printf ("\n") ;
	
	printf ("\n %s", printa_nome) ;
	
	return 0 ;
	system ("pause") ;
}
