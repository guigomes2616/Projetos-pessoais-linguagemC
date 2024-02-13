#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[3][3]; //Matriz de 3 linhas e 3 colunas
	int lin, col; //Variaveis de linha e coluna
	int chave; //Varivael de busca
	int achou = 0; //Fleg começa valendo 0 (negativo)
	
	printf("Preencha  matriz e depois procure um número digitado: \n");
	
	for(lin=0; lin<3; lin++){ //Loop para percorrer as linhas da matriz
		for(col=0; col<3; col++){ //loop para percorrer as colunas da matriz
			
			printf("\nDigite um número para a linha [%d], coluna [%d]: ", lin, col);
			scanf("%d", &matriz[lin][col]);
		}
	}
	
	printf("\nInsira um valor que queira procurar na matriz: ");
	scanf("%d", &chave);
	
	for(lin=0; lin<3; lin++){ //Loop para percorrer as linhas da matriz
		for(col=0; col<3; col++){ //loop para percorrer as colunas da matriz
			
			if(matriz[lin][col] == chave){ //Se a linha e a coluna atual for igual ao valor da chave
			
				achou = 1; //fleg achou recebe 1 (positivo)
				break; //Interrompe o laço de procurar a chave nas colunas
			}	
		}
        	if(achou == 1){ //Se achou for igual a 1...
        	break; //Interrompe a procura da chave nas linhas
        }
   }
	
	if(achou == 1){ //Se achou for igual a 1...
			printf("\nO elemento %d foi encontrado na linha [%d], coluna [%d]: ", chave, lin, col);
			
		}else{ //Se não...
			printf("\nChave não encontrada!");
		}
		
	return 0;
}
