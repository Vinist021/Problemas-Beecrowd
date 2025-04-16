/*
  autor: Vinist021;
  data: 28/08/2024;
  nome: Gasto de Combustível;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int tempo, vel;
	float qt;
	
	scanf("%d %d", &tempo, &vel);
	
	qt = (tempo * vel) / 12.0;
	
	printf("%.3f\n", qt);
	
	return 0;
}