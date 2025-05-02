/*
  autor: Vinist021;
  data: 25/11/2024;
  nome: Sequência S II;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double S = 0, i = 3, k = 2;
	
	for(i; i <= 39; i += 2)
	{
		S += i / k;
		k *= 2;
	}	
	
	S += 1;
	
	printf("%.2lf\n", S);
	
	return 0;
}