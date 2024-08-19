#include <stdio.h>

int main (){
	
	int anos, meses, dias, total_dias;
	
	printf ("Vamos descobrir quantos dias de vida voce tem no total!\n");
	printf ("\nPara isso e necessario que voce digite quantos anos, meses e dias voce tem...\n");
	printf ("\nConsiderando quanto tempo falta para o seu aniversario...\n");
	printf ("\nPor exemplo '18 anos, 11 meses e 29 dias'\n");
	
	printf ("\nVamos la, quantos anos voce tem? ");
	scanf ("%d", &anos);
	
	printf ("Quantos meses voce tem? ");
	scanf ("%d", &meses);
	
	printf ("Por fim, quantos dias voce tem? ");
	scanf ("%d", &dias);
	
	total_dias = (anos * 365) + (meses * 30) + dias;
	
	printf ("Muito bem! Voce tem %d dias de idade no total.", total_dias);
	
	return 0;
}
