#include <stdio.h>
int main()
{
    int i,j,n;
    printf("pls enter n : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || i==1 || i==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
