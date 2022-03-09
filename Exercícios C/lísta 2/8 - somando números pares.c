#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int numero, i, soma = 0 ;

  for (i = 0; i < 50; i++)
  {
    printf ("\n Digite um número..: ") ;
    scanf ("%d", &numero) ;

    if (numero % 2 == 0)
    {
    	soma = soma + numero ;
    }
  }

  printf ("\n À soma dos numeros pares foi..: %d", soma ) ;
	
	return 0 ;
	system ("pause") ;
}
