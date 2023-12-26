#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op = 1; // Variavel op (opera��o) com�a valendo 1
	float n1, n2, res; // Variaveis num1 e num2 (numero1 e numero2) e res (resultado)
	
	// Op��es para o usuario -------------------------------------------------------
	
	printf("Calculadora Basica \n");
	
	printf("\n1 para somar: \n"); 
	printf("2 para subtrair: \n");
	printf("3 para multiplicar: \n");
	printf("4 para dividir: \n");
	printf("0 para sair: \n");
	
	printf("\nDigite a opcao desejada: ");
	    scanf(" %d", &op); //Ser� amrmazenado a op��o que o usuario digitar
	
	if (op==0 || op>4){ // Se a opera��o for igual a 0 ou maior que 4...
	    printf("\nSaindo...");
		
	}else{ //Se n�o...
	
	    printf("\nInsira o primeiro numero: "); // Mensagem pedindo o primeiro numero
	    scanf("%f", &n1); // Salva o valor dado do num1
	
	    printf("\nInsira o segundo numero: ");
        scanf("%f", &n2);	
}
	
	switch(op){ // Se a variavel op for igual a... (Cria condi��es para a variavel op)
	
	case 1: /* OP��O SOMAR*/
	
		res = n1 + n2; //resposta � igual a numero 1 + numero 2
		printf("\nResultado da soma: %.2f", res);
		break;
	
	case 2: /*OP��O SUBTRAIR */
	
		res = n1 - n2; //resposta � igual a numero 1 - numero 2
		printf("\nResultado da subtracao: %.2f.", res);
		break;
		
	case 3: /*OP��O MULTIPLICAR */
	
		res = n1 * n2; //resposta � igual a numero 1 * numero 2
		printf("\nResultado da multiplicacao: %f.\n", res);
		break;
		
	case 4: /*OP��O DIVIDIR */
		
		while(n2 ==0){ //Enquanto n2 for igual a 0...
		
		 printf("\nOperacao invalida\n");
		 printf("\nDigite outro valor para o segundo numero: ");
		 scanf("%f", &n2);
}
        // Caso n�o seja ou se der um valor v�lido...
        
		res = n1 / n2; //resposta � igual a numero 1 / numero 2
		printf("Valor da divisao: %.2f.", res);
		break;
		
	default:
		
		break;
	
	return 0;
} 
}
