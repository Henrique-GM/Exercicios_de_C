
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void) {

	setlocale (LC_ALL, "portuguese") ;

	char nome[100] ;
	char nomenovo[100] ; 
	char nomevelho[100] ;
	int idade, auxiliar = 0, menor = 0, maior = 0 ;

	printf ("\n--------Digite um número negativo para sair do luping--------") ;
	
	printf ("\n") ;

	while (idade >= 0) {	
		
		// BLOCO DE CÓDIGO PARA SEPARAR O NOME NO PRIMEIRO ESPAÇO.
		printf ("\n Digite seu nome..: ") ;
		scanf ("%s", nome) ;
		
		printf ("\n Digite sua idade..: ") ;
		scanf ("%d", &idade) ;

    	if (idade < 0) {

      		break;
    	}
		
		// BLOCO DE CÓDIGO PARA ATRIBUIR E ATUALIZAR ÀS IDADES E OS NOMES.	
		if (auxiliar == 0) {
		
    	    maior = idade ;
		    menor = idade ;
      	    strcpy (nomenovo, nome);
      		strcpy (nomevelho, nome);
			auxiliar++ ;
		}
			
	    if (idade > maior) {

       		maior = idade;
			
            strcpy (nomevelho, nome);
		}
			
		else if (idade < menor) {
			
      		menor = idade;

      		strcpy (nomenovo, nome);
		}

        getchar();
    
	}
		// SAÍDA DOS DADOS.
		
		printf ("\n À pessoa mais velha é %s e sua idade %d", nomevelho, maior) ;
		printf ("\n À pessoa mais nova é %s e sua idade %d", nomenovo, menor) ;
	
	return 0 ;
	system ("pause") ;
}
