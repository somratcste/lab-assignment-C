#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,n;
    printf("pls give the value : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
