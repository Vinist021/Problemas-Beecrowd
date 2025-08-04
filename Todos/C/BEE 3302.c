/*
  autor: Vinist021;
  data: 16/02/2025;
  nome: Resposta Certa;
*/

#include <stdio.h>

int main()
{
    int N;
    int resposta;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &resposta);
        printf("resposta %d: %d\n", (i+1), resposta);
    }
    
    return 0;
}