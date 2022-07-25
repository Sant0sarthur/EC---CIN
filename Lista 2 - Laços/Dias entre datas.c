#include <stdio.h>

int main()
{
    int d1, d2, m1, m2, a1, a2;
    int cont1, cont2;
    long int t1;
    long int t2;
    scanf("%d/%d/%d\n", &d1, &m1, &a1);
    scanf("%d/%d/%d", &d2, &m2, &a2);
    t1 = (365 * a1) - 365;
    t2 = (365 * a2) - 365;

    for (cont2 = 0; cont2 < a1; cont2++)
    {
        if ((cont2 % 4 == 0 && cont2 % 100 != 0) || cont2 % 400 == 0)
        {
            t1++;
        }
    }
    if ((a1 % 4 == 0 && a1 % 100 != 0) || a1 % 400 == 0)
    {
        for (cont1 = 1; cont1 < m1; cont1++)
        {
            if (cont1 == 1 || cont1 == 3 || cont1 == 5 || cont1 == 7 || cont1 == 8 || cont1 == 10 || cont1 == 12)
            {
                t1 += 31;
            }
            else if (cont1 == 2)
            {
                t1 += 29;
            }
            else
            {
                t1 += 30;
            }
        }
    }
    else
    {
        for (cont1 = 1; cont1 < m1; cont1++)
        {
            if (cont1 == 1 || cont1 == 3 || cont1 == 5 || cont1 == 7 || cont1 == 8 || cont1 == 10 || cont1 == 12)
            {
                t1 += 31;
            }
            else if (cont1 == 2)
            {
                t1 += 28;
            }
            else
            {
                t1 += 30;
            }
        }
    }

    t1 += d1;
    for (cont2 = 0; cont2 < a2; cont2++)
    {
        if ((cont2 % 4 == 0 && cont2 % 100 != 0) || cont2 % 400 == 0)
        {
            t2++;
        }
    }
    if ((a2 % 4 == 0 && a2 % 100 != 0) || a2 % 400 == 0)
    {
        for (cont1 = 1; cont1 < m2; cont1++)
        {
            if (cont1 == 1 || cont1 == 3 || cont1 == 5 || cont1 == 7 || cont1 == 8 || cont1 == 10 || cont1 == 12)
            {
                t2 += 31;
            }
            else if (cont1 == 2)
            {
                t2 += 29;
            }
            else
            {
                t2 += 30;
            }
        }
    }
    else
    {
        for (cont1 = 1; cont1 < m2; cont1++)
        {
            if (cont1 == 1 || cont1 == 3 || cont1 == 5 || cont1 == 7 || cont1 == 8 || cont1 == 10 || cont1 == 12)
            {
                t2 += 31;
            }
            else if (cont1 == 2)
            {
                t2 += 28;
            }
            else
            {
                t2 += 30;
            }
        }
    }
    t2 += d2;

    printf("%ld", t2 - t1);

    return 0;
}