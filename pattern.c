#include <stdio.h>
int main()
{
  int n, k, m;
  printf("enter the number of row you want:\n");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {

    for (int j = 0; j < (n)-i; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
      k = 49 + j;
      printf("%c", k);
    }
    for (m = k; m > 49; m--)
    {

      printf("%c", m-1 );
    }
    printf("\n");
  }
  return 0;
}
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char name[50];
//     printf("enter your name:\n");
//     gets(name);
//     printf("your name is:\n");
//     puts(name);              //for name with spaces....we use gets and puts.

//     return 0;
// }