#include <stdio.h>

int main() {
	
	float celsius, fahrenheit;
	
	printf ("Digite um temperatura em graus Fahrenheit: ");
	scanf ("%f", &fahrenheit);
	
	celsius = 5 * (fahrenheit - 32) / 9;
	
	printf ("Isso eh o mesmo que %.2f graus celsius.", celsius);
	
	return 0;
	}
