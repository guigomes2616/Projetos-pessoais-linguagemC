#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op; /* Diz qual a inten��o para o usuario */
	float n1, n2, res; /*variaveis de valores reais*/
	
	/*As op��es para o usuario */
	printf("Digite 1 para somar;\n"); 
	printf("Digite 2 para subtrair;\n");
	printf("Digite 3 para multiplicar;\n");
	printf("Digite 4 para dividir;\n");
	scanf("%d", &op); /*Ser� amrazenado a op��o da inten��o do usuario */
	
	printf("Insira o primeiro numero: \n"); /* Mensagem para o usuario*/
	scanf("%f", &n1); /* Salva a infoma��o dada pelo usuario das OP */
	
	printf("Insira o segundo numero: \n");
	scanf("%f", &n2);
	
	switch(op){ /* Cria condi��es para as situa��es*/
	case 1: /* Significa  sobre a OP��O SOMAR*/
		res = n1 + n2;
		printf("Soma: %f.\n", res);
		break;
	
	case 2:
		res = n1 - n2;
		printf("Subtracao: %f.\n", res);
		break;
		
	case 3:
		res = n1 * n2;
		printf("Multiplicacao: %f.\n", res);
		break;
		
	case 4:
		
		if(n2 !=0){ /* serve no caso de "SE" n2 for "diferente" de 0*...*/
			res = n1 / n2;
		printf("Divisao: %f.\n", res); /* ... Vai aparecer o res certo*/
	} else { /* SE n�o for...*/
	
		printf("Divisao por zero.\n");
	}
}

	return 0;
} 
