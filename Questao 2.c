#include <stdio.h>
#include <string.h>

double ForcaPonderada(char nomeTime[50], double forcas[11]){
    double forcaTotal = 0, G = forcas[0], L1 = forcas[1], L2 = forcas[4], Z1 = forcas[2], Z2 = forcas[3], V1 = forcas[5], V2 = forcas[6], M1 = forcas[7], M2 = forcas[8], A1 = forcas[9], A2 = forcas[10];

    forcaTotal = (8 * G + 10 * (L1 + L2) + 5 * (Z1 + Z2) + 8 * (V1 + V2) + 11 * (M1 + M2) + 12 * (A1 + A2)) / 100;

    return forcaTotal;
}

int main(){
    char nomeTime1[50], nomeTime2[50], linha[100], nome[50], posicao;
    double forcasTime1[11] = {0}, forcasTime2[11] = {0}, forca, forcaPonderadaTime1, forcaPonderadaTime2;
    int indicie = 0;

    while(indicie < 24){
            fgets(linha, sizeof(linha), stdin);
            linha[strcspn(linha, "\n")] = '\0';
            if(linha[0] == '\0'){
                break;
            }

            if(indicie == 0){
                strcpy(nomeTime1, linha);
            }else if(indicie == 12){
                strcpy(nomeTime2, linha);
            }else{
                sscanf(linha, "%[^;];%c;%lf", nome, &posicao, &forca);

                if(indicie <= 11){
                    forcasTime1[indicie - 1] = forca;
                }else{
                    forcasTime2[indicie - 12 - 1] = forca;
                }
            }
            indicie++;
    }

    forcaPonderadaTime1 = ForcaPonderada(nomeTime1, forcasTime1);
    forcaPonderadaTime2 = ForcaPonderada(nomeTime2, forcasTime2);

    printf("%s: %.2lf de forca\n", nomeTime1, forcaPonderadaTime1);
    printf("%s: %.2lf de forca\n", nomeTime2, forcaPonderadaTime2);

    if(forcaPonderadaTime1 > forcaPonderadaTime2){
        printf("%s eh mais forte\n", nomeTime1);
    }else if(forcaPonderadaTime2 > forcaPonderadaTime1){
        printf("%s eh mais forte\n", nomeTime2);
    }

    return 0;
}
