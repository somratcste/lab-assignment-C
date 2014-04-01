#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j=1,x,n;
    printf("Enter the value of x and n: ");
    scanf("%d %d", &x,&n);
    for(i=1;i<=n;i++)
    {
        j=j*x;
    }
    printf("%d is to the power of %d is : %d", x,n,j);
    getch();
    return 0;
}
