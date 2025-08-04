/*
  autor: Vinist021;
  data: 19/02/2025;
  nome: Tomadas Elétricas;
*/

#include<stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        int K, qtd, total = 0;

        scanf("%d", &K);

        for(int j = 0; j < K; j++)
        {
            scanf("%d", &qtd);
            total += qtd;
        }
        total = total - (K-1);
        printf("%d\n", total);
    }

    return 0;
}