/*
  autor: Vinist021;
  data: 28/12/2024;
  nome: O Enigma do Pronalândia; 
*/

#include <stdio.h>
#include <string.h>

void strinv(char *str1, char *str2)
{
	int tam = strlen(str2) - 1;
	int i, j = tam;
	
	for(i = 0; i <= tam; i++, j--)
	{
		str1[i] = str2[j];
	}
	str1[i] = '\0';
}


int main(int argc, char *argv[]) {
	
	char num[11], numInv[11];
	
	scanf("%s", num);
	
	strinv(numInv, num);
	
	printf("%s\n", numInv);
	
	return 0;
}