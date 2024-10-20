#include <stdio.h>
int main()
{
    int num, m = 0, i = 0;
    int s = 0;
    int array[100];

    float k;
    printf("enter the number:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        m += 1;
        k = num % 10;
        printf("%0.0f\n", k);
        array[i] = k;
        i++;
        num = num / 10;
    }
    printf("\n%d\n", m);
    for (int j = 0; j < m; j++)
    {
        printf("%d\t", array[j]);
    }
    printf("\n");
    for (int i = 0; i < m / 2; i++)
    {
        if (array[i] == array[m - i - 1])
        {
            // printf("your given number is pelindrome.\n");
            s = s + 1;
        }
        else
        {
            printf("your given number is not a pelindrome.\n");
        }
    }
    // printf("%d",s);
    if (s == (m / 2) || s == ((m - 1) / 2))
    {
        printf("your given number is pelindrome.\n");
    }

    return 0;
}