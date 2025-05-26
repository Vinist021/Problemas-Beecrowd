/*
  autor: Vinist021;
  data: 28/11/2024;
  nome: Ho Ho Ho;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	int i = 0;
	while(i < N){
		if(i == 0)
			printf("Ho");
			else
				printf(" Ho");
		i++;
	}
	printf("!\n");
	
	return 0;
}