#include <stdio.h>

int main()
{
    int m = 0, contagem = 0;
    int n, quantp, quanTP2;
    int andar1, andar2, andar3, ordenada;
    int xini = 0, yini = 0, zini = 0, quantent = 0;

    scanf("%d %d", &n, &m);
    quantp = n * 4;
    quanTP2 = n * 4;

    while (quantp > 0)
    {

        scanf("%d", &ordenada);
        if (m > 0)
        {
            andar3 = (ordenada) % 10;
            andar2 = ((ordenada) % 100) / 10;
            andar1 = (ordenada) / 100;

            if (xini != andar1)
            {
                if (xini < andar1)
                {
                    while (xini < andar1)
                    {
                        printf("d");
                        contagem++;
                        xini++;
                        m--;
                    }
                }
                else if (xini > andar1)
                {
                    while (xini > andar1)
                    {
                        printf("e");
                        contagem++;
                        xini--;
                        m--;
                    }
                }
            }

            if ((xini == andar1) && (yini != andar2))
            {
                if (yini < andar2)
                {
                    while (yini < andar2)
                    {
                        printf("c");
                        contagem++;
                        yini++;
                        m--;
                    }
                }
                else if (yini > andar2)
                {
                    while (yini > andar2)
                    {
                        printf("b");
                        contagem++;
                        yini--;
                        m--;
                    }
                }
            }

            if ((xini == andar1) && (yini == andar2) && (zini != andar3))
            {
                if (zini < andar3)
                {
                    while (zini < andar3)
                    {
                        printf("f");
                        contagem++;
                        zini++;
                        m--;
                    }
                }
                else if (zini > andar3)
                {
                    while (zini > andar3)
                    {
                        printf("t");
                        contagem++;
                        zini--;
                        m--;
                    }
                }
            }
            quantent++;

            printf("\nEntregue %d no quarto %d%d%d com %d movimentos\n", quantent, andar1, andar2, andar3, contagem);
        }
        quantp--;
        if (m >= 0 && quantp == 0)
        {
            printf("Todas as pessoas foram entregues.\n");
            break;
        }
        if (m < 0 && quantp > 0)
        {
            printf("Faltou combustivel e foram entregues %d pessoas.\n", (quanTP2 - quantp));
            break;
        }
    }
    printf("Fim do teste. Obrigado Kanye West!\n");
}