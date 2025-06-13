/*
  autor: Vinist021;
  data: 20/02/2025;
  nome: Batalha de Pomekons; 
*/

#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int B;
        int Ai, Di, Li;
        int dabriel = 0, guarte = 0;

        scanf("%d", &B);

        scanf("%d %d %d", &Ai, &Di, &Li);
        dabriel += Ai; dabriel += Di;
        if((Li % 2) == 0)
            dabriel += B;

        scanf("%d %d %d", &Ai, &Di, &Li);
        guarte += Ai; guarte += Di;
        if((Li % 2) == 0)
            guarte += B;   

        if(dabriel > guarte)
            printf("Dabriel\n");
        else if(dabriel == guarte)
            printf("Empate\n");
        else if(dabriel < guarte)
            printf("Guarte\n");
    }
    
    return 0;
}