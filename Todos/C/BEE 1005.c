/*
  autor: Vinist021;
  data: 23/08/2024;
  nome: Média 1;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double A, B, media;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	
	media = ((3.5 * A) + (7.5 * B)) / 11;
	
	printf("MEDIA = %.5lf\n", media);
	
	return 0;
}