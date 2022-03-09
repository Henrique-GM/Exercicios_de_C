#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct informacao // Estrutura "informacao" para armazenar informações de uma pessoa.
{
	char nome[50] ;
	int idade ;	
	char endereco[50] ;
} ;


int main (void)
{	
	setlocale (LC_ALL, "portuguese") ;
	
	struct informacao pessoa ; // Declarando à estrutura a partir da variável "pessoa".
	
		printf ("------------inserindo informações da pessoa------------\n\n\n") ;
		
		printf ("\n Digite seu nome.....: ") ;
		gets (pessoa.nome) ;
		
		printf ("\n Digite seu endereço.....: ") ;
		gets (pessoa.endereco) ;	
	
		printf ("\n Digite sua idade.....: ") ;
		scanf ("%d", &pessoa.idade) ;
				
	return 0 ;
	system ("pause") ;
}
