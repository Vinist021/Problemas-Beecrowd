/*
  autor: Vinist021;
  data: 14/11/2024;
  nome: Par ou Ímpar;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, x;
	
	scanf("%d", &N);
	
	int i = 0;
	while(i < N)
	{
	
		scanf("%d", &x);
		
		if(x < 0)
		{
			if(x % 2 == 0)
			{
				printf("EVEN NEGATIVE\n");
			}
			
			if(x % 2 == 1 || x % 2 == -1)
			{
				printf("ODD NEGATIVE\n");
			}
		}
		
		if(x > 0)
		{
			if(x % 2 == 0)
			{
				printf("EVEN POSITIVE\n");
			}
			
			if(x % 2 == 1 || x % 2 == -1)
			{
				printf("ODD POSITIVE\n");
			}
		}
		
		if(x == 0)
		{
			printf("NULL\n");	
		}	
		
		i++;	
	}

	return 0;
}