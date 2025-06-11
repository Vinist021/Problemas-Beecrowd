/*
  autor: Vinist021;
  data: 14/02/2025;
  nome: Crepúsculo em Portland; 
*/

#include <stdio.h>

int main() {
	
	int N;
	
	scanf("%d", &N);
	
	int esquinas[N+1][N+1];
	
	for(int i = 0; i < (N + 1); i++)
	{
		for(int j = 0; j < (N + 1); j++)
		{
			scanf("%d", &esquinas[i][j]);
		}	
	}
	
	for(int i = 0; i < N; i++)
	{
		int cont = 0;
		for(int j = 0; j < N; j++)
		{
			if(esquinas[i][j] == 1)
				cont++;
			if(esquinas[i+1][j] == 1)
				cont++;
			if(esquinas[i][j+1] == 1)
				cont++;
			if(esquinas[i+1][j+1] == 1)
				cont++;	
			
			if(cont >= 2)
				printf("S");
			else
				printf("U");
				
			cont = 0;	
		}
		printf("\n");	
	}
    
	return 0;
}