#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[7], p1, p2, aux; // Declara um vetor de 7 posições - p1 declara as posições; p2 as posições seguinte; aux vai guardar os valores trocados (auxiliar) 
	
	printf("Digite os valores para as 7 posições do vetor, que ao final serão organizados de forma crescente \n"); // Mensagem para o usuario
	
	for(p1=0; p1<7; p1++){ // loop se repitira enquanto p1(posições) for de 0 até 7 - Sendp Incrementado 1 unidade a mais (para pular para a posição seguinte)
	
		printf("\nDigite um número para a posição [%d]: ", p1); // Pede ao usuário inserir um número na posição atual do loop
		scanf("%d", &vetor[p1]); // Armazena os valores digitados nas posições dentro do vetor
	}
	
	for(p1=0; p1<7; p1++){ //Os valores de p1 serão comparados, para organiza-los enquanto o loop atender a mesma condição
		
		for(p2=p1+1; p2<7; p2++){ // p2 vai receber o valor de p1+1, pois o valor vai ser comparado com os valores à frente dele - p2(posições) vai até 7 - e será incrementado 1 unidade a mais
			
 			if(vetor[p1]>vetor[p2]){ //SE o valor de p1 for maior que o valor de p2...
				
				aux=vetor[p1]; // Aux, vai receber o valor de p1 e guarda-lo 
				vetor[p1]=vetor[p2]; // Posição p1 vai receber o valor de p2 (posição 0 vai receber posição 1)
				vetor[p2]=aux; // Posição p2 vai receber o valor de Aux, que foi guardada
				
	// Ou seja, os valores irão trocar de lugar caso uma seja maior que a outra, isso ira se repetir posição por posição 
	
			}
		}
	}
	
	for(p1=0; p1<7; p1++){ // loop usado para imprimir os valores do vetor agora classificados em ordem crescente
	
		printf("\nO valor da posição [%d] agora é: %d", p1, vetor[p1]); //Imprime a posição e o valor correspondente no vetor após a ordenação
	}
	
	return 0;
}
