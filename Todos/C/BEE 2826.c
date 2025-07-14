/*
  autor: Vinist021;
  data: 15/09/2024;
  nome: Léxico; 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char palavra1[21], palavra2[21];
	
	scanf("%s", palavra1);
	scanf("%s", palavra2);
	
	if(strcmp(palavra1, palavra2) < 0){
		printf("%s\n", palavra1);
		printf("%s\n", palavra2);	
	}	else if(strcmp(palavra1, palavra2) > 0 ){
			printf("%s\n", palavra2);
			printf("%s\n", palavra1);
		}	else if(strcmp(palavra1, palavra2) == 0){
				printf("%s\n", palavra1);
				printf("%s\n", palavra2);
			}

	return 0;
}