/*
  autor: Vinist021;
  data: 09/11/2024;
  nome: Animal;
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char filo[20], tipo[20], habito[20];
	
	scanf("%s %s %s", filo, tipo, habito);
	
	if(strcmp(filo, "vertebrado") == 0)
	{
		if(strcmp(tipo, "ave") == 0)
		{
			if(strcmp(habito, "carnivoro") == 0)
			{
				printf("aguia\n");
			}
			if(strcmp(habito, "onivoro") == 0)
			{
				printf("pomba\n");
			}		
		}
		
		if(strcmp(tipo, "mamifero") == 0)
		{
			if(strcmp(habito, "onivoro") == 0)
			{
				printf("homem\n");
			}
			if(strcmp(habito, "herbivoro") == 0)
			{
				printf("vaca\n");
			}
		}
				
	}
	
	if(strcmp(filo, "invertebrado") == 0)
	{
		if(strcmp(tipo, "inseto") == 0)
		{
			if(strcmp(habito, "hematofago") == 0)
			{
				printf("pulga\n");
			}
			if(strcmp(habito, "herbivoro") == 0)
			{
				printf("lagarta\n");
			}		
		}
		
		if(strcmp(tipo, "anelideo") == 0)
		{
			if(strcmp(habito, "hematofago") == 0)
			{
				printf("sanguessuga\n");
			}
			if(strcmp(habito, "onivoro") == 0)
			{
				printf("minhoca\n");
			}
		}
				
	}
	
	return 0;
}