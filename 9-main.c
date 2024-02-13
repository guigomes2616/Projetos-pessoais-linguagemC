#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Acentos da lingua portuguesa
	
	float n1, n2; //Variaveis
	
	printf("Digite dois números para saber o maior entre eles.\n");
	
	printf("\nInsira o primeiro número: ");
	scanf("%f", &n1);
	
	printf("\nInsira o segundo número: ");
	scanf("%f", &n2);
	
	if(n1>n2){ //Se n1 for maior que n2...
		printf("\nO maior entre os números inseridos é: %.2f", n1);
		
	}else if(n1<n2){ //Se não, se n1 for menor que n2...
		printf("\nO maior entre os números inseridos é: %.2f", n2);
		
	}else if(n1 == n2){ //Se não, se n1 for igual a n2...
		printf("\nOs números são iguais");
	}
	
	return 0;
}
