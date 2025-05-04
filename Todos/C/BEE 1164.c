/*
  autor: Vinist021;
  data: 11/12/2024;
  nome: Número Perfeito;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n, x;
	int somaNum = 0;
	
	scanf("%d", &n);
	
	int i = 0;
	while(i < n)
	{
		scanf("%d", &x);
		int j = 1;
		while(j <= (x/2))
		{
			if(x % j == 0)
			{
				somaNum += j;
			}
			j++;
		}
		if(somaNum == x)
		{
			printf("%d eh perfeito\n", x);
		}
		else
		{
			printf("%d nao eh perfeito\n", x);
		}
		
		somaNum = 0;
		
		i++;
	}

	return 0;
}