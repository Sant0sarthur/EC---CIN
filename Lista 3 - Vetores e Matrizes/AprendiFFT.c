#include <stdio.h>
#include <math.h>

int main() {
    long long int grau1, grau2; // grau um e dois
    long long int cont = 1; // contador
    while(scanf("%lld %lld", &grau1, &grau2) != EOF){ // EOF para scan
        long long int a, b; // conts para for
        long long int x[grau1 + 1], y[grau2 + 1]; // Vetores 
        long long int z[grau1 + 1][grau2 + 1]; // Vetor bidm
        long long int g[2000] = {0}; //

        for (a = 0; a <= grau1; a++){ // Scan para vetor x
            scanf("%lld", &x[a]);
        }
        for (a = 0; a <= grau2; a++){ // Scan para vetor z
            scanf("%lld", &y[a]);
        }

        for (a = 0; a < grau1 + 1; a++){ // Valores da matriz bidmensinoal 
            for (b = 0; b < grau2 + 1; b++){
                z[a][b] = x[a] * y[b];
            }
        }
        for (a = 0; a < grau1 + 1; a++){ // Vetor final recebe valor da matriz
            for (b = 0; b < grau2 + 1; b++){
                g[a + b] += z[a][b];
            }
        }
        printf("\nCaso #%lld:", cont); // Imprime a fala
        for(a = 0; a <= grau1 + grau2; a++){
            printf(" %d", g[a]);  // Imprime o valor do vetor da linha 28
        }
        cont++;
    }
    return 0;
}
