#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//-------------Funções para cacular------------------------------------------------------

float calcLucro_Distri(float p_fabr, float porc_dist){ //Funçao do valor do Lucro do Distribuidor (parâmetros -> preço de fabrica e porcentagem do distribuidor
	
	return p_fabr * porc_dist / 100; //Retona o valor de p_fabr multiplicado por (porc_dist dividido por 100)
}

float calcImposto (float p_fabr, float porc_imposto){ //Função do valor do Imposto (parâmetros -> preço de fabrica e porcentagem do imposto
	
	return p_fabr * porc_imposto / 100; //Retona o valor de p_fabr multiplicado por (porc_imposto dividido por 100)
}

float calcValor_Final(float p_fabr, float valor_distri, float valor_imp){ //Função do Valor Final (parâmetros -> preço de fabrica, valor do lucro do distribuidor e valor do imposto (retomado das funções acima)  
	
	return p_fabr + valor_distri + valor_imp; //Retona os valores somados	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float preco_fabr, porc_distri, porc_imp; //Variaveis que serão inseridas o valores pelo usúario
	float lucro_distri, vlr_imp, vlr_total; //Variaveis para receber as funções
	
	printf("Verificaremos o Custo de um carro tendo noção das porcentagens do distribuidor e impostos \n");
	
	printf("\nInsira o preço de fábrica do carro: ");
	scanf("%f", &preco_fabr);
	
	printf("\nInsira a porcentagem de lucro do distribuidor: ");
	scanf("%f", &porc_distri);
	
	printf("\nInsira a porcentagem de impostos: ");
	scanf("%f", &porc_imp);
	
	//---------------------------------------------------------------------------------------------------
	
	lucro_distri = calcLucro_Distri(preco_fabr, porc_distri); /*lucro_distri vai receber a FUNÇÃO, dando como parâmetro as Variaveis que vão substituir as Variavies da FUNÇÃO
	                                                            preco_fabr -> p_fabr && porc_distri -> porc_dist */
	
	vlr_imp = calcImposto(preco_fabr, porc_imp); /*vlr_imp vai receber a FUNÇÃO, dando como parâmetro as Variaveis que vão substituir as Variavies da FUNÇÃO
	                                                preco_fabr -> p_fabr && porc_imp -> porc_imposto */
	
	vlr_total = calcValor_Final(preco_fabr, lucro_distri, vlr_imp); /*vlr_total vai receber a FUNÇÃO, dando como parâmetro as Variaveis que vão substituir as Variavies da FUNÇÃO
	                                                                  preco_fabr -> p_fabr && lucro_distri -> valor_distri && vlr_imp -> valor_imp */
	
	//----------------------------------------------------------------------------------------------------
	
	printf("\nLucro do Distribuidor: %.2f", lucro_distri);
	printf("\nValor do Imposto: %.2f", vlr_imp);
	printf("\nValor Final do veículo: %.2f", vlr_total);
	
	return 0;
}
