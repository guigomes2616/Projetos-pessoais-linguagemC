#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor [10]; /* Declarando o vetor de 10 posi��es*/
	int i; /* Vari�vel i */
	
	printf("Digite um numero para as 10 posicoes do vetor que serao dobradas no final \n");
	
	/*Loop para ler os numeros e calcular o dobro */
	for (i = 0; i <10; i++){ /* A sequ�ncia vai acontecer at� i ir de 0 at� a 10 posi��o do vetor*/
		printf("Digite um numero:\n");
		scanf("%d", &vetor[i]); /* Vai armazenar a posi��o do vetor[e a variavel dentro dela] */
		vetor[i] = vetor[i] * 2; /* a variavel dentro do vetor ir� ser multiplicada por 2 == vetor[variavel]*2    */ 
	}
	
	/* Imprime o valor com os valores dobrados */
	printf("Valores dobrados no vetor:\n");
	for (i=0; i < 10; i++){ /* Vai calcular somente os valores dentro da condi��o */
		printf("%d \n", vetor[i]); /* Armazena a mesma posi��o do vetor mas com a nova variavel multipilcada */
	}

	return 0;
}
	

