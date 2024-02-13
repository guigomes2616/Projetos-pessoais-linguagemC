#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Configuração à lingua portuguesa
	
	float notaT, notaA, notaE; //Declara as variaveis das notas
	float media; //Declara variavel para a média das notas
	
	printf("Insira as notas para saber a média da nota e o conceito atribuida a ela: \n");
	
	printf("\nInsira a nota do Trabalho: "); //Nota do Trabalho
	scanf("%f", &notaT);
	
	printf("\nInsira a nota da Avaliação: "); //Nota da Avalição
	scanf("%f", &notaA);
	
	printf("\nInsira a nota do Exame: "); //Nota do Exame
	scanf("%f", &notaE);
	
	media = (notaT*2 + notaA*3 + notaE*5)/10; //o trabalho tem peso 2 (notaT*2) avaliação tem peso 3 (notaA*3) exame tem peso 5 (notaE*5) e dividido pela soma dos pesos (2+3+5=10)
	
	printf("\nA média da nota é: %.2f", media);
	
	if(media>=0 && media<5.0){ //Se media for maior ou igual a 0 e menor que 5
		printf("\nConceito: E");
		
	}else if(media>=5.0 && media<6.0){ //Caso contrario, se media for maior ou igual a 5 e menor que 6
		printf("\nConceito: D");
		
	}else if(media>=6.0 && media<7.0){ //Caso contrario, se media for maior ou igual a 6 e menor que 7
		printf("\nConceito: C");
		
	}else if(media>=7.0 && media<8.0){ //Caso contrario, se media for maior ou igualk a 7 e menor que 8
		printf("\nConceito: B");
		
	}else if(media>=8.0 && media <=10){ //Caso contrario, se media for maior ou igual a 8 e menor ou igual 10
	    printf("\nConceito: A");
	    
}

    if(media>10){//Se média for maior que 10
    	printf("\nValores incorretos ou inválidos");
}
	
	return 0;
}
