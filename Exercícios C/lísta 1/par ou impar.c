#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int numero;
	
	printf("\n digite um numero:");
	scanf("%d", &numero);
	
	if(numero % 2 == 0)
	{
		printf("\n eh um numero par\n");			
	}
	
	else
	{
		printf("\n eh um numero impar\n");
	}
		
system("pause");	
return 0;	
}
