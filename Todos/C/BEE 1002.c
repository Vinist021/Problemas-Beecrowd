/*
  autor: Vinist021;
  data: 21/08/2024;
  nome: Área do Círculo;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double pi = 3.14159;
	double raio, area;
	
	scanf("%lf", &raio);
	
	area = pi * raio * raio;
	
	printf("A=%.4lf\n", area);
	
	return 0;
}