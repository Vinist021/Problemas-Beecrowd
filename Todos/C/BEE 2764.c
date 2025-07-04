/*
  autor: Vinist021;
  data: 22/08/2024;
  nome: Entrada e Saída de Data; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char D1, D2, M1, M2, A1, A2;
	
	scanf("%c%c/%c%c/%c%c", &D1, &D2, &M1, &M2, &A1, &A2);
	
	printf("%c%c/%c%c/%c%c\n", M1, M2, D1, D2, A1, A2);
	printf("%c%c/%c%c/%c%c\n", A1, A2, M1, M2, D1, D2);
	printf("%c%c-%c%c-%c%c\n", D1, D2, M1, M2, A1, A2);
	
	return 0;
}