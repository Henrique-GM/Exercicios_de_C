#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int DataMesAnoEmExtenso (int Dia, int Mes, int Ano) 
{ // Fun��o por referencia com switch para tranformar m�s extenso, em m�s inteiro.
		
	switch (Mes) 
	{ // Switch para quando digitar um n�mero inteiro de 1 h� 12 transforme em seus meses correspondentes.
		
		case 1 :
			printf ("\n %d de Janeiro de %d \n", Dia, Ano ) ;
		break ;
		
		case 2 :
			printf ("\n %d de Fevereiro de %d \n", Dia, Ano ) ;
		break ;
		
		case 3 :
			printf ("\n %d de Mar�o de %d \n", Dia, Ano ) ;
		break ;
		
		case 4 :
			printf ("\n %d de Abril de %d \n", Dia, Ano ) ;
		break ;
		
		case 5 :
			printf ("\n %d de Maio de %d \n", Dia, Ano ) ;
		break ;
		
		case 6 :
			printf ("\n %d de Junho de %d \n", Dia, Ano ) ;
		break ;
		
		case 7 :
			printf ("\n %d de Julho de %d \n", Dia, Ano ) ;
		break ;
		
		case 8 :
			printf ("\n %d de Agosto de %d \n", Dia, Ano ) ;
		break ;
		
		case 9 :
			printf ("\n %d de Setembro de %d \n", Dia, Ano ) ;
		break ;
		
		case 10 :
			printf ("\n %d de Outubro de %d \n", Dia, Ano ) ;
		break ;
		
		case 11 :
			printf ("\n %d de Novembro de %d \n", Dia, Ano ) ;
		break ;
		
		case 12 :
			printf ("\n %d de Dezembro de %d \n", Dia, Ano ) ;
		break ;
		
		default :
			printf ("\n informa��o invalida \n") ;
		
	}
	
}

int main (void)
 
{	
	setlocale (LC_ALL, "portuguese") ;
	
	int Dia, Mes, Ano ; // Declarando variaveis.
	
	// Entrada de dados em Dia, Mes e Ano.
	
	printf ("\n Digite o dia atual do m�s: ") ;
	scanf ("%d", &Dia) ;
	
	printf("\n") ;
	
	printf ("\n Digite o m�s atual: ") ;
	scanf ("%d", &Mes) ;
	
	printf ("\n") ;
	
	printf ("\n Digite o ano atual: ") ;
	scanf ("%d", &Ano);
	
	// Invocando Fun��o.
	
    DataMesAnoEmExtenso (Dia, Mes, Ano) ;
	
    system ("pause") ;	
    return 0 ;	
}
