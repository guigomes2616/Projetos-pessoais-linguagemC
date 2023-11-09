#include<stdio.h>
#include<stdlib.h>

void main (){

	int tamanho =100;
	int i;
	int vetor[tamanho];

	//printf("Digite um numero para as [%d] posicoes do vetor que serao dobradas no final \n");

	for(i = 0; i<tamanho; i++){
		vetor[i] = i; 
	        vetor[i] = vetor[i] * 2;
	}

	printf("Valores dobrados no vetor:\n");

	for(i=0; i<tamanho; i++){
		printf("Valor de numeros [%d] = %d \n",i, vetor[i]);
	}

	
}
