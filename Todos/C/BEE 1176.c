/*
  autor: Vinist021;
  data: 30/11/2024;
  nome: Fibonacci em Vetor;
*/

#include <stdio.h>

long long PosicaoFibonacci(int pos);

int main(int argc, char *argv[]) {
	
	int n, posicao;
	
	scanf("%d", &n);
	
	int i = 0;
	while(i < n)
	{
		scanf("%d", &posicao);
		printf("Fib(%d) = %lld\n", posicao, PosicaoFibonacci(posicao));
		
		i++;	
	}
	return 0;
}

long long PosicaoFibonacci(int pos)
{
	long long a = 0, b = 1, c;
	
	if(pos == 0)
	{
		return 0;
	}
	else if(pos == 1)
	{
		return 1;
	}
	
	for(int i = 1; i < pos; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	
	return b;
}