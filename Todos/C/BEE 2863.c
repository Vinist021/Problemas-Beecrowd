/*
  autor: Vinist021;
  data: 25/08/2024;
  nome: Umil Bolt; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int T;
	float Ti, menor;
	
	scanf("%d", &T);
	
	while(T != EOF){
		
		menor = 12;
		
		for(int i=0; i<T; i++){
			scanf("%f", &Ti);
				if(Ti > 9 && Ti < 11){		
					if(menor > Ti){
						menor = Ti;
				}
			}
		}
	printf("%.2f\n", menor);
	
	if(scanf("%d", &T) == EOF) break;			
	}
	
	return 0;
}