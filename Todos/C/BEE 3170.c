/*
  autor: Vinist021;
  data: 16/02/2025;
  nome: Bolinhas de Natal
*/

#include<stdio.h>

int main()
{
    int B, G;
    int necessario, qtFaltam;

    scanf("%d %d", &B, &G);

    necessario = G / 2;
    qtFaltam = necessario - B;

    if(qtFaltam > 0)
        printf("Faltam %d bolinha(s)\n", qtFaltam);
    else
        printf("Amelia tem todas bolinhas!\n");

    return 0;
}