#include <stdio.h>

int main (){
	
	float salario_final, salario_fixo, comissao_fixa, total_vendas, numero_carros;
	
	printf ("Quantos carros o funcionario vendeu? ");
	scanf ("%f", &numero_carros);
	
	printf ("Qual o valor total das vendas feita pelo funcionario? ");
	scanf ("%f", &total_vendas);
	
	printf ("Qual o salario fixo do funcionario? ");
	scanf ("%f", &salario_fixo);
	
	printf ("Qual o valor fixo que o funcionario recebe por carro vendido? ");
	scanf ("%f", &comissao_fixa);
	
	salario_final = salario_fixo + (comissao_fixa * numero_carros) + (total_vendas * 0.05);
	
	printf ("O salario final do funcionario eh de: %.2f", salario_final);
	
	return 0;
}
