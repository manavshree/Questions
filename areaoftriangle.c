#include <stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter base length of triangle:\n");
    scanf("%d",&a);
    printf("Enter height length of triangle:\n ");
    scanf("%d",&b);
    c=(a*b)/2;
    printf("The area of triangle is:%f",c);
    return 0;
}