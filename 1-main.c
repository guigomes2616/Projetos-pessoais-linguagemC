#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Configuração a lingua portuguesa
	
	printf("Calculadora Básica \n");
	
	int op = 1; //Variavel op (referente as opções de operações)
	float n1, n2, res; //Varivaeis
	
	printf("\nDigite 1 para somar: \n");
	printf("\nDigite 2 para subtrair: \n");
	printf("\nDigite 3 para multiplicar: \n");
	printf("\nDigite 4 para dividir: \n");
	printf("\nDigite 0 para Sair: \n");
	
	printf("\nInsire a opção desejada: ");
	scanf("%d", &op); //Armazena a opção inserido
	
	while(op==0){ //Enquanto op for igual a 0...
		
		printf("\nCalculadora encerrada");
		return exit;
}

    while(op>4){ //Enquanto op for maior que 4
    	printf("\nOperação inválida, tente novamente:");
    	scanf("%d", &op); //Tenta armazenar o valor correto das opções
    	
    	if(op == 0){ //Se após as opções inválidas, o usuario digitar 0 (sair)...
    		printf("\nCalculadora encerrada");
    		return exit;
		}
	}
		
		system("cls"); //Se o úsuario inserir corretamente, a tela é limpa
		
		printf("Digite o primeiro número: ");
		scanf("%f", &n1);
		
		printf("\nDigite o segundo número: ");
		scanf("%f", &n2);	
		
		switch(op){ //Se op for igual a uma das case (situações)...
			
			case 1: //SOMA
				res = n1 + n2;
				printf("\nO valor da soma é: %.2f", res);
				break;
				
			case 2: //SUBTRAÇÃO
				res = n1 - n2;
				printf("\nO valor da subtração é: %.2f", res);
				break;
				
			case 3: //MULTIPLICAÇÃO
				res = n1 * n2;
				printf("\nO valor da multiplicação é: %.2f", res);
				break;
				
			case 4: //DIVISÃO
				
				while(n2==0){ //Enquanto n2 for igual a 0...
				
				printf("\nImpossível divisão por zero! Digite outro valor para o segundo número: ");
				scanf("%f", &n2); //Tenta armazenar o valor correto de n2
				}
				
				res = n1 / n2; //Se o úsuario inserir corretamente, a conta é feita normalmente
				printf("\nO valor da divisão é: %.2f", res);
				break;
		}
	
	return 0;
}
