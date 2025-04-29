/*
  autor: Vinist021;
  data: 08/09/2024;
  nome: Validação de Nota;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float N1, N2, media;
	
	scanf("%f", &N1);
	
	while(N1 < 0 || N1 > 10){
		printf("nota invalida\n");
		scanf(" %f", &N1);
	}
	
	scanf("%f", &N2);
	
	while(N2 < 0 || N2 > 10){
		printf("nota invalida\n");
		scanf(" %f", &N2);
	}
	
	media = (N1 + N2) / 2.0; 
	
	printf("media = %.2f\n", media);
	
	return 0;
}