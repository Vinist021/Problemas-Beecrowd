/*
  autor: Vinist021;
  data: 23/08/2025;
  nome: Iccanobif; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	int val[N];
	
	val[0] = 1;
	val[1] = 1;
	
	if(N == 1){
		printf("%d\n", 1);
	} 	else if (N == 2){
			printf("%d %d\n", 1, 1);
		}	else{
				for(int i=2; i<N; i++){
						val[i] = val[i-1] + val[i-2];	
				}		
			}
	
	if(N > 2){
		for(int i=N-1; i>=2; i--){
			printf("%d ", val[i]);		
		}
		printf("%d %d\n", 1, 1);
	}

	return 0;
}