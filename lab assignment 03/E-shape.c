#include <stdio.h>
int main()
{
    int i,j,n,x;
    printf("pls enter n : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=n/2;
            if(j==1 || i==1 || i==n || i==x)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
