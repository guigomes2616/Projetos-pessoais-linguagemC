#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[7], i, x, aux; /* Vetor de 7 posi��es; I sendo a variavel da primeira posi��o; X sendo a da segunda posi��o; Aux como uma auxliar onde ser� guardada os valores trocados*/ 
	
	printf("Digite um valor para as 7 posicoes do vetor, que ao final sera organizado de forma crescente: \n"); /*Mensagem para o usuario */
	
	for(i=0;i<7;i++){ /* For inicia um loop que ir� se repetir 7 vezes para ler os valores do usu�rio e armazen�-los no vetor */
		printf("\n Digite um numero para a posicao [%i]:", i); /* Mensagem pedindo ao usu�rio que insira um n�mero na posi��o atual do loop */
		scanf("%i", &vetor[i]); /* L� o n�mero inteiro digitado pelo usu�rio e o armazena na posi��o i do vetor */
	}
	
	for(i=0;i<7;i++){ /* Aqui o For s�o loops aninhados que comparam elementos do primeiro loop no vetor */
		
		for(x=i+1;x<7;x++){ /* Esse For ser� para o Loop da variavel X */
			
 			if(vetor[i]>vetor[x]){ /* SE o valor do vetor i for maior que o valor do vetor x...*/
				
				aux=vetor[i]; /*Aux, vai receber o valor de I e guarda-lo */
				vetor[i]=vetor[x]; /* Vetor na posi��o i vai receber o valor do vetor x (posi��o 0 vai receber posi��o 1)*/
				vetor[x]=aux; /* Vetor na posi��o x vai receber o valor de Aux, que foi guardada (posi��o 1 vai receber posi��o 0) */
				
				/* Ou seja, os valores ir�o trocar de lugar caso uma seja maior que a outra, isso ira se repetir posi��o por posi��o */
			}
		}
	}
	
	for(i=0;i<7;i++){ /* Esse loop for � usado para imprimir os valores do vetor agora classificados em ordem crescente */
		printf("\n O valor da posicao [%i] agora e [%i]: \n", i,vetor[i]); /* Imprime a posi��o e o valor correspondente no vetor ap�s a ordena��o */
	}
	
	return 0;
}
