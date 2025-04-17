/*
  autor: Vinist021;
  data: 04/09/2024;
  nome: Lanche;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cod, quant;
	float total;
	
	scanf("%d %d", &cod, &quant);
	
	if(cod == 1){
		total = quant * 4.00;
		printf("Total: R$ %.2f\n", total);
	} 	else if(cod == 2){
			total = quant * 4.50;
			printf("Total: R$ %.2f\n", total);
		}	else if(cod == 3){
				total = quant * 5.00;
				printf("Total: R$ %.2f\n", total);
			}	else if(cod == 4){
					total = quant * 2.00;
					printf("Total: R$ %.2f\n", total);
				}	else if(cod == 5){
						total = quant * 1.50;
						printf("Total: R$ %.2f\n", total);
					}
}