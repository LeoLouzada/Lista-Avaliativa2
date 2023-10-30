#include <stdio.h>
#include <string.h>

int main() {

    char informacoes[11][3][50], entrada[1000];
    char *token;
    int i, len, info = 0;

    for(i = 0; i < 11; i++){
        fgets(entrada, sizeof(entrada), stdin);

        /* Remova o caractere de nova linha, se estiver presente
        len = strlen(entrada);
        if(len > 0 && entrada[len - 1] == '\n'){
            entrada[len - 1] = '\0';
        }*/

        // Dividir a linha em tokens usando ;
        token = strtok(entrada, ";");

        while(token != NULL && info < 3) {
            strcpy(informacoes[i][info], token);
            token = strtok(NULL, ";");
            info++;
        }
    }

    for(i = 0; i < 11; i++) {
        printf("Linha %d:\n", i + 1);
        for(info = 0; info < 3; info++) {
            printf("  Informacao %d: %s\n", info + 1, informacoes[i][info]);
        }
    }

    return 0;
}

