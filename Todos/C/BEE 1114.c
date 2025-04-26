/*
  autor: Vinist021;
  data: 07/09/2024;
  nome: Senha Fixa;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int senhaFixa = 2002;
	int senhaInformada;
	
	scanf("%d", &senhaInformada);
	
	while(senhaInformada != senhaFixa){
		printf("Senha Invalida\n");
		scanf("%d", &senhaInformada);
	}
	
	if(senhaInformada == senhaFixa){
		printf("Acesso Permitido\n");
	}
    
	return 0;
}