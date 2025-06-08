/*
  autor: Vinist021;
  data: 23/01/2025;
  nome: A Volta do Radar; 
*/

#include <stdio.h>

int main() {
	
	int T, N;
	
	while(1)
	{
		scanf("%d", &T);
		
		if(T == 0)
			break;
			
		for(int i = 0; i < T; i++)
		{
			scanf("%d", &N);
			
			if(N % 2 == 0)
				printf("%d\n", (N * 2) - 2);
			else
				printf("%d\n", (N * 2) - 1);
		}			
	}

	return 0;
}