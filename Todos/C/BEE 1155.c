/*
  autor: Vinist021;
  data: 24/11/2024;
  nome: Sequência S;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double S = 0;
	
	for(int i = 1; i <= 100; i++)
	{
		S += 1.00 / i;
	}
	
	printf("%.2lf\n", S);
	
	return 0;
}