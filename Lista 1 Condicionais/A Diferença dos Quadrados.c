/* A diferen�a dos quadrados */
#include <stdio.h>
#define EOF (-1)
int main(){
    int a, n1=0, n2=0;

    while(scanf("%d", &a)!=EOF){;
    if (a!=0){
        n1 = (a + 1) / 2;
        n2 = (a-1)/2;
        printf("%d - %d\n", n1*n1, n2*n2);
    }else{
    }
    }
return 0;
}