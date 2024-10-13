#include <stdio.h>
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 78, 9, 19, 34, 54, 76, 74, 23, 12};
    
        int i=0;
        printf("the even number are:\n");
        for (int i = 0; i < 15; i++){
            if (arr[i] % 2 == 0){
                printf("%d\t", arr[i]);
            }
        }
        printf("\n");

        printf("the odd number are:\n");
        for (int i = 0; i < 15; i++){
            if (arr[i]%2 == 1){
                printf("%d\t", arr[i]);
            }
        }
    
    return 0;
}