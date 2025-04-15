/*
  autor: Vinist021;
  data: 26/08/2024;
  nome: Esfera;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double pi = 3.14159;
	double r, volume;
	
	scanf("%lf", &r);
	
	volume = (4/3.0) * (pi * r * r * r);
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}