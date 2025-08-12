/*
  autor: Vinist021;
  data: 27/08/2024;
  nome: Palavrão;
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char palavra[21];
	int tamanho;
	
	scanf("%s", &palavra);
	
	if(strlen(palavra) >= 10){
		printf("palavrao\n");
	}	else {
			printf("palavrinha\n");
		}
	
	return 0;
}