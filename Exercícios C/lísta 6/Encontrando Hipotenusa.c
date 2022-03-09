#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


	float Encontra_Hipotenusa (float cateto1, float cateto2, float Hipotenusa)
	{
		Hipotenusa = sqrt (pow (cateto1, 2) + pow (cateto2, 2)) ;
		
		printf ("\n A hipotenusa encontrada foi....: %.3f", Hipotenusa) ; 
	}


int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float cateto1, cateto2, Hipotenusa ; 
	
	printf ("\n Digite o primeiro cateto....: ") ;
	scanf ("%f", &cateto1) ;
	
	printf ("\n Digite o segundo cateto....: ") ;
	scanf ("%f", &cateto2) ;
	
	Encontra_Hipotenusa (cateto1, cateto2, Hipotenusa) ;
	
	return 0 ;
	system ("pause") ;
}
