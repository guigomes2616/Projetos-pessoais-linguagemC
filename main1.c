#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Oi, tudo bem? Me chamo guilherme\n"); /* Para qualquer texto */
	printf("Valor inteiro: %d.\n", 10); /* Para numeros inteiros */
	printf ("Valor real: %f. \n", 3.14159265); /* Para numeros com casas decimais, aqui ele vai imprimir o maximo de numeros possivel */
	printf("Valor real com apenas duas casas: %.2f. \n", 3.14159265); /* Para numeros decimais, mas vai imprimir somente 2 casas apos a virgula (ponto) */
	printf("Dado de texto: %c. \n", 'a'); /* Para texto de somente um caracter*/
	printf("Dado de texto: %s. \n", "testanto"); /* Para textos */
	
	return 0;
}
