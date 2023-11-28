int main (){
    char soup[30], aux[30];  // String completa e aux

    scanf(" %s", soup);

    int qntp = 0, x, y, a, b, cont = 0, lolo = 0;  

    scanf(" %d", &qntp);

    char spp[qntp][30]; // Matriz cm palavras

    for (x = 0; x < qntp; x++){ // Scan para palavras 
        scanf(" %s", spp[x]);
    }

    for (x = 0; x < qntp; x++){
        for (y = 0; y < 30; y++){ // zerar aux, pois ela sempre vai guardar valores novos
            aux[y] = 0;
        }

        for (a = 0; spp[x][a] != '\0'; a++){ // Corre pelas letras da palavra
            for (b = 0; soup[b]!= '\0'; b++){ // 
                if(spp[x][a] ==  soup[b]){
                    aux[a] = spp[x][a];
                }
            }
        }

        cont = strcmp(aux, spp[x]);

        if (cont == 0){
            lolo++;
        }
    }
    printf("E possivel formar %d palavras com esse conjunto", lolo);
}
