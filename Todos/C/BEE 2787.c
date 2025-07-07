/*
  autor: Vinist021;
  data: 22/08/2025;
  nome: Xadrez; 
*/

#include <stdio.h>

int main(){
	
	int L, C, pos=0;
	
	scanf("%d", &L);
	scanf("%d", &C);
	
	if((L % 2) == 0 && (C % 2) == 0){
		printf("%d\n", 1);
	}	else if((L % 2) == 1 && (C % 2) == 0) {
			printf("%d\n", 0);
		}	else if((L % 2) == 1 && (C % 2) == 1){
				printf("%d\n", 1);
			}	else if((L % 2) == 0 && (C % 2) == 1){
				printf("%d\n", 0);
				}

	return 0;
}