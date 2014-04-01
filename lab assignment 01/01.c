#include <stdio.h>

void main()
{
    int a,b,c,d,e,f,g;
    printf("The first number is : ");
    scanf("%d", &a);
    printf("the Second number is : ");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a/b;
    f=a*b;
    g=a%b;
    printf("The Addition value is : %d\n", c);
    printf("The Substraction value is : %d\n",d);
    printf("The Division value is : %d\n",e);
    printf("The Multification value is : %d\n",f);
    printf("The Modulus value is : %d\n",g);
    return 0;

}
