int main()
{
    int a = 0, b = 0, c = 0, d = 0, n, e, f = 0, v = 0, i = 0;
    char letra;
    while (v == 0)
    {
        scanf("%c", &letra);
        if (letra == ' ' || letra == '\n' || letra < 65 || (letra > 90 && letra < 97) || letra > 122)
        {
            v = 1;
        }
        else
        {
            a += letra;
        }
        letra = 0;
    }
    if (a % 17 == 0)
    {
        printf("Agora estou Putin, Bonxai!");
    }
    else
    {
        n = a;
        while (a % 2 == 0)
        {
            b = 0;
            b++;
            a = a / 2;
        }
        c += b;
        for (i = 3; i <= n; i = i + 2)
        {
            b = 0;
            while (a % i == 0)
            {
                a /= i;
                b = 0;
                b++;
            }
            d += b;
        }
        c += d;

        if (a != 1)
        {
            b = 0;
            b++;
        }
        c += b;
        if (c >= 3)
        {
            n = n * 3;
        }
        for (int i = 1; i <= 6; i++)
        {
            scanf("%d", &e);
            f += e;
            if (f == n)
            {
                printf("Parabueins! Voce ajudou Bonxai a escapar.");
                break;
            }
            if (f > n)
            {
                printf("Agora voce passou dos limites!");
                break;
            }
        }
        if (f < n)
        {
            printf("Bonxai foi de base.");
        }
    }
}