#include <stdio.h>
void swaps(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[] = {1, 28, 90, 5, 98, 32, 40, 6};
    int k = sizeof(array) / sizeof(int);
    if (k % 2 == 0)
    {
        for (int i = 0; i < k / 2; i++)
        {
            swaps(&array[i], &array[(k / 2) + i]);
        }
        for (int i = 0; i < sizeof(array) / sizeof(int); i++)
        {
            printf("%d\t", array[i]);
        }
    }
    return 0;
}