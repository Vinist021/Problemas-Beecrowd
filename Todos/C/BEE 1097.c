/*
  autor: Vinist021;
  data: 06/09/2024;
  nome: Sequencia IJ 3;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int l, j = 7;
	for(int i = 1; i <= 9; i+=2){
		l = 0;
		while(l < 1){
			printf("I=%d J=%d\n", i, j);
			j--;
			printf("I=%d J=%d\n", i, j);
			j--;
			printf("I=%d J=%d\n", i, j);
			l++;
			j += 4;
		}
	}
	
	return 0;	
}