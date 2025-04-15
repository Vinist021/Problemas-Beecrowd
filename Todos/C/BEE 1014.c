/*
  autor: Vinist021;
  data: 27/08/2024;
  nome: Consumo;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int X;
	float Y, media;
	
	scanf("%d %f", &X, &Y);
	
	media = X / Y;
	
	printf("%.3f km/l\n", media);
	
	return 0;
}