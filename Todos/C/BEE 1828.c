/*
  autor: Vinist021;
  data: 23/12/2024;
  nome: Bazinga!;
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int T;
	char sheldon[20], raj[20];
	
	scanf("%d", &T);
	
	int i = 0;
	while (i < T)
	{
		scanf(" %s %s", sheldon, raj);
		
		if(strcmp(sheldon, raj) == 0)
			printf("Caso #%d: %s", i+1, "De novo!\n");
		else if(strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else if(strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0)
			printf("Caso #%d: %s", i+1, "Bazinga!\n");
		else
			printf("Caso #%d: %s", i+1, "Raj trapaceou!\n");
		i++;
	}
	
	return 0;
}