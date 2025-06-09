/*
  autor: Vinist021;
  data: 09/01/2025;
  nome: Raiz Quadrada de 10; 
*/

#include <stdio.h>

int main() {
	
	int N;
	double raiz;
	double tdiv = 0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		tdiv += 6;
		tdiv = 1 / tdiv;
	}
	
	raiz = tdiv + 3;
	
	printf("%.10lf\n", raiz);
	
	return 0;
}