#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float NumeroPositivoNegativoOuIgual (float Numero) 
{ //Função para verificar se é positivo, negativo ou igual.
	
	if (Numero > 0)  //Bloco de codigo "if, else if e else" encadeados para saídas de dados...1 = número positivo, -1 = número negativo, 0 = número igual. 
	{
		printf ("\n Se é maior que 0 é --1-- \n") ;		
	}
	
	else if (Numero < 0) 
	{	
	 printf ("\n Se é menor que 0 é -- -1-- \n") ; 	
	} 
		
	else 
	{
	 printf ("\n é igual à 0 é -- 0 --") ;
	}
}
		

	
	
	
int main () 
{
	
	float Numero ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite um número: ") ; //entrada de um número para vereificar se é positivo, negativo ou igual.
	scanf ("%f", &Numero) ;
	
	NumeroPositivoNegativoOuIgual (Numero) ; //Invocando fução
	
system ("pause") ;	
return 0 ;	

}

