#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float preco, precoinfla; // Variaveis do tipo FLOAT definidos (sem valores)
	
	printf("Digite o preco do produto: "); //Solicitar o preço ao usuario
	scanf("%f", &preco); // Armazenar o preço (do tipo float)
	
	if(preco<=100){ // SE o preco FOR menor ou igual à 100...
		precoinfla = preco * 1.10; // precoinfla (valor com inflação) recebe o valor de preco * 1.10 (10%)
		
	}else{ // Se não (maior que 100) 
		precoinfla = preco  * 1.20; // Resulta em precoinfla recebe o valor de preco * 1.20 (20%)
		
	}
	
	//Mostrar valor original e inflacionado em seguida
	
	printf("\nValor original: R$ %.2f", preco); // %.2f serve para mostar o valor com 2 casas após a virgula
	printf("\nValor inflacionado: R$ %.2f", precoinfla);
		
	return 0;
}
