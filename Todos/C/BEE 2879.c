/*
  autor: Vinist021;
  data: 25/08/2024;
  nome: Desvendando Monty Hall; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, Car;

	scanf("%d", &N);
	
	int Pt[N];

	for(int i=0;i<N;i++){
		scanf("%d", &Pt[i]);
		
		if(Pt[i] != 1){
			Car++;	
		}
	}
	
	printf("%d\n", Car);
	
	return 0;
}

