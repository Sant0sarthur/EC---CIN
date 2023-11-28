#include <stdio.h>
int main(){
    int qntSuspeitos;
    scanf("%d", &qntSuspeitos);
    char fragmento[3][11];
    char suspeitoNome[qntSuspeitos][21];
    char suspeitoDNA[qntSuspeitos][51];
    char *aux;
    int cont[qntSuspeitos], cont2[qntSuspeitos]; // cont2 -> qntd de dna         cont1-> tamnh do dna
    int i;
    for(i=0; i<3; i++){
        scanf(" %s", fragmento[i]);
    }
    for(i=0; i<qntSuspeitos; i++){
        scanf(" %s - %s", suspeitoNome[i], suspeitoDNA[i]);
        cont[i] = 0;
        cont2[i] = 0;
    }
    int j, k;
    char *lolo;
    for(i=0; i<qntSuspeitos ; i++){
        lolo = 0;
        for(j=0; j<3 ;j++){
            lolo = strstr(suspeitoDNA[i], fragmento[j]);
            if(lolo != NULL){
                cont2[i]++;
                cont[i] += strlen(fragmento[j]); 
            }
        }
    }
    for (i = 0; i < qntSuspeitos-1; i++){
        for (j = i; j < qntSuspeitos; j++ ){
            if(cont2[i] > cont2[j]){
                int temp = cont2[j];
                cont2[j] = cont2[i];
                cont2[i] = temp;
                char temp2[21];
                strcpy(temp2, suspeitoNome[j]);
                strcpy(suspeitoNome[j], suspeitoNome[i]);
                strcpy(suspeitoNome[i], temp2);
                temp = cont[j];
                cont[j] = cont[i];
                cont[i] = temp;
            }
        }
    }
    if(cont2[qntSuspeitos-1] != cont2[qntSuspeitos-2]){
        printf("X reponsavel por essa atrocidade foi %s!", suspeitoNome[qntSuspeitos-1]);
    }
    else {
        if (cont[qntSuspeitos-1] > cont[qntSuspeitos-2]){
            printf("X reponsavel por essa atrocidade foi %s!", suspeitoNome[qntSuspeitos-1]);
        }
        else if (cont[qntSuspeitos-1] < cont[qntSuspeitos-2]){
            printf("X reponsavel por essa atrocidade foi %s!", suspeitoNome[qntSuspeitos-2]);
        }
        else {
            printf("Nao pegamos x pilantra desse vez...");
        }
    }
}
