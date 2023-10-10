#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco, precoinfla; /*Valores que serão aceitos*/
	
	printf("Digite o preço do produto. \n"); /*Solicitar o preço ao usuario */
	scanf("%f", &preco); /*Armazenar o preço */
	
	if(preco<100){ /* Condição, SE o preço por menor que 100... */
		precoinfla = preco * 1.10; /* ... Resulta em preço com inflação de 10% */
		
	}else{ /* Se não... */ 
		precoinfla = preco  * 1.20; /* ... Resulta em preço com inflação de 20% */
	}
	
	/*Mostrar valor original e inflacionado em seguida */
	printf("Valor original: R$ %.2f .\n", preco); 
	printf("Valor inflacionado: R$ %.2f. \n", precoinfla);
		
	return 0;
}
