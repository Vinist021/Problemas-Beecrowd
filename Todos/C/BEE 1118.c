/*
  autor: Vinist021;
  data: 20/11/2024;
  nome: Várias Notas Com Validação;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float nota1, nota2, media;
	int opcao = 1;
	
	while(1)
	{
		scanf("%f", &nota1);
		while(nota1 < 0 || nota1 > 10.0)
		{
			printf("nota invalida\n");
			scanf("%f", &nota1);
		}
		
		scanf("%f", &nota2);
		while(nota2 < 0 || nota2 > 10.0)
		{
			printf("nota invalida\n");
			scanf("%f", &nota2);
		}
		
		media = (nota1 + nota2) / 2.0;
		
		printf("media = %.2f\n", media);
		
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &opcao);
		
		while(opcao != 1 && opcao != 2)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &opcao);	
		}
		
		if(opcao == 2)
		{
			break;
		}	
	}

	return 0;
}