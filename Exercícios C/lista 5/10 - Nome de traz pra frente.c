#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char nome[50] ;
	char nome_contrario[50] ;
	int tamanho ;
	int i ;
	
	printf ("\n Digite um nome..: ") ;
	fgets (nome, 50, stdin);
	
	tamanho = strlen (nome) ; // Vai contar à quantidade de caracteres no nome.
	
	for (i = tamanho; i >= 0; i--) // i recebe tamanho, se i for maior e igual à 0 i--.
	{
		printf ("%c", nome[i]) ; // O mativo de ser %c é porque, o programa ira pegar caractere por caractere para a resolução do programa.
	}
	
	return 0 ;	
	system ("pause") ;
}
