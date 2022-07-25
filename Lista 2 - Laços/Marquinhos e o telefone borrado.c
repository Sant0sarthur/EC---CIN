/* Marquinhos e o telefone */
#include <stdio.h>

int main()
{

    int div1;
    int num1, num2, num3, xy = 0;
    int x, y, i, result1, result2;

    scanf("%d__%d-%d", &num1, &num2, &num3);

    if ((num1 != 0) && (num3 != 0))
    {
        for (i = 0; i <= 99; i++)
        {
            result1 = i / num1;
            result2 = i / num2;
            x = 0; // contador 1
            y = 0; // contador
            for (div1 = 1; div1 <= result1; div1++)
            {
                if (result1 % div1 == 0)
                {
                    x++;
                }
            }
            if (x == 2)
            {
                xy++;
                for (div1 = 1; div1 <= result2; div1++)
                {
                    if (result2 % div1 == 0)
                    {
                        y++;
                    }
                }
                if (y == 2)
                {
                    printf("%d%.2d%d-%d\n", num1, i, num2, num3);
                    xy++;
                }
            }
        }
        if (xy == 0)
        {
            printf("Marquinhos esta louco!\n");
        }
    }
    else
    {
        printf("Marquinhos esta louco!\n");
    }
    return 0;
}