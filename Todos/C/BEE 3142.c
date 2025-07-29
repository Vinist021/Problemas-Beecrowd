/*
  autor: Vinist021;
  data: 03/02/2025;
  nome: Excel Bugado; 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int posN1 = 0, posN2 = 0, posN3 = 0, posTotal;
	int nBase = 1;
	char col[12], lcol1 = 0, lcol2 = 0, lcol3 = 0;
	
	
	while(fgets(col, 12, stdin) != NULL){
	
        lcol1 = col[0];
        lcol2 = col[1];
        lcol3 = col[2];
        
        for(int i=65; i<=90; i++){
            if(lcol1 == i){
                posN1 = nBase;
            }
            nBase++;
        }
        
        nBase = 1;
        
        for(int i=65; i<=90; i++){
            if(lcol2 == i){
                posN2 = nBase;
            }
            nBase++;
        }
        
        nBase = 1;
        
        for(int i=65; i<=90; i++){
            if(lcol3 == i){
                posN3 = nBase;
            }
            nBase++;
        }
        
        nBase = 1;	
        
        
        if((posN1 != 0) && (posN2 == 0) && (posN3 == 0)){
            posTotal = posN1;
        } 	else if((posN1 != 0) && (posN2 != 0) && (posN3 == 0)){
                posTotal = (posN1 * 26) + (posN2);
            }	else if((posN1 != 0) && (posN2 != 0) && (posN3 != 0)){
                    posTotal = (posN1 * 676) + (posN2 * 26) + (posN3);
                }
        
        posN1 = 0;
        posN2 = 0;
        posN3 = 0;
        
        if(posTotal > 16384){
            printf("Essa coluna nao existe Tobias!\n");
        }
            else if((lcol1 < 'A' || lcol1 > 'Z') && (lcol1 != '\n' && lcol1 != '\0')){
                printf("Essa coluna nao existe Tobias!\n");	
            }
            else if((lcol2 < 'A' || lcol2 > 'Z') && (lcol2 != '\n' && lcol2 != '\0')){
                printf("Essa coluna nao existe Tobias!\n");
            }
            else if((lcol3 < 'A' || lcol3 > 'Z') && (lcol3 != '\n' && lcol3 != '\0')){
                printf("Essa coluna nao existe Tobias!\n");
            }
            else if(strlen(col) > 4){
                printf("Essa coluna nao existe Tobias!\n");
            }
            else {
                printf("%d\n", posTotal);
            }
            
        posTotal = 0;
	
    }

	return 0;
}