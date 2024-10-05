#include <stdio.h>
int main()
{
    int i, a, m;
    float k;
    printf("Enter the number for base to 10:\n");
    scanf("%d", &a);
    k = a / 10;
    m = k * 10;
    for (i = 1; i < 11; i++)
    {
        printf("%d\n", m + i);
    }

    return 0;
}