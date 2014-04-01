#include <stdio.h>
#include <conio.h>
int main()
{
    int num,x,y,z,p,q;
    printf("The num value is : ");
    scanf("%d", &num);
    p=num/10;
    x=num%10;
    y=p%10;
    z=p/10;printf("The reverse value is : ");

    printf("%d%d%d \n", x,y,z);
    q=x+y+z;
    printf("The sum of reverse value is : %d",q);
    return 0;
}
