/*
  autor: Vinist021;
  data: 04/09/2024;
  nome: Pares entre Cinco Números;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num, cont = 0;
	
	int i=0;
	while(i<5){
	scanf("%d", &num);
		if(num % 2 == 0){
			cont++;
		}
	i++;
	}
	
	printf("%d valores pares\n", cont);
	
	return 0;
}
