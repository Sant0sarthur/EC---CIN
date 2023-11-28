int main(){
    unsigned int tam, x, i, j, k;
    unsigned int soma1= 0, soma2 = 0;
    unsigned int lolo = 0;
    scanf("%d", &tam);

    char valores[tam*tam][31], aux[31];
    unsigned int mat[tam][tam];

    for (x = 0; x < (tam * tam); x++)
    {
        scanf(" %s", valores[x]);
    }

    for (i = 0; i < tam; i++){ // Organiza valores 
        for (j = 0; j < tam; j++){
            if((i+j) % 2 == 0){
                soma1 = 0;
                for (int k = 0; valores[lolo][k] != '\0'; k++){
                    if (k%2==0){
                        soma1 += valores[lolo][k];
                    }
                }
                mat[i][j] = soma1;
            }
            else{
                soma2 = 0;
                for (k = 0; valores[lolo ][k] != '\0'; k++){
                    if (k%2!=0){
                        soma2 += valores[lolo][k];
                    }   
                }
                mat[i][j] = soma2;
            }
            lolo++;
        }
    }
    soma1 = 0;
    soma2 = 0;
    for (i = 0; i < tam; i++){ // soma valores 
        for (j = 0; j < tam; j++){
            if((i+j)%2==0){
                soma1+=mat[i][j];
            }
            else{
                soma2+=mat[i][j];
            }

        }
    }
    if (soma1 == soma2){
        printf("Tivemos um empate em %d pontos!", soma1);
    }
    else if (soma1>soma2){
        printf("Os pares venceram com %d pontos!", soma1);
    }
    else{
        printf("Os impares venceram com %d pontos!", soma2);
    }

}
