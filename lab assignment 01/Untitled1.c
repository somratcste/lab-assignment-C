#include <stdio.h>
#include <conio.h>
int main()
{
    int x,mod;
    printf("The x value is : ");
    scanf("%d", &x);
    printf("The postfix value of x is : %d\n",x++);
    printf("The prefix value of x is : %d\n" , ++x);
    return 0;
}
