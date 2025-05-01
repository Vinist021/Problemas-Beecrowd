/*
  autor: Vinist021;
  data: 23/11/2024;
  nome: Fibonacci Fácil;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x;
	int fib[46] = {0,1};
	
	scanf("%d", &x);
	
	if(x == 0)
	{
		exit(0);
	}
	else if(x == 1)
	{
		printf("0\n");
	}
	else
	{
		int i = 2;
		while(i < x)
		{
			fib[i] = fib[i-1] + fib[i-2];
			i++;
		}
	
		for(int j = 0; j < (x-1); j++)
		{
		printf("%d ", fib[j]);
		}
		
		printf("%d\n", fib[x-1]);
	}
	
	return 0;
}