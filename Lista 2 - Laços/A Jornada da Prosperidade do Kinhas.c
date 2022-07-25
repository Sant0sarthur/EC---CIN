#include <stdio.h>

int main()
{
    int dist, tamnh;
    int i = 0, x = 0, p = 1, y = 0, q = 0, experience = 0;
    int money = 0;
    int moedas = 0;
    int lolo = 0;

    scanf("%d %d", &dist, &tamnh);

    for (x = 0; x < dist; x++)
    {
        if (i == tamnh)
        {
            i = 0;
        }
        else
        {
            y = 0;
            q = 2;
            while (q <= i / 2)
            {
                if (i % q == 0)
                {
                    y++;
                    break;
                }
                q++;
            }
            if (y == 0 && i != 1 && i != 0)
            {
                experience += i;
                printf("%d ", i); // printar primos
            }
        }
        if (i == 7)
        {
            money++;
        }
        i++;
    }
    if (money != 0)
    {
        moedas = 1;
    }
    for (; money > 1; money--)
    {
        moedas = moedas * money;
    }
    if (moedas > 0)
    {
        printf("\nExperiencia = %d Moedas = %d", experience, moedas);
    }
    else
    {
        printf("\nExperiencia = %d Moedas = 0\n", experience);
        printf("Ja que nao achei moedas, vou na Torre\n");

        for (lolo = 0; lolo <= experience; lolo++)
        {
            if (lolo % 7 == 0 && lolo != 0)
            {
                printf("%d ", lolo);
                moedas += 30;
            }
        }
        if (moedas >= 1)
        {
            printf("\nConsegui %d moedas na Torre", moedas);
        }
        if (moedas == 0)
        {
            printf("Desisto.\n");
        }
    }
}