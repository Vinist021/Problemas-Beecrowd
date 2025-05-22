/*
  autor: Vinist021;
  data: 29/08/2024;
  nome: Preenchimento de Vetor IV;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int impar[5], par[5];
	int tamImp = 0, tamPar = 0, j = 0, k = 0;
	int N[15];
	
	for(int i=0; i<15; i++){
	
		scanf("%d", &N[i]);
		fflush(stdin);
		
		if(N[i] % 2 == 0){
			par[j] = N[i];
			j++;
			tamPar++;
		}	else if(N[i] % 2 == 1 || N[i] % 2 == -1){
				impar[k] = N[i];
				k++;
				tamImp++;
			}
			
			
		if(tamPar == 5){
			for(int j=0; j<5; j++){
				printf("par[%d] = %d\n", j, par[j]);
			}
			
			for(int j=0; j<5; j++){
				par[j] = 0;
			}
			
			tamPar = 0;
			j = 0;
				
		}
		
		if(tamImp == 5){
			for(int k=0; k<5; k++){
				printf("impar[%d] = %d\n", k, impar[k]);
			}
			
			for(int k=0; k<5; k++){
				impar[k] = 0;
			}
			
			tamImp = 0;	
			k = 0;
		}
		
		if (i == 14){
			
			for(int k=0; k<5; k++){
				if(impar[k] != 0){
					printf("impar[%d] = %d\n", k, impar[k]);
				}
			}
			
			for(int j=0; j<5; j++){
				if(par[j] != 0){
					printf("par[%d] = %d\n", j, par[j]);
				}
			}		
		}
	}
	return 0;
}

	
