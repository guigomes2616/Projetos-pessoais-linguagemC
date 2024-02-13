#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Configuração à lingua portuguesa
	
	int i = 0; //Variavel i (posições) começa valendo 0
	int soma = 0; //variavel soma começa valendo 0
		
	printf("Uma sequência de números de 1 a 10 serão somadas: \n");
	
	/*for(i=1; i<=10; i++){
		
		soma = soma+i;
	}*/
	
	while(i<=10){ //Enquanto i for menor ou igual a 10
		soma = soma+i; //O resultado de cada soma de cada loop, será somado com o proximo loop
		i++; //Acrescenta 1 unidade a mais
	}
	
	printf("\nO valor da soma é: %d", soma);
	
	return 0;
}
