#include <stdio.h>
int main()
{
    int a, n = 0;
    a = -999999999;
    int arrey[] = {1, 2, 3000, 109, 0, 5, 8, 89, 4000};
    for (int i = 0; i < sizeof(arrey) / sizeof(int); i++)
    {
        if (arrey[i] > a)
        {
            a = arrey[i];
            n=i;
        }
    }
    printf("THE LARGEST NUMBER IS :%d\n", a);
    printf("THE INDEX OF LARGEST NUMBER IS:%d\n", n);
    int b, m = 0,j=0;
    b = 999999999;
    int array[] = {1, 2, 3000, 109, 0, 5, 8, 89, 4000};
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (array[i] < b)
        {
            b = array[i];
            j=i;
        }
    }
    printf("THE SMALLEST NUMBER IS : %d\n", b);
    printf("THE INDEX OF SMALLEST NUMBER IS:%d\n", j);
    return 0;
}