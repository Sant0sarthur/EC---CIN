#define mov(g,h) printf("%c = %c\n", g, h);
#define add(g,h) printf("%c += %c\n", g, h);
#define sub(g,h) printf("%c -= %c\n", g, h);
#define and(g,h) printf("%c = %c & %c\n", g, g, h);

int main(){
    int tam;
    int k;

    scanf("%d", &tam);

    char x, y;
    char inst[4];

    for(k=0; k<tam; k++){
        scanf("%s %c, %c", inst, &x, &y);

        if(strcmp(inst, "mov")==0){
            mov(x, y);
        }
        if(strcmp(inst, "add")==0){
            add(x, y);
        }
        if(strcmp(inst, "sub")==0){
            sub(x, y);
        }
        if(strcmp(inst, "and")==0){
            and(x, y);
        }
    }
}
