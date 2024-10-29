// #include <stdio.h>

// int area(int a,int b)
// {
//    int c;
//    c=a*b;
//    return (c);
    
// }
// //area of circle and cylinder:
// float circle(int r)
// {

// float d;
// d=3.14*r*r;
// return (d);

    
// }
// int main()
// {
//   int a,b;
//   int c;
//   printf("Enter the number for length:\n");
//   scanf("%d",&a);
//   printf("Enter the number for bredth:\n");
//   scanf("%d",&b);
//   c=area(a,b);
//   printf("The area of rectangle is:%d\n",c);


//   int r;float d;
//   printf("Enter the radius of circle:\n");
//   scanf("%d",&r);
//   d=circle(r);
//   printf("The area of circle is:%f",d);
//   return 0;
      
// }
#include <stdio.h>
void changeValPTR(int* val){        //isme sidha value ka address hi change kr de rhe hai isliye pura v ka value hi change ho ja rha hai..
    *val= *val + 10;
    printf("%d\n", *val);
}

int changeValVAL(int val){         //isme value change ho rha hai pr address me previous value hi hai ye ek nya address le le rha hai....        
    val= val + 10;
    printf("%d\n", val);
    return val;
}
int main()
{
    int v = 30;
    printf("%d\n", v);
    v= changeValVAL(v);       //ye sirf value change kr rha hai print kr ke isko humlog print bhi nhi kra rhe hain kyuki ye void me hai...
    printf("%d\n", v);
    changeValPTR(&v);
    printf("%d\n", v);
    return 0;
}