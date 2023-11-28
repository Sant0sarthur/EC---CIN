#include <stdio.h>
#include <math.h>

int main() {
    long long int vet[100000];
    long long int cont;
    long long int k = 0, cont1 = 0, cont2 = 0;

    while (scanf("%lld", &vet[k]) != EOF){
        k++;
    } 

    for (long long int x = 0; x < k; x++){
        for (long long int y = x; y < k; y++ ){
            if(vet[x] > vet[y]){
                cont = vet[y];
                vet[y] = vet[x];
                vet[x] = cont; 
            }
        }
    }
    for (long long int a = 0; a < k; a++){
        printf("%d ", vet[a]);
    }
    printf("\n");
    for (long long int g = 0; g < k; g++){ 
        cont1 = 0;
            for (long long int h = g; h < k; h++){
                if(vet[g] == vet[g-1]){
                    break;
                }
                if(vet[g] == vet[h]){
                    cont1 += 1;
                }
                else {
                    break;
                }
            }
            if (cont1 % 2 != 0){
                printf("%d ", vet[g]);
                cont2 = 1;
            }
        }
        if (cont2 == 0){
            printf("0\n");
        }

    return 0;
}
