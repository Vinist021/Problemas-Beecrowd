/*
  autor: Vinist021;
  data: 05/11/2024;
  nome: Média 3;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float N1, N2, N3, N4, Med;
	float NT1, NT2, NT3, NT4;
	float Nex;
	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	
	NT1 = N1 * 2;
	NT2 = N2 * 3;
	NT3 = N3 * 4;
	NT4 = N4;
	
	Med = (NT1 + NT2 + NT3 + NT4) / 10;
	
	if(Med >= 7){
		printf("Media: %.1f\n", Med);
		printf("Aluno aprovado.\n");
	}	else if(Med < 5){
			printf("Media: %.1f\n", Med);
			printf("Aluno reprovado.\n");
		}	else{
				printf("Media: %.1f\n", Med);
				printf("Aluno em exame.\n");
		
				scanf("%f", &Nex);
				Med = (Med + Nex) / 2;
				printf("Nota do exame: %.1f\n", Nex);
				
				if(Med >= 5){
					printf("Aluno aprovado.\n");
				}	else{
						printf("Aluno reprovado.\n");
					}
				printf("Media final: %.1f\n", Med);
			}
			
	return 0;
}