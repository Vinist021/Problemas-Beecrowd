/*
  autor: Vinist021;
  data: 16/12/2024;
  nome: De Quem é a Vez?;
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int QT;
	int NJ1, NJ2;
	char escJ1[6], escJ2[6];
	char nomeJ1[101], nomeJ2[101];
	char paridade[6];
	
	scanf("%d", &QT);
	
	int i = 0;
	while(i < QT)
	{
		scanf(" %s %s %s %s", nomeJ1, escJ1, nomeJ2, escJ2);
		scanf("%d %d", &NJ1, &NJ2);
		
		if((NJ1 + NJ2) % 2 == 0)
		{
			strcpy(paridade, "PAR");
		}
		else
		{
			strcpy(paridade, "IMPAR");
		}
		
		
		if(strcmp(escJ1, paridade) == 0)
		{
			printf("%s\n", nomeJ1);
		}
		else
		{
			printf("%s\n", nomeJ2);
		}
		
		i++;
	}

	return 0;
}