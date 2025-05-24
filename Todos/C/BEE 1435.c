/*
  autor: Vinist021;
  data: 19/12/2024;
  nome: Matriz Quadrada I;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	while(N != 0){
	
	int matriz[N][N];
	
	int ini = 0, fim = N, val = 1;
	
	while(fim > 0)
	{
		for (int i = ini; i < fim; i++)
		{
			for (int j = ini; j < fim; j++)
			{
				matriz[i][j] = val;
			}
				
		}
			fim--;
			ini++;
			val++;
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(j == 0)
				printf("%3d", matriz[i][j]);
				else
					printf(" %3d", matriz[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	
	scanf("%d", &N);
	}

	return 0;
}