/*
  autor: Vinist021;
  data: 04/09/2024;
  nome: Números Positivos;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cont;
	float num;
	
	int i=0;
	while(i < 6){
	scanf("%f", &num);
		if(num >= 0){
			cont++;
		}
	i++;
	}
	printf("%d valores positivos\n", cont);
	
	return 0;
}