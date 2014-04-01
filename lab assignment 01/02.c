#include <stdio.h>
#include <conio.h>
int main()
{
    int c,d,e;
    printf("The value of C is : ");
    scanf("%d", &c);
    printf("The value of D is : ");
    scanf("%d", &d);
    e=c;
    c=d;
    d=e;
    printf("The value of C is : %d\n", c);
    printf("The value of D is : %d\n", d);
    return 0;
}
