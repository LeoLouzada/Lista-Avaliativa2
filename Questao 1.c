#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int valores[10], novosValores[10], i;
    int tamanho = 10, novoTamanho;

    for(i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
        if(i < 9){
            printf("%d ", valores[i]);
        }else{
            printf("%d\n", valores[9]);
        }
    }

    while(tamanho > 1){
        novoTamanho = tamanho - 1;
        for(i = 0; i < novoTamanho; i++){
            novosValores[i] = valores[i] + valores[i + 1];
        }
        for(i = 0; i < novoTamanho; i++){
            printf("%d", novosValores[i]);
            if(i < novoTamanho - 1){
                printf(" ");
            }
        }
        printf("\n");

        for(int i = 0; i < novoTamanho; i++){
            valores[i] = novosValores[i];
        }
        tamanho = novoTamanho;
    }

    return 0;
}

