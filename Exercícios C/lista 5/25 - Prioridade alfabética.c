#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char palavra1[50] ;
	char palavra2[50] ;
	int ordem_alfabetica ;
	
	printf ("\n Digite uma palavra do alfabeto...: ") ;
	gets (palavra1) ;
	
	printf ("\n Digite outra palavra...: ") ;
	gets (palavra2) ;
	
	// COMPARA O CONTEUDO DE DUAS STRINGS PELA TABELA ASCII.
	ordem_alfabetica = strcmp (palavra1, palavra2) ;
	
	if (ordem_alfabetica == 0)
	{
		printf ("\n") ;
		
		printf ("\n Às palavras são iguais.") ;
	}
	
	else if (ordem_alfabetica < 0)
	{
		printf ("\n") ;
		
		printf ("\n A palavra %s vem primeiro na ordem alfabética.", palavra2) ;
	}
	
	else if (ordem_alfabetica > 0)
	{
		printf ("\n") ;
		
		printf ("\n A palavra %s vem primeiro na ordem alfabética", palavra1) ;
	}
	
	return 0 ;
	system ("pause") ;
}
