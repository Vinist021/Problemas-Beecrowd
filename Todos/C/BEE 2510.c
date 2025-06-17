/*
  autor: Vinist021;
  data: 22/08/2024;
  nome: Batmain; 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int T, tam;
	char N[27];
	
	scanf("%d", &T);
	
	
	int caso[T];
	
	for(int i=0; i<T; i++){
		scanf("%s", &N);
		
		tam = strlen(N);
		
		if(tam < 1 || tam > 26){
			printf("N\n");
		} 	else {
				printf("Y\n");
			}	
	}	
    
	return 0;
}