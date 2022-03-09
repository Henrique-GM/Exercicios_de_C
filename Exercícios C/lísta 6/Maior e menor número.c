#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	float Maior_Menor_Numero (float numero1, float numero2, float maior, float menor)
	{
		
			maior = numero1 ;
			
			menor = numero2 ;			
		
		
		if (maior > menor)
		{
			printf ("\n O maior número foi %.2f e o menor %.2f", maior, menor) ;
		}
		
		else
		{
			printf ("O maior número foi %.2f e o menor %.2f", menor, maior) ;
		}
	}



int main (void)
{
	
	float numero1, numero2, maior, menor ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite um número....: ") ;
	scanf ("%f", &numero1) ;	
	
	printf ("\n Digite outro número....: ") ;
	scanf ("%f", &numero2) ;	
	
	Maior_Menor_Numero (numero1, numero2, maior, menor) ;
	
	return 0 ;
	system ("pause") ;
}

