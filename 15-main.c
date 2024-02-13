#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int segundo, minuto, hora; //Variaveis
	
	printf("Digite o tempo cronometrado em segundos para descobrir os segundos, os minutos e as horas: \n ");
	
	printf("\nInsira o tempo em segundos: ");
	scanf("%d", &segundo);
	
	hora = segundo/3600; //Operação para descobrir as horas (1h - 3600seg) ------------------------------ EX: 3661 / 3600 = 1h
	
	minuto = (segundo%3600)/60; //Operação para descobrir os minutos (1min - 60seg) ------------------------------ EX: (3661 % 3600 = 61) / 60 = 1min
	
	segundo = (segundo%3600)%60; //Operação para descobrir os segundos ------------------------------ EX: (3661 % 3600 = 61) % 60 = 1seg
	
	printf("\nHoras: %d", hora);
	printf("\nMinutos: %d", minuto);
	printf("\nSegundos: %d", segundo);
	
	
	return 0;
}
