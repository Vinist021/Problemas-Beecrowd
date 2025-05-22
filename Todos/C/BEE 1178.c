/*
  autor: Vinist021;
  data: 28/08/2024;
  nome: Preenchimento de Vetor III;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double X;
	double N[100];
	
	scanf("%lf", &X);
	
	N[0] = X;
	
	int i = 1;
	while(i < 100){
		if(i == 1){
			printf("N[%d] = %.4lf\n", i-1, X);	
		}
		N[i] = N[i-1] / 2;
		printf("N[%d] = %.4lf\n", i, N[i]);
		i++;	
	}
	
	return 0;
}