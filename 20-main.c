#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct pessoa{ //Struct pessoa (Registro)
	int idade; //Campo idade
	float peso; //Campo peso
	float altura; //Campo altura
	char nome[100]; //Campo nome de tamanho 100
};

typedef struct pessoa
              pessoa; //Redefine o nome "struct pessoa" para "pessoa"

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	pessoa lista_pes [3]; //Vetor lista_pes do tipo pessoa de tamanho 3
	int i; //Posições
	
	printf("Registro de pessoas: \n");
	
	for(i=0; i<3; i++){ //posições do vetor vão de 0 até 3
		
		printf("\nInsira o Nome da pessoa [%d]: ", i); //Nome
		scanf("%99[^\n]s", &lista_pes[i].nome); //Armazena 99 caracteres do tipo s(string) inclundo os espaços, buscando o vetor[posição atual].campo
		fflush(stdin); //Reseta o teclado
		
		printf("\nInsira a Idade da pessoa [%d]: ", i); //Idade
		scanf("%d", &lista_pes[i].idade);
		fflush(stdin);
		
		printf("\nInsira o Peso da pessoa [%d]: ", i); //Peso
		scanf("%f", &lista_pes[i].peso);
		fflush(stdin);
		
		printf("\nInsira a Altura da pessoa [%d]: ", i); //Altura
		scanf("%f", &lista_pes[i].altura);
		fflush(stdin);
	}
	
	system("cls"); //Limpa a tela
	
	//Imprime os dados da 1ª pessoa
	
	printf("Nome da primeira pessoa: %s", lista_pes[0].nome); 
	printf("\nIdade da primeira pessoa: %d", lista_pes[0].idade);
	
	printf("\n"); //Pula uma linha
	
	//Imprime os dados da 2ª pessoa
	
	printf("\nAltura da última pessoa: %.2f", lista_pes[2].altura);
	printf("\nPeso da última pessoa: %.2f", lista_pes[2].peso);
	
	
	return 0;
}
