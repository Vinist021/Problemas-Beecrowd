/*
  autor: Vinist021;
  data: 27/11/2024;
  nome: Conta;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n, x;
	
	scanf("%d", &n);
	
	int i = 0;
	while(i < n)
	{
		scanf("%d", &x);
		if(x % 2 == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
		
		i++;
	}

	return 0;
}