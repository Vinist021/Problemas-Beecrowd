/*
  autor: Vinist021;
  data: 13/11/2024;
  nome: Números Ímpares;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x;
	
	scanf("%d", &x);
	
	int i = 1;
	while(i <= x){
		
		printf("%d\n", i);
		
		i += 2;
	}
	
	return 0;
}
