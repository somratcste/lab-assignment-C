#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,n;
    printf("Enter n : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || i==n || j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


