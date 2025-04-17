/*
  autor: Vinist021;
  data: 04/11/2024;
  nome: Fórmula de Bhaskara;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	double A, B, C, R1, R2, sqrtDelta, Delta;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A == 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	Delta = B * B - (4 * A * C);
	
	if(Delta >= 0){
		sqrtDelta = sqrt(Delta);
		R1 = (((-1) * B) + sqrtDelta) / (2 * A);
		R2 = (((-1) * B) - sqrtDelta) / (2 * A);
		
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}	else{
			printf("Impossivel calcular\n");
		}
		
	return 0;
}