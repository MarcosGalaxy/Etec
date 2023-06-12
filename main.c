#include <stdio.h>
#include <stdlib.h>

int main()
{
//Declaração
	float cotacao;
	float dolar;
	float real;
	char opcao;
	opcao = 's';
	dolar = 1;


//Código
	while(opcao == 's')
	{
			if(dolar =< 10)
		{
			printf ("Insira um valor em dolar maior do que 10\n");
		}else {
			scanf ("%f",&dolar);
		}

		printf ("Bem vindo. Insira a cotacao do dolar\n");
		scanf ("%f",&cotacao);
	
		real = cotacao*dolar;
		printf ("O valor convertido em reais e: %f\n\n",real);

		printf ("Gostaria de realizar alguma outra operacao? [s/n]");
		scanf ("%s",&opcao);
	}
	return 0;
}
