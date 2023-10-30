#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int matrizA[4][4], matrizB[4][4], matrizR[4][4], i, j, x, aux = 0;
    char operacao[30];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", &operacao);

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(strcmp(operacao, "soma") == 0){
                matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
            }else if(strcmp(operacao, "sub") == 0){
                matrizR[i][j] = matrizA[i][j] - matrizB[i][j];
            }if(strcmp(operacao, "mult") == 0){
                matrizR[i][j] = 0;
                for(x = 0; x < 4; x++) {
                    aux = aux +  matrizA[i][x] * matrizB[x][j];
                }
                matrizR[i][j] = aux;
                aux = 0;
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%4d", matrizR[i][j]);
        }
        printf("\n");
    }

    return 0;
}
