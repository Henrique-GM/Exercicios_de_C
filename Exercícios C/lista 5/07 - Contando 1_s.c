#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

  
	char conta_ums[10] ;
	int i, cont = 0 ;
	
	for (i = 0; i < 10; i++)
	{
		printf ("\n Insira um número 0 ou 1..: ") ;
		scanf (" %c", &conta_ums[i]) ;
		
		if (conta_ums[i] == '1')
    	{
     		cont = cont + 1 ;
    	}
	}

	printf ("\n") ;

	printf ("\n As quantidades de 1 são..: %d", cont) ;

	return 0 ;
	system ("pause") ;
}
