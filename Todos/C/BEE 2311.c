/*
  autor: Vinist021;
  data: 23/02/2025;
  nome: Saltos Ornamentais; 
*/

#include<stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        char nome[40];
        float GD, notas[7];
        float nParcial = 0, nFinal, maior, menor;

        scanf(" %s %f", nome, &GD);

        for(int j = 0; j < 7; j++)
        {
            scanf("%f", &notas[j]);
            nParcial += notas[j];
        }

        maior = notas[0];
        menor = notas[0];
        for(int j = 0; j < 7; j++)
        {
            if(notas[j] < menor)
            {
                menor = notas[j];
            }  
            if(notas[j] > maior)
            {
                maior = notas[j];
            }  
        }

        nFinal = (nParcial - menor - maior) * GD;

        printf("%s %.2f\n", nome, nFinal);

    }

    return 0;
}