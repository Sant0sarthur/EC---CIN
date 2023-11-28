#include <stdio.h>


int main (){
    int lg, tm;
    scanf("%d\n", &tm);
    int sequen[tm];

    for (int a = 0; a < tm; a++){
        scanf("%d", &sequen[a]);
        if (a == 0 && sequen[a] != 1){
                printf("Sherliro achou o termo 1 que deveria estar na posicao 1");
                break;
        }
        if (a == 1 && sequen[a] != 1){
                printf("Sherliro achou o termo 1 que deveria estar na posicao 2");
                break;
        }
        if (a > 1){
            lg = (sequen[a-1]) + (sequen[a-2]);
            if (sequen[a] != lg ){
                printf("Sherliro achou o termo %d que deveria estar na posicao %d", lg, a+1);
                break;
            }
        }
    }
    return 0;
}
