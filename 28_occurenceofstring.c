#include <stdio.h>
int main()
{
    char haystack[]="manav";
    char needle[]="shreehg";

    int a=sizeof(haystack)/sizeof(haystack[0]);
   printf("%d\n",a);
   int b=sizeof(needle)/sizeof(needle[0]);
   printf("%d\n",b);
    return 0;
}