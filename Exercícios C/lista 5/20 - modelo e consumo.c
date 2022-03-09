
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//NOME DA ESTRUTÚRA.
struct modelos 
{
	char modelos_carros[100] ;
	float consumo_litros ;
} ;


int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int auxiliar = 0 ;
	int i, j ;
	float Km1, Km2, Km3, Km4, Km5 ;
	float menor ;
	char economico[100] ;
	
	// VARIÁVEL DA ESTRUTÚRA
	struct modelos carros[5] ;
		
		// FOR PARA INCERSÃO DOS DADOS E CÁLCULO DO CONSUMO DE COMBÛSTIVEL.
		for (i = 0; i < 5; i++)
		{
			printf ("\n Incíra um modelo de carro..: ") ;
			fgets (carros[i].modelos_carros, 100, stdin) ;
			
			printf ("\n Digite o consumo de combustível por Km rodado..: ") ;
			scanf ("%f", &carros[i].consumo_litros) ;
			
			Km1 = 1000 * carros[0].consumo_litros ; 
			Km2 = 1000 * carros[1].consumo_litros ;
			Km3 = 1000 * carros[2].consumo_litros ;
			Km4 = 1000 * carros[3].consumo_litros ;
			Km5 = 1000 * carros[4].consumo_litros ; 
			
			getchar();
		}
		
		// FOR PARA IDENTIVICAR O CARRO MAIS ECONÔMICO.
		for (j = 0; j < 5; j++)
		{
			if (auxiliar == 0)
			{
				menor = carros[j].consumo_litros ;
				strcpy (economico, carros[j].modelos_carros) ;
				auxiliar++ ; 
			}
			
			if (carros[j].consumo_litros < menor)
			{
				menor = carros[j].consumo_litros ;
				
				strcpy (economico, carros[j].modelos_carros) ;
			}
		}
		
	// SAÍDA DOS DADOS.	
    printf ("\n") ;

	printf ("\n O modelo de corro mais econômico é..: %s", economico) ;

    printf ("\n") ;

	printf ("\n À quantidade de combustível necessária para 1000 Km é..: %.2f", Km1) ;
	printf ("\n À quantidade de combustível necessária para 1000 Km é..: %.2f", Km2) ;
	printf ("\n À quantidade de combustível necessária para 1000 Km é..: %.2f", Km3) ;	
	printf ("\n À quantidade de combustível necessária para 1000 Km é..: %.2f", Km4) ;
  	printf ("\n À quantidade de combustível necessária para 1000 Km é..: %.2f", Km5) ;

	return 0 ;
	system ("pause") ;
}
