/*
  autor: Vinist021;
  data: 04/09/2024;
  nome: Seis Números Ímpares;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x;
	int contImp=0;
	
	scanf("%d", &x);
	
	while(contImp < 6){
		if(x % 2 == 1 || x % 2 == -1){
			contImp++;
			printf("%d\n", x);
		}
	x++;
	}
	return 0;
}
