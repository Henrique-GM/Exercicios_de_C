#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float nota1, nota2, media;
	
	printf("\n digite a primeira nota:\n");
	scanf("%f", &nota1);
	
	printf("\n digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	if((nota1 >= 0) || (nota1 <= 10))
	{
		
		if((nota2 >= 0) || (nota2 <= 10))
		{	
			media = (nota1 + nota2)/2.0;
			
			printf("A media do aluno foi:%.2f\n", media);
	    }
		
		else
		{
			printf("nota digitada errada");
		}		
	}
		
	else
	{
		printf("nota digitada errada");
	}
	
system("pause");	
return 0;	
}
