/* Equação do 2° grau */
#include <stdio.h>
int main()
{
int Valordaletra, x=1, y, c;
char letra1;

scanf("%c", &letra1);

Valordaletra = letra1 - 64; 

while (x<=Valordaletra){ 
    y = Valordaletra - 1; 
    while(y>=x){
        printf(".");
        y--;
    }
    c=1;
    while(c<=x){ 
        printf("%c", c+64);
        c++;
    }
    c-=2;
    while(c>=1){
        printf("%c", c+64);
        c--;
    }
    y = Valordaletra - 1;
    while(y>=x){
        printf(".");
            y--;
    }
    printf("\n"); 
    x++;
}        
return 0;
} 