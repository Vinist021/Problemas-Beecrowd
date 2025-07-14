/*
  autor: Vinist021;
  data: 04/09/2024;
  nome: Papagaio Poliglota; 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char perna[20];
	
	while (scanf(" %19[^\n]s", perna) != EOF){
		fflush(stdin);
		
		if(strcmp(perna, "esquerda") == 0){
			printf("ingles\n");
		}
		if(strcmp(perna, "direita") == 0){
			printf("frances\n");
		}
		if(strcmp(perna, "nenhuma") == 0){
			printf("portugues\n");
		}
		if(strcmp(perna, "as duas") == 0){
			printf("caiu\n");
		}
	}	
    
	return 0;
}