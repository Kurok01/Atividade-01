#include <stdio.h>

int main (){
	
	float salario, percentual, reajuste;
	int direcao;
	
	printf ("Qual e o seu salario atual? ");
	scanf ("%f", &salario);
	
	printf ("Qual a porcentagem do novo reajuste? (Digite sem o simbolo de porcentagem) ");
	scanf ("%f", &percentual);
	
	printf ("Foi um Reajuste de Acrescimo ou Decrescimo? ");
	printf ("Digite 1 para Acrescimo e 0 para Decrescimo: ");
	scanf ("%d", &direcao);
	
	if (direcao == 1){	
	
	reajuste = salario * (percentual / 100 + 1);
	
	printf ("Seu novo salario e de: %.2f", reajuste);
	
	} else {
		
		reajuste = salario - (salario * (percentual / 100));
		
		printf ("Seu novo salario e de: %.2f", reajuste);
	}
	
	return 0;
}
