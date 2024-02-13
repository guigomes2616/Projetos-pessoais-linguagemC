#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int hr, min, seg;
	
	printf("Insira o tempo em segundos para que seja tranformado em horas, minutos e segundos \n");
	
	printf("\nDigite o tempo em segundos: ");
	scanf("%d", &seg);
	
	hr = seg/3600; //Calcula a hora (1h = 3600 seg) ------------------------------------------------------EX: (3661 / 3600 = 1h)
	min = (seg%3600)/60; //Calcula os minutos (1min = 60 seg) --------------------------------------------EX:(3661 % 3600 = 61) -> (61/60 = 1 min)
	seg = seg%60; //Calcula os segundos ------------------------------------------------------------------EX:(3661 % 60 = 1 seg)
	
	printf("\nHoras: %d ", hr);
	printf("\nMinutos: %d ", min);
	printf("\nSegundos: %d ", seg);
	
	return 0;
}
