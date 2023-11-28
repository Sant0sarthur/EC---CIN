#include <stdio.h>
int main() {
    int tam;
    int x;
    int deloc, final;
    scanf("%d", &tam);
    unsigned char  let[tam];
    for (x = 0; x < tam; x++){
        scanf(" %c", &let[x]);
    }
    scanf("%d", &deloc);
    for (x = 0; x < tam; x++){

        final = let[x] + deloc;
        while (final > 122){
            final -= 26;
        }
        printf("%c", final);
    }
    return 0;
} 
