#include stdio.h

int main(){

    unsigned short int i = 0, j = 0, tam1; // Paramentros de controle

    scanf("%d", &tam1);

    unsigned char carro[tam1][10], aux[10]; // Cria?ao da matriz do carro

    for (i = 0; i < tam1; i++){ // Scan da matriz carro
        scanf("%s", carro[i]);
    }

    for (i = 1; i < tam1; i++) { 
        for (j = 1; j < tam1; j++) {
            if (strcmp(carro[j - 1], carro[j]) > 0) { // Verifica as posi??es e faz as trocas
                strcpy(aux, carro[j - 1]);
                strcpy(carro[j - 1], carro[j]);
                strcpy(carro[j], aux);
            }
        }
    }

    unsigned short int tam2;

    scanf("%d", &tam2);

    unsigned char moto[tam2][20]; // Cria?ao da matriz da moto

    for (i = 0; i < tam2; i++){ // Scan da matriz da moto
        scanf("%s", moto[i]);
    }

    for (i = 1; i < tam2; i++) { 
        for (j = 1; j < tam2; j++) {
            if (strcmp(moto[j - 1], moto[j]) > 0) { // Verifica as posi??es e faz as trocas
                strcpy(aux, moto[j - 1]);
                strcpy(moto[j - 1], moto[j]);
                strcpy(moto[j], aux);
            }
        }
    }

    unsigned short int n1, n2;
    scanf("%d %d", &n1, &n2); // Verifica posi??es 
    if ((strcmp(carro[n1-1], moto[n2-1]) == 0)){
        printf("Quem ganhou tudo hoje foi %s", carro[n1-1]);
    }
    else{
        printf("Quem ganhou o carro foi: %s\nQuem ganhou a moto foi: %s", carro[n1-1], moto[n2-1]);
    }

}
