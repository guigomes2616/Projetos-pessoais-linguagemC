#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcKW(float sal_min, float qtd_kw, //Função para calcular as operações em reais R$ - função void por que não tem retorno
            float *val_kw, float *val_reais, float *val_desconto){ //Declara as variaveis como parâmetros, inserindo o * para identificar a referencia dessa vavrial
            	
            (*val_kw) = sal_min / 1000; //*val_kw recebe sal_min divido por 1000 (cada 1 kw equivale a 1 milésimo do salário minimo) -> valor de 1 kw em reais
            
            (*val_reais) = (*val_kw) * qtd_kw; //*val_reais recebe *val_kw mutiplicado por qtd_kw -> valor pago pela residencia
            
            (*val_desconto) = (*val_reais) * 0.85; //*val_desconto recebe *val_reais multiplicado por 15% - valor com desconto
	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float valor_sal, quant_kw; //Variaveis de entrada
	float valor_kw, valor_reais, valor_desc; //variaveis de operação (serão retornadas)
	
	printf("Calcularemos qunatos uma residência irá pagar em reais (R$) na conta de energia, baseado no gasto de KW (Kilowatts): \n ");
	
	printf("\nInsira o salário mínimo: ");
	scanf("%f", &valor_sal);
	
	printf("\nInsira a quantidade de KW gastos: ");
	scanf("%f", &quant_kw);
	
	calcKW(valor_sal, quant_kw, //Invoca a FUNÇÃO
            &valor_kw, &valor_reais, &valor_desc); //Chama as variaveis declaradas no main, buscando seus valores com &, pois terão seus conteudos alterados na função (referncia)
	
	printf("\nValor de 1 KW (em R$): %.2f", valor_kw);
	printf("\nO valor a ser pago pela residência (em R$): %.2f", valor_reais);
	printf("\nO valor com desconto de 15 %% (em R$): %.2f", valor_desc);
	
	return 0;

}
