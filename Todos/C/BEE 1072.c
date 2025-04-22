/*
  autor: Vinist021;
  data: 05/09/2024;
  nome: Intervalo 2;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, x;
	int contIn=0, contOut=0;
	
	int i=0;
	
	scanf("%d", &N);
	while(i < N){
		scanf(" %d", &x);
		
		if(x >= 10 && x <= 20){
			contIn++;
		}	else{
				contOut++;
			}
	i++;
	} 
	
	printf("%d in\n", contIn);
	printf("%d out\n", contOut);
	
	return 0;
}