#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor [10]; // Declara um vetor de 10 posições
	int i; // Variável que declara as posições do vetor
	
	printf("Digite os números para às 10 posições do vetor que serão dobradas no final\n");
	
	// Loop FOR para ler os numeros e calcular o dobro
	
	for(i=0; i<10; i++){ // A sequência vai se repetir enquanto i (posições) for de 0 até a 10 (posição do vetor)
	
		printf("\nDigite um número para a posição [%d]: ", i); //(%d, i) indica a posição atual do vetor, pois busca a variavel i
		scanf("%d", &vetor[i]); // Vai armazenar dentro do vetor[a variavel dentro da posição]
		
		vetor[i] = vetor[i] * 2; // A variavel dentro da posição do vetor será multiplicada por 2 (dobro)
	}
	
	//Imprime o valor com os valores dobrados
	
	printf("\nValores dobrados no vetor: \n");
	
	for (i=0; i<10; i++){ // Vai usar as mesmas condições para imprimir os resultados
		printf("Posição [%d]: %d \n", i, vetor[i]); // (posição [%d}, i) busca o valor da posição, indicada pela variavel i / e (%d, vetor[i]) busca o novo valor (dobrado), dentro da posição do vetor
	}

	return 0;
}
	

