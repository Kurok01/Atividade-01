#include <stdio.h>

int main () {
	
	int total_eleitor, voto_branco, voto_nulo, voto_valido;
	float percentual_branco, percentual_nulo, percentual_valido;
	
	printf ("Qual o total de eleitores do municipio? ");
	scanf ("%d", &total_eleitor);
	
	printf ("Qual foi o numero de votos em branco? ");
	scanf ("%d", &voto_branco);
	
	printf ("Qual foi numero de votos nulos? ");
	scanf ("%d", &voto_nulo);
	
	printf ("Qual foi o numero de votos validos? ");
	scanf ("%d", &voto_valido);
	
	percentual_branco = ((float)voto_branco / (float)total_eleitor) * 100;
	percentual_nulo = ((float)voto_nulo / (float)total_eleitor) * 100;
	percentual_valido = ((float)voto_valido / (float)total_eleitor) * 100;
	
	printf ("O percentual de votos em branco foi de: %.2f por cento", percentual_branco);
	printf ("\nO percentual de votos nulos foi de: %.2f por cento", percentual_nulo);
	printf ("\nO percentual de votos validos foi de %.2f por cento", percentual_valido);
	
	return 0;
}
