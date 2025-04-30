/*
  autor: Vinist021;
  data: 09/09/2024;
  nome: PUM;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	int i=1;
	while(i < (N * 4) -1){
		printf("%d %d %d PUM\n", i, i+1, i+2);
		
		i += 4;
	}
	
	return 0;
}