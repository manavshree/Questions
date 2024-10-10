#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float s,k,m;
    printf("Enter first side of triangle:\n");
    scanf("%d",&a);
    printf("Enter second side of triangle:\n");
    scanf("%d",&b);
    printf("Enter third side of triangle:\n");
    scanf("%d",&c);
    s=(a+b+c)/2;
    m=s*(s-a)*(s-b)*(s-c);
    k=sqrt(m);
    printf("area of triangle is %f\n",k);
    return 0;
}