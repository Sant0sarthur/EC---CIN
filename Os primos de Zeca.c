/* A diferença dos quadrados */
#include <stdio.h>

int main()
{
    int a = 0, b = 0; // Pontos
    int primo3 = 0, primos1 = 0, primo2 = 0, primosdozeca = 0, i = 0;
    int w, x, y;
    int cont1 = 0, cont2 = 0, cont3 = 0, contgeral = 0;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        for (contgeral = a; contgeral <= b; contgeral++)
        { // Adiciona um valor para a
            if (contgeral % 2 != 0)
            { // se é par
                primos1 = contgeral;
                w = 1;
                for (i = 3; i * i <= primos1; i += 2)
                { // Verificca se é primo
                    if (primos1 % i == 0)
                    {
                        w = 0;
                        break;
                    }
                }
                if (w == 1)
                {
                    for (int a = primos1 - 1; a >= 2; a--)
                    { // Procura o primo menor
                        if ((a % 2 != 0) || (a == 2))
                        {
                            primo2 = a;
                            x = 1;
                            for (int b = 2; b * b <= a; b++)
                            {
                                if (a % b == 0)
                                {
                                    x = 0;
                                    break;
                                }
                            }
                            if (x == 1)
                            {
                                break;
                            }
                        }
                    }
                    for (int c = primos1 + 1; c <= 2003; c++)
                    { // Procura o primo maior
                        if (c % 2 != 0)
                        {
                            primo3 = c;
                            y = 1;
                            for (int d = 3; d * d <= c; d += 2)
                            {
                                if (c % d == 0)
                                {
                                    y = 0;
                                    break;
                                }
                            }
                            if (y == 1)
                            {
                                if ((primo2 + primo3) / 2 == primos1 && (primo2 + primo3) % 2 == 0)
                                {
                                    primosdozeca++;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
        printf("%d", primosdozeca);
    }
    else
    {
        printf("0");
    }
    return 0;
}