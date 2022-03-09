#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float salario, prestacao;	
	
	printf("\n Digite seu salario:\n");
	scanf("%f", &salario);
	
	printf("\n digite a prestacao que voce quer:\n");
	scanf("%f", &prestacao);
	
	
	if(prestacao > 20)
	{
		printf("\n emprestimo nao concedido \n");		
	}
	
	else if(prestacao <= 0)
	{
		printf("\n prestacao digitada errada \n");		
	}
	
	else
	{
		printf("\n emprestimo concedido \n");
	}
	
system("pause");	
return 0;	
}
