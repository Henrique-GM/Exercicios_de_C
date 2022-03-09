#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int inteiro1, inteiro2, subtracao;
	
	printf("digite um numero interio:\n");
	scanf("%d", &inteiro1);
		
	printf("digite outro nuemero inteiro:\n");
	scanf("%d", &inteiro2);
	
	
	if(inteiro1 > inteiro2)
	{
		printf("o maior numero eh:%d\n", inteiro1);
		
		subtracao = inteiro1 - inteiro2;
		
		printf("a diferensa entre os dois eh:%d\n", subtracao);	
	}
	
	else
	{
		printf("o maior numero eh:%d\n", inteiro2);
		
		subtracao = inteiro2 - inteiro1;
		
		printf("a diferensa entre os dois eh:\n%d", subtracao);
	}
	
system("pause");		
return 0;	
}
