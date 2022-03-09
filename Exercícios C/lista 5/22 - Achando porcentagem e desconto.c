#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	char nome_mercadoria[50] ;
	float preco, porcentagem, desconto ;

	printf ("\n Digite o nome da mercadoria da loja..: ") ;
	fgets (nome_mercadoria, 50, stdin) ;

	printf ("\n Digite o valor da mercadoria..: ") ;
	scanf ("%f", &preco) ;
	
	printf ("\n O nome da mercadoria é..: %s", nome_mercadoria) ;
	printf ("\n O preço total é..: %.2f", preco) ;
	
	// FORMULA PARA CALCULAR PORCENTAGEM.
	porcentagem = (preco / 100) * 10 ;

	desconto = preco - porcentagem ;
	
	printf ("\n O preço com desconto foi %.2f", desconto) ;

	return 0 ;
	system ("pause") ;
}
