/*
  autor: Vinist021;
  data: 25/10/2024;
  nome: Bob Conduite;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int T, R1, R2, Res;
	
	scanf("%d", &T);
	
	int i = 0;
	while(i < T){
		
		scanf("%d %d", &R1, &R2);
		
		Res = R1 + R2;
		
		printf("%d\n", Res);
		
		i++;
	}
	
	return 0;
}