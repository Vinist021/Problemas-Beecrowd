/*
  autor: Vinist021;
  data: 07/09/2024;
  nome: Crescente e Descrescente
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, X, Y;
	
	while(scanf("%d %d", &X, &Y) != EOF){
		if(X > Y){
			printf("Decrescente\n");
		}	else if(X < Y){
				printf("Crescente\n");
			}
	}
    
	return 0;
}