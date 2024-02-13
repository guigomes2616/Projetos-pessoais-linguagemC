#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[9]; //Vetor com 9 posições
	int i, j; //i (posições) j (Divisor)
	int cont; //Contador
	
	printf("Mostraremos se os números inseridos são primos: \n");
	
	for(i=0; i<9; i++){ //Loop para mensagem
		printf("\nInsira um número inteiro para a posição [%d]: ", i); //Indica a posição atual do vetor
		scanf("%d", &vetor[i]); //Armazena o valor digitado na posição atual
	}
	
	for(i=0; i<9; i++){ //Posição de i irá de 0 até 9
		cont = 0; //Contador será reiniciado ao fim de cada loop (posição)
		
		for(j=1; j<=vetor[i]; j++){ //J (divisor) irá de 1 até o valor digitado em vetor[i] e sendo incrementado em cada loop -------------- EX: 6/1, 6/2, 6/3, 6/4, 6/5 e 6/6
		 
			if(vetor[i]%j == 0){ //Se o resto da divisão entre [valor atual do vetor] e [j] for igual a 0 
				cont++; //Será aplicado 1 unidadeao cont
			}
		}
		
		if(cont == 2){ //Se cont for igual a 2 ao fim do loop...
		
			printf("\nO número %d na posição [%d] é primo!", vetor[i], i);
			
		}
		
	}
	
	return 0;
}
