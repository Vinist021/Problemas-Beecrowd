/*
  autor: Vinist021;
  data: 04/09/2024;
  nome: Pares, Ímpares, Positivos e Negativos;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n;
	int contPar=0, contImp=0, contPos=0, contNeg=0;
	
	int i=0;
	while(i <5){
	
		scanf("%d", &n);
		if(n % 2 == 0){
			contPar++;
		}
		if(n % 2 == 1 || n % 2 == -1){
			contImp++;
		}
		if(n > 0){
			contPos++;
		}
		if(n < 0){
			contNeg++;
		}
	i++;
	}
	
	printf("%d valor(es) par(es)\n", contPar);
	printf("%d valor(es) impar(es)\n", contImp);
	printf("%d valor(es) positivo(s)\n", contPos);
	printf("%d valor(es) negativo(s)\n", contNeg);
	
	return 0;
}