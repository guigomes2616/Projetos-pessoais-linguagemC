#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcSalReceber(float num_hr, float sal_minimo){ //Função para calcular o salario a receber (parametros -> numero de horas e salario minimo
	
	float hr_trab, sal_bruto, imp, sal_receb; //Variaveis locais
	
	hr_trab = sal_minimo / 2.0; //hr_trab recebe sal_minimo dividido por 2.0 (metade)
	
	sal_bruto = hr_trab * num_hr; //sal_bruto recebe hr_trab multiplicado por num_hr
	
	imp = sal_bruto * (3.0 / 100); //imp recebe sal_bruto multiplicado por 3% (3/100)
	
	sal_receb = sal_bruto - imp; //sal_receb recebe sal_bruto menos imp
	
	return sal_receb; //Retorna sal_receb
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float hrtrab, salmin, salreceber; //Variaveis de inserção
	
	printf("Calcularemos o quanto você irá receber com base nas horas trabalhadas e no salário mínimo vigente: \n");
	
	printf("\nInsira o número de horas trabalhadas: ");
	scanf("%f", &hrtrab);
	
	printf("\nInsira o valor do saláio mínimo: ");
	scanf("%f", &salmin);
	
	salreceber = calcSalReceber(hrtrab, salmin); /*salreceber recebe a FUNÇÃO, dando como parâmetro as Variaveis que vão substituir as Variavies da FUNÇÃO
	                                               hrtrab -> num_hr && salmin ->sal_minimo */
	                                               
	printf("\nSalário a receber: %.2f", salreceber);
	
	return 0;
}
