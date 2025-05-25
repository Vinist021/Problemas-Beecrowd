/*
  autor: Vinist021;
  data: 25/10/2024;
  nome: Matriz Quadrada III;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int N, i, j;
	
	while(1){
	
		scanf("%d", &N);
		
		if (N == 0)
			break;
		
		int matriz[N][N];
		
		for(i = 0; i < N; i++){
			for(j = 0; j < N; j++){
				if(j == 0)
					matriz [i][j] = (pow(2, i) * (j+1));
				else
					matriz[i][j] = matriz[i][j-1] * 2;  
			}
		}
		
		int ut = matriz[N-1][N-1];
		int digitos = 0;
		
		do{
			ut = ut / 10;
			digitos++;
		}	while(ut > 0);
		
		for(i = 0; i < N; i++){
			for(j = 0; j < N; j++){
				if(j == 0)
					printf("%*d", digitos, matriz[i][j]);
				else
					printf(" %*d", digitos, matriz[i][j]);
			}
			printf("\n");	
		}
		printf("\n");
		
	}
	
	return 0;
}