/*
  autor: Vinist021;
  data: 09/09/2024;
  nome: Tipo de Combustível;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, alcool=0, gasolina=0, diesel=0;
	
	scanf("%d", &N);
	
	while(N != 4){
		if(N == 1){
			alcool++;
		}	else if(N == 2){
				gasolina++;
			}	else if(N == 3){
					diesel++;
				}
		scanf("%d", &N);
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
}