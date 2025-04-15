/*
  autor: Vinist021;
  data: 27/08/2024;
  nome: Área;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double A, B, C;
	double Atr, Acirc, Atrap, Aquad, Aret;
	double Pi = 3.14159;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	Atr = ((A * C) / 2);
	
	Acirc = Pi * C * C;
	
	Atrap = (((A + B) * C) / 2);	
	
	Aquad = B * B;
	
	Aret = A * B;
	
	printf("TRIANGULO: %.3lf\n", Atr);
	printf("CIRCULO: %.3lf\n", Acirc);
	printf("TRAPEZIO: %.3lf\n", Atrap);
	printf("QUADRADO: %.3lf\n", Aquad);
	printf("RETANGULO: %.3lf\n", Aret);
	
	return 0;
}