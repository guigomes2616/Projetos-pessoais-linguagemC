#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op; /* Diz qual a intenção para o usuario */
	float n1, n2, res; /*variaveis de valores reais*/
	
	op=1;
	while(op!=0){ /* Enquanto operação for diferente de 0... */
	
	/*As opções para o usuario */
	printf("Calculadora. \n");
	
	printf("Digite 1 para somar;\n"); 
	printf("Digite 2 para subtrair.\n");
	printf("Digite 3 para multiplicar.\n");
	printf("Digite 4 para dividir.\n");
	printf("Digite 0 para sair.\n");
	scanf("%d", &op); /*Será amrazenado a opção da intenção do usuario */
	
	if (op==0){ /*Se a operação for igual a 0*/
		
	}else{ /* Se não...*/
	
	printf("Insira o primeiro numero: \n"); /* Mensagem para o usuario*/
	scanf("%f", &n1); /* Salva a infomação dada pelo usuario das OP */
	
	printf("Insira o segundo numero: \n");
	scanf("%f", &n2);
}
	
	switch(op){ /* Cria condições para as situações*/
	
	case 1: /* Situação sobre a OPÇÃO SOMAR*/
		res = n1 + n2;
		printf("Soma: %f.\n", res);
		break;
	
	case 2: /*Situação sobre a opção SUBTRAIR */
		res = n1 - n2;
		printf("Subtracao: %f.\n", res);
		break;
		
	case 3: /*Situação sobre a opção MULTIPLICAR */
		res = n1 * n2;
		printf("Multiplicacao: %f.\n", res);
		break;
		
	case 4: /*Situação sobre a opção DIVIDIR */
		
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
