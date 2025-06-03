/*
  autor: Vinist021;
  data: 01/10/2024;
  nome: MacPRONALTS; 
*/

#include <stdio.h>

struct mac {
	
	int cod;
	
};

struct mac pedido;

int main(int argc, char *argv[]) {
	
	int p, qtd;
	float total = 0;
	
	scanf(" %d", &p);
	
	int i = 0;
	while(i < p){
		
		scanf(" %d %d", &pedido.cod, &qtd);
		
		if(pedido.cod == 1001){
			total += 1.50 * qtd;
		}	else if(pedido.cod == 1002){
				total += 2.50 * qtd;
			}	else if(pedido.cod == 1003){
					total += 3.50 * qtd;
				}	else if(pedido.cod == 1004){
						total += 4.50 * qtd;
					}	else if(pedido.cod == 1005){
							total += 5.50 * qtd;
						}
		i++;
	}
	
	printf("%.2f\n", total);
	
	return 0;
}