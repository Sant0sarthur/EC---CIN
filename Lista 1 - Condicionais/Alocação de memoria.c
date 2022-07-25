#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrever(int * num, int qnt){
    int x;
    for (x = 0; x < qnt; x++){
        printf("Insira o valor da posiaco [%d]: ", x);
        scanf("%d", &num[x]);
    }
   // return (num);
}
void escrever2(int * num, int plus, int total, int qnt){
    int x;
    int z;
    z = total - 1;
    for (x = z; x < qnt; x--){
        printf("Insira o valor da posicao [%d]: ", x);
        scanf("%d", &num[x]);
    }
    //return (num);
}
void imprimir(int *num, int total){
    int x;
    for (x = 0; x < total; x++){
        printf("O valor da posicao [%d]: %d\n", x, num[x]);
    }
}

int main(){
    int qnt;
    int *num  = NULL;
    int total = 0;

    printf("Quantos numeros voce deseja alocar? ");
    scanf("%d", &qnt);
    total = qnt;

    num = calloc(qnt, sizeof(int));
    if (num == 0){
        printf("Fritou");
    }

    escrever(num, qnt);


    char resposta[3];
    printf("Foram alocadas %d notas, voce deseja alocar mais algumna? [Sim/Nao]", qnt);
    scanf("%s", resposta);
    int res;
    res = (strcmp(resposta, "Sim"));
    if (res == 0){
        int plus;
        printf("Quantas notas voce ainda deseja alocar? ");
        scanf("%d", &plus);
        total += plus;
        num = realloc(num, plus * sizeof(int));
        escrever2(num, plus, total, qnt);
        
    }

    imprimir(num, total);
    free(num);
    return (0);
}