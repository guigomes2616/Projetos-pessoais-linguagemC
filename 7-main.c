#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float sal, perc, aum, novo_sal; //Váriaveis
	
	printf("Insira o seu salário e o valor percentual de aumento, que será calculado ao final \n"); //Mensagem ao usuario
	
	printf("\nDigite o valor do seu salário: ");
	scanf("%f", &sal); //Armazena o valor inserido na váriavel
	
	printf("\nDigite o valor percentual de aumento: ");
	scanf("%f", &perc);
	
	aum = sal * (perc/100); //Calcula somente o valor o aumento
	
	novo_sal = sal + aum; //Calcula o salário + aumento
	
	printf("\nO valor do aumento é de: %.2f \n", aum); //Imprime o valor do aumento
	
	printf("\nO valor do novo salário é: %.2f", novo_sal); //Imprime o novo valor do salário
	
	return 0;
}
