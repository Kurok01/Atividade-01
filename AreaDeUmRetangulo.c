#include <stdio.h>

int main (){
	
	float base, altura;
	
	printf ("Vamos calcular a area de um retangulo!");
	
	printf ("\nDigite o valor da base: ");
	scanf ("%f", &base);
	
	printf ("Digite o valor da altura: ");
	scanf ("%f", &altura); 
	
	printf ("A area desse retangulo eh: %.2f", base * altura);
	
	return 0;
}
