/*
  autor: Vinist021;
  data: 11/09/2024;
  nome: Mais Cavalos; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char posTotal[6], col1, col2, lin1, lin2;
	
	scanf("%5[^\n]s", posTotal);
	
	col1 = posTotal[0];
	lin1 = posTotal[1];
	
	col2 = posTotal[3];
	lin2 = posTotal[4];
	
	if(col2 == (col1 - 2) && lin2 == (lin1 + 1) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
		printf("VALIDO\n");	
	}	else if(col2 == (col1 - 1) && lin2 == (lin1 + 2) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
			printf("VALIDO\n");
		}	else if(col2 == (col1 + 1) && lin2 == (lin1 + 2) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
				printf("VALIDO\n");
			}	else if(col2 == (col1 + 2) && lin2 == (lin1 + 1) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
					printf("VALIDO\n");
				}	else if(col2 == (col1 - 2) && lin2 == (lin1 - 1) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
						printf("VALIDO\n");
					}	else if(col2 == (col1 - 1) && lin2 == (lin1 - 2) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
						printf("VALIDO\n");
						}	else if(col2 == (col1 + 1) && lin2 == (lin1 - 2) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
								printf("VALIDO\n");
							}	else if(col2 == (col1 + 2) && lin2 == (lin1 - 1) && col1 <= 'h' && col2 <= 'h' && col1 >= 'a' && col2 >= 'a' && lin1 <= '8' && lin2 <= '8' && lin1 >= '1' && lin2 >= '1'){
									printf("VALIDO\n");
								}	else {
										printf("INVALIDO\n");
									}                     
	return 0;
}