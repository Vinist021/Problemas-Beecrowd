/*
  autor: Vinist021;
  data: 13/12/2024;
  nome: A Corrida das Lesmas;
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int N, maiorNum;
	
	while(scanf("%d", &N) != EOF)
	{
		int L[N];
		
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &L[i]);	
		}
		
		for(int i = 0; i < N; i++)
		{
			if(i == 0)
			{
				maiorNum = L[i];
			}
			
			if(L[i] > maiorNum)
			{
				maiorNum = L[i];
			}
		}
		
		if(maiorNum < 10)
		{
			printf("%d\n", 1);
		}
		else if(maiorNum < 20)
		{
			printf("%d\n", 2);
		}
		else
		{
			printf("%d\n", 3);
		}
		
		maiorNum = 0;
	}	
	
	return 0;
}