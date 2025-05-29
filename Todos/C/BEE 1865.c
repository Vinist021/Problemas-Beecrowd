/*
  autor: Vinist021;
  data: 30/10/2024;
  nome: Mjölnir;
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int C, N;
	char nome[100];
	
	scanf("%d", &N);
	
	int i=0;
	while(i < N){
		scanf(" %s", nome);
		scanf("%d", &C);
		
		if(strcmp(nome, "Thor") == 0){
			printf("Y\n");
		}	else{
				printf("N\n");
			}
		i++;
	}
	
	return 0;
}