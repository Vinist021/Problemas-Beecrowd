/*
  autor: Vinist021;
  data: 28/09/2024;
  nome: Calculando; 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	
	char contaInicial[1000], conta[1000], numSoma[1000], nSub[1000], operador[1000], opAt[1000];
	char *sub;
	int tam, j=0, k=0, nAtual=0, nTotal=0, m, l=1;
	
	
	scanf("%d", &m);
	
	while(m != 0){
	
        memset(operador, 0, sizeof(operador));
        scanf(" %s", contaInicial);
        
        if(contaInicial[0] != '+' && contaInicial[0] != '-'){
            conta[0] = '+';
            conta[1] = '\0';
            strcat(conta, contaInicial);
        }	else{
                    strcpy(conta, contaInicial);
            }					
        
        tam = strlen(conta);
        
        for(int i=0; i < tam; i++){
            if(ispunct(conta[i]) != 0){
                operador[j] = conta[i];
                j++;
            }
        }
        
        j=0;
           
        sub = strtok(conta, "+-");
        
        while(sub != NULL){
            strcpy(nSub, sub);
            
            opAt[0] = operador[k];
            opAt[1] = '\0';
            
            strcat(opAt, nSub);
            
            nAtual = atoi(opAt);
            
            nTotal += nAtual;
            
            nAtual = 0;
            
            memset(opAt, 0, sizeof(opAt));
            k++;
            
            sub = strtok(NULL, "+-");
        }
        
        
        printf("Teste %d\n", l);
        printf("%d\n", nTotal);
        printf("\n");
        
        l++;
        
        memset(conta, 0, sizeof(conta));
        memset(contaInicial, 0, sizeof(contaInicial));
        memset(numSoma, 0, sizeof(numSoma));
        memset(nSub, 0, sizeof(nSub));
        memset(opAt, 0, sizeof(opAt));
        memset(operador, 0, sizeof(operador));
        
        nTotal = 0;
        k=0;
            
        scanf("%d", &m);
    }

	return 0;
}