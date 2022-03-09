#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale (LC_ALL, "portuguese") ;
	
	int Numero ;
	
	printf ("\n Digite um número inteiro: ") ;
	scanf ("%d", &Numero);
	
	printf("\n");
	
	if ((Numero % 3 == 0) || (Numero % 5 == 0))	
	{
		printf("\n É divisível \n");
	}
		
	if ((Numero % 3 == 0) && (Numero % 5 == 0))
	{
		printf("\n Divisão simultania não é permitida \n") ;
    }
    
	if ((Numero % 3 != 0) && (Numero % 5 != 0))
	{
		printf("\n Não é divisível \n") ;
	}

system ("pause");	
return 0;	
}
