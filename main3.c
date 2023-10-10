#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco, precoinfla; /*Valores que ser�o aceitos*/
	
	printf("Digite o pre�o do produto. \n"); /*Solicitar o pre�o ao usuario */
	scanf("%f", &preco); /*Armazenar o pre�o */
	
	if(preco<100){ /* Condi��o, SE o pre�o por menor que 100... */
		precoinfla = preco * 1.10; /* ... Resulta em pre�o com infla��o de 10% */
		
	}else{ /* Se n�o... */ 
		precoinfla = preco  * 1.20; /* ... Resulta em pre�o com infla��o de 20% */
	}
	
	/*Mostrar valor original e inflacionado em seguida */
	printf("Valor original: R$ %.2f .\n", preco); 
	printf("Valor inflacionado: R$ %.2f. \n", precoinfla);
		
	return 0;
}
