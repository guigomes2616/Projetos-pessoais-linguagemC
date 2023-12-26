#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main (){
	setlocale(LC_ALL,"Portuguese");

	int tamanho=11; //Declara a variavel TAMANHO recebendo 11
	int p; // Posições do vetor
	int vetor[tamanho]; //Declara um vetor com o números de posições de acordo com a variavel TAMANHO
	
	for(p=0; p<tamanho; p++){ //Loop enquanto p(posições) for de 0 até o tamanho da variavel TAMANHO, sendo incrementado 1 unidade a mais 
	
		vetor[p] = p; // Indica que a posição atual do vetor, recebe o valor de p 
//posição 0 = 0; posição 1 = 1; posição 2 = 2; posição 3 = 3

	    vetor[p] = vetor[p]*2; // Indica que o novo valor da posição do vetor (vetor[p]) vai receber o seu valor multiplicado por 2 
//posição 0 = 0*2 = 0; posição 1 = 1*2 = 2; posição 2 = 2*2 = 4; posição 3 = 3*2 = 6
	}

	printf("Valores dobrados do vetor:\n");

	for(p=0; p<tamanho; p++){ //Loop para imprimir os resultados
	
		printf("\nValor dobrado da posição [%d] é: %d", p, vetor[p]); //Indica as posições e o seu valor dobrado
	}

	
}
