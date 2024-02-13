#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, res; //Váriaveis
	
	printf("Digite 4 números em sequência para descobrir a média entre eles \n"); //Mensagem ao usúario
	
	printf("\nInsira o primeiro número: ");
	scanf("%f", &n1); //Armazena o valor inserido na váriavel
	
	printf("\nInsira o segundo número: ");
	scanf("%f", &n2);
	
	printf("\nInsira o terceiro número: ");
	scanf("%f", &n3);
	
	printf("\nInsira o quarto número: ");
	scanf("%f", &n4);
	
	res = (n1 + n2 + n3 + n4)/4; //Média = as váriaveis serão somadas e divididas por 4 (quantidade de números na operação)
	
	printf("\nA média entre os números é: %.2f \n", res);
		
	return 0;
}
