/*
  autor: Vinist021;
  data: 26/11/2024;
  nome: Número Primo;
*/

#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int);

int main(int argc, char *argv[]) {
	
	int n, x;
	
	scanf("%d", &n);
	
	int i = 0;
	while(i < n)
	{
		scanf("%d", &x);
		
		if(ehPrimo(x) == 1)
		{
			printf("%d eh primo\n", x);
		}
		else
		{
			printf("%d nao eh primo\n", x);	
		}
		
		i++;
	}
	
	return 0;
}

int ehPrimo(int num)
{
	if(num <= 1)
		return 0;

	else if(num == 2)
		return 1;

	else if(num % 2 == 0)
		return 0;
	
	for(int i = 3; (i * i) <= num; i +=2)
	{
		if(num % i == 0)
			return 0;
	}

	return 1;
}
