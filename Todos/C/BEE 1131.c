/*
  autor: Vinist021;
  data: 09/09/2024;
  nome: Grenais;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int gols1, gols2, escolha=1, nGrenais=1, vitInter=0, vitGremio=0, empates=0;
	
	scanf("%d %d", &gols1, &gols2);
	printf("Novo grenal (1-sim 2-nao)\n");	
	
	while(escolha == 1){
		if(gols1 > gols2){
			vitInter++;
		}	else if(gols1 == gols2){
				empates++;
			}	else if(gols1 < gols2){
					vitGremio++;
				}
	
		scanf("%d", &escolha);
		
		if(escolha == 2) break;
		
		nGrenais++;
		scanf("%d %d", &gols1, &gols2);
		printf("Novo grenal (1-sim 2-nao)\n");	
	}
	printf("%d grenais\n", nGrenais);
	printf("Inter:%d\n", vitInter);
	printf("Gremio:%d\n", vitGremio);
	printf("Empates:%d\n", empates);
	
	if(vitInter > vitGremio){
		printf("Inter venceu mais\n");
	}	else if(vitGremio > vitInter){
			printf("Gremio venceu mais\n");
		}
        
	return 0;
}