#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,n,x,y,z;
    printf("enter n : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=n/2;

            if(i==1 || j==x)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
