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
    int array[] = {1, 28, 90,5,  32, 40, 5};
    int k = sizeof(array) / sizeof(int);
    for (int i = 0; i < k/2; i++)
    {
        swaps(&array[i], &array[k-i-1]);
    }
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}