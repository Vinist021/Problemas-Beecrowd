/*
  autor: Vinist021;
  data: 23/11/2024;
  nome: Sequências Crescentes;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x;
	
	while(1)
	{
		scanf("%d", &x);
		if(x == 0)
		{
			break;
		}
		
		int i = 1;
		while(i < x)
		{
			printf("%d ", i);
			i++;
		}
		if (i == x)
		{
			printf("%d\n", i);	
		}	
		
	}
    
	return 0;
}