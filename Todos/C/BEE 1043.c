/*
  autor: Vinist021;
  data: 08/11/2024;
  nome: Triângulo;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float A, B, C;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if(A + B > C && B + C > A && A + C > B &&
	   A > 0 && B > 0 && C > 0)
	{
		printf("Perimetro = %.1f\n", A + B + C);
	}
	else
	{
		printf("Area = %.1f\n", (((A + B) * C) / 2.0));
	}
    
	return 0;
}