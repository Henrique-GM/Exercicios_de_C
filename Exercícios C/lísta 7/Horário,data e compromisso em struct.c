#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//TÁ DANDO PROBLEMA
struct Horario //Definindo estrutura horário.
{
	int horas ;	
	int minutos ;
	int segundos ;
} ;

struct Data //Definindo estrutura data.
{
	int dia ;
	int mes ;
	int ano ;
} ;

struct Compromisso //Definindo estrutura com vetor compromisso.
{
	char dever[40] ;	
} ;



int main (void) {
	
	
	setlocale (LC_ALL, "portuguese") ;
	
	
	struct Horario exercicio ; //Declarando a estrutura Horario e a variável exercício e inserindo valores. 
	
	
		printf ("------------------Inserindo o horário------------------\n\n\n") ;
		
		printf ("insira as horas.......: ") ;
		scanf ("%d", &exercicio.horas) ;	
		
		printf ("Insira os minutos.......: ") ;
		scanf ("%d", &exercicio.minutos) ;
			
		printf ("Insira os segundos.......: ") ;
		scanf ("%d", &exercicio.segundos) ;
			
		printf ("\n\n") ;
		
		
	struct Data exemplo ; //Declarando a estrutura Data e a variável exemplo e inserindo valores.
	
	
		printf ("-----------------Inserindo o calendario-----------------\n\n\n") ;
		
		printf ("Insira o dia.......: ") ;
		scanf ("%d", &exemplo.dia) ;
		
		printf ("Insira o mês.......: ") ;
		scanf ("%d", &exemplo.mes) ;	
		
		printf ("Insira o ano.......: ") ;
		scanf ("%d", &exemplo.ano) ;	
			
		printf ("\n\n") ;	
	
		
	struct Compromisso dever ; //Declarando a estrutura Compromisso e a variável dever e inserindo valores
		
	
		printf ("-----------------Inserindo o compromisso-----------------\n\n\n") ;
		
		printf ("Insira o seu compromisso.......: ") ;
		scanf ("%s", &dever.dever) ;	
			
		printf ("\n\n") ;
		
		printf ("-----------------Calendário organizado-------------------\n\n\n") ;	
			
		printf ("O seu compromisso de.......: %s \n", dever.dever) ;
		printf ("vai ser no dia.......: %d \n", exemplo.dia) ;	
		printf ("no mês.......: %d  \n", exemplo.mes) ;
		printf ("e no ano.......: %d \n", exemplo.ano) ;
		printf ("às.......: %d:%d:%d \n",exercicio.horas, exercicio.minutos, exercicio.segundos) ;	
		
			
	system ("pause") ;		
	return 0 ;	
}
