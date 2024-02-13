#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int ant1, ant2, atual; //Variaveis
	int i;
	
	ant2 = 0; //Ant2(duas casas antes ao atual) começa valendo 0
	ant1 = 1; //Ant1(uma casa antes ao atual) começa valendo 1
	
	printf("Sequencia de Fibonacci (8 primeiros termos): \n");
	
	printf("\n%d ", ant2); //Imprime o 0
	printf("%d ", ant1); //Imprime o 1
	
	atual = ant1 + ant2; //Calcula o 3º termo (0 + 1) = 1
	
	printf("%d", atual); //Imprime o 3º termo (1)
	
	for(i>=3; i<=8; i++){
		
		ant2 = ant1; //ant2(0) recebe ant1(1) = 1 ----- 2 ----- 3 ----- 5 ----- 8 ----- 13 ----- 21 ----- 34
		ant1 = atual;//ant1(1) recebe atual(2) = 2 ----- 3 ----- 5 ----- 8 ----- 13 ----- 21 ----- 34 ----- 55
		atual = ant1 + ant2; //atual(2) recebe (2 + 1) = 3 ----- 5 ----- 8 ----- 13 ----- 21 ----- 34 ----- 55 ----- 89
		
		//A cada loop o ant2 recebe ant1 -> ant1 recebe atual -> atual recebe a soma dos novos valores de ant1 e ant2, assim criando a sequencia
				
		printf("% d", atual); //Imprime a cada loop o valor de atual
	}
	
	return 0;
}
