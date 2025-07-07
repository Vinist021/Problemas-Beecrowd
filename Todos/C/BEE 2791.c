/*
  autor: Vinist021;
  data: 21/08/2025;
  nome: Feijão; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N1, N2, N3, N4;
	
	scanf("%d %d %d %d", &N1, &N2, &N3, &N4);
	
	if(N1 == 1){
		printf("%d\n", 1);
	}	else if(N2 == 1){
			printf("%d\n", 2);
		}	else if(N3 == 1){
				printf("%d\n", 3);				
			}	else if(N4 == 1){
					printf("%d\n", 4);
				}
                
	return 0;
}