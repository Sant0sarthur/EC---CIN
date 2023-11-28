#include <stdio.h>

int main()
{
    int a = 0, b = 0; // Linhas e colunas das matrizes
    int x, y;
    
    scanf("%d %d", &a, &b);
        
    int mt[a][b]; // Matriz normal 
    int mtp[b][a]; // Matriz inversa
    
  
    for(x=0;x<a;x++){
        for(y=0;y<b;y++){
            scanf("%d", &mt[x][y]);
        }
    }
    for(x=0;x<b;x++){
        for(y=0;y<a;y++){
            mtp[x][y] = mt[y][x];
            printf("%d ", mtp[x][y]);
        }
        printf("\n");
    }
    

    return 0;
}
