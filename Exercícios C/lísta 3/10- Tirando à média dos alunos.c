#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "poruguese") ;	

	float notas[5], soma, media ;
	int i ;

	for (i = 0; i < 5; i++)
	{
		printf ("\n digite a nota do aluno..: ") ;
		scanf ("%f", &notas[i]) ;
		
		soma = soma + notas[i] ;			
	}

  printf ("\n\n") ;

  media = soma / 5 ;

	printf ("\n A média da turma é..: %.2f", media ) ;
		
	return 0 ;
	system ("pause") ;
}
