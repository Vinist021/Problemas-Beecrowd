/*
  autor: Vinist021;
  data: 23/08/2024;
  nome: Média 2;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double A, B, C, media;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	media = ((2.0 * A) + (3.0 * B) + (5.0 * C)) / 10;
	
	printf("MEDIA = %.1lf\n", media);
	
	return 0;
}