#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op; /* Diz qual a inten��o para o usuario */
	float n1, n2, res; /*variaveis de valores reais*/
	
	op=1;
	while(op!=0){ /* Enquanto opera��o for diferente de 0... */
	
	/*As op��es para o usuario */
	printf("Calculadora. \n");
	
	printf("Digite 1 para somar;\n"); 
	printf("Digite 2 para subtrair.\n");
	printf("Digite 3 para multiplicar.\n");
	printf("Digite 4 para dividir.\n");
	printf("Digite 0 para sair.\n");
	scanf("%d", &op); /*Ser� amrazenado a op��o da inten��o do usuario */
	
	if (op==0){ /*Se a opera��o for igual a 0*/
		
	}else{ /* Se n�o...*/
	
	printf("Insira o primeiro numero: \n"); /* Mensagem para o usuario*/
	scanf("%f", &n1); /* Salva a infoma��o dada pelo usuario das OP */
	
	printf("Insira o segundo numero: \n");
	scanf("%f", &n2);
}
	
	switch(op){ /* Cria condi��es para as situa��es*/
	
	case 1: /* Situa��o sobre a OP��O SOMAR*/
		res = n1 + n2;
		printf("Soma: %f.\n", res);
		break;
	
	case 2: /*Situa��o sobre a op��o SUBTRAIR */
		res = n1 - n2;
		printf("Subtracao: %f.\n", res);
		break;
		
	case 3: /*Situa��o sobre a op��o MULTIPLICAR */
		res = n1 * n2;
		printf("Multiplicacao: %f.\n", res);
		break;
		
	case 4: /*Situa��o sobre a op��o DIVIDIR */
		
		while(n2 ==0){
		 printf("Operacao invalida\n");
		 printf("Digite outro numero\n");
		 scanf("%f", &n2);
}
		res = n1 / n2;
		printf("Divisao: %.2f.\n", res); /* ... Vai aparecer o res certo*/
		break;
		
	case 0:
		printf("Aperte Enter pra a Sain...");
		exit(0);
		break;
	
	return 0;
} 
}
}
