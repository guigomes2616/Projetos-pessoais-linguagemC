#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[7], i, x, aux; /* Vetor de 7 posições; I sendo a variavel da primeira posição; X sendo a da segunda posição; Aux como uma auxliar onde será guardada os valores trocados*/ 
	
	printf("Digite um valor para as 7 posicoes do vetor, que ao final sera organizado de forma crescente: \n"); /*Mensagem para o usuario */
	
	for(i=0;i<7;i++){ /* For inicia um loop que irá se repetir 7 vezes para ler os valores do usuário e armazená-los no vetor */
		printf("\n Digite um numero para a posicao [%i]:", i); /* Mensagem pedindo ao usuário que insira um número na posição atual do loop */
		scanf("%i", &vetor[i]); /* Lê o número inteiro digitado pelo usuário e o armazena na posição i do vetor */
	}
	
	for(i=0;i<7;i++){ /* Aqui o For são loops aninhados que comparam elementos do primeiro loop no vetor */
		
		for(x=i+1;x<7;x++){ /* Esse For será para o Loop da variavel X */
			
 			if(vetor[i]>vetor[x]){ /* SE o valor do vetor i for maior que o valor do vetor x...*/
				
				aux=vetor[i]; /*Aux, vai receber o valor de I e guarda-lo */
				vetor[i]=vetor[x]; /* Vetor na posição i vai receber o valor do vetor x (posição 0 vai receber posição 1)*/
				vetor[x]=aux; /* Vetor na posição x vai receber o valor de Aux, que foi guardada (posição 1 vai receber posição 0) */
				
				/* Ou seja, os valores irão trocar de lugar caso uma seja maior que a outra, isso ira se repetir posição por posição */
			}
		}
	}
	
	for(i=0;i<7;i++){ /* Esse loop for é usado para imprimir os valores do vetor agora classificados em ordem crescente */
		printf("\n O valor da posicao [%i] agora e [%i]: \n", i,vetor[i]); /* Imprime a posição e o valor correspondente no vetor após a ordenação */
	}
	
	return 0;
}
