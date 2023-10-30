#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jogadores{
    char nome[30];
    char posicao;
    int forca;
};

int main(){

    struct jogadores jogadorTime1[11];
    struct jogadores jogadorTime2[11];

    char time1[30], time2[30];
    int i, G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;
    double forcaTotal1, forcaTotal2;

    scanf("%s", &time1);
    for(i = 0; i < 11; i++){
        scanf("%s;%c;%d", &jogadorTime1[i].nome, &jogadorTime1[i].posicao, &jogadorTime1[i].forca);
        switch(jogadorTime1[i].posicao){
            case 'G':
                G = jogadorTime1[i].forca;
                break;
            case 'L':
                L += jogadorTime1[i].forca;
                break;
            case 'Z':
                Z += jogadorTime1[i].forca;
                break;
            case 'V':
                V += jogadorTime1[i].forca;
                break;
            case 'M':
                M += jogadorTime1[i].forca;
                break;
            case 'A':
                A += jogadorTime1[i].forca;
                break;
        }
    }

    forcaTotal1 = (8 * G + 10 * (L + Z) + 5 * (V + M) + 12 * (A)) / 100;


    scanf("%s", &time2);
    for(i = 0; i < 11; i++){
        scanf("%s;%c;%d", &jogadorTime2[i].nome, &jogadorTime2[i].posicao, &jogadorTime2[i].forca);
        switch(jogadorTime2[i].posicao){
            case 'G':
                G = jogadorTime2[i].forca;
                break;
            case 'L':
                L += jogadorTime2[i].forca;
                break;
            case 'Z':
                Z += jogadorTime2[i].forca;
                break;
            case 'V':
                V += jogadorTime2[i].forca;
                break;
            case 'M':
                M += jogadorTime2[i].forca;
                break;
            case 'A':
                A += jogadorTime2[i].forca;
                break;
        }
    }

    forcaTotal2 = (8 * G + 10 * (L + Z) + 5 * (V + M) + 12 * (A)) / 100;

    printf("%0.2lf e %0.2lf", forcaTotal1, forcaTotal2);

    return 0;
}
