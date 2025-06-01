/*
  autor: Vinist021;
  data: 27/12/2024;
  nome: Polígonos Regulares Simples; 
*/

#include <stdio.h>

int main()
{
    unsigned int N, L;
    unsigned long long int total;

    scanf("%u %u", &N, &L);

    total = N * L;

    printf("%llu\n", total);

    return 0;
}