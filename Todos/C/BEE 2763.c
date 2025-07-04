/*
  autor: Vinist021;
  data: 22/08/2024;
  nome: Entrada e Saída CPF; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
	
	scanf("%c%c%c.%c%c%c.%c%c%c-%c%c", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	
	printf("%c%c%c\n", n1, n2, n3);
	printf("%c%c%c\n",n4, n5, n6);
	printf("%c%c%c\n",n7, n8, n9);
	printf("%c%c\n",n10, n11);
	
	return 0;
}