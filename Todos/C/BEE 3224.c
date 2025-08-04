/*
  autor: Vinist021;
  data: 31/08/2024;
  nome: Aaah!;
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char ahMed[1001];
	char ahPac[1001];
	int tamPac, tamMed;
	
	fgets(ahPac, 1001, stdin);
	fgets(ahMed, 1001, stdin);
	
	tamPac = strlen(ahPac);
	tamMed = strlen(ahMed);
	
	if(tamPac >= tamMed){
		printf("go\n");
	}	else if(tamPac < tamMed){
			printf("no\n");
	}

	return 0;
}