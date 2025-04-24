/*
  autor: Vinist021;
  data: 06/09/2024;
  nome: Sequencia IJ 1;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i=1, j=60;
	
	
	printf("I=%d J=%d\n", i, j);
	while(j > 0){
		i += 3;
		j -= 5;
		printf("I=%d J=%d\n", i, j);	
	}
    
	return 0;
}