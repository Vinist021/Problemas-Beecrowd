/*
  autor: Vinist021;
  data: 18/02/2025;
  nome: Voleibol; 
*/

#include<stdio.h>

int main()
{
    int N, S, B, A;
    int S1, B1, A1;
    float Psaq, Pbloq, Pata; 

    char nome[30];

    scanf("%d", &N);

    int TS = 0, TB = 0, TA = 0;
    int TS1 = 0, TB1 = 0, TA1 = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%s %d %d %d", nome, &S, &B, &A);
        scanf("%d %d %d", &S1, &B1, &A1);

        TS += S; TB += B; TA += A;
        TS1 += S1; TB1 += B1; TA1 += A1;
    }

    Psaq = (float)TS1 / TS;
    Pbloq = (float)TB1 / TB;
    Pata = (float)TA1 / TA;
    

    printf("Pontos de Saque: %.2f %%.\n", Psaq * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", Pbloq * 100);
    printf("Pontos de Ataque: %.2f %%.\n", Pata * 100);

    return 0;
}