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
            if(j==1 || i==1 || i==n)
            printf("0");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    //this is end for c-shape
    // this is start for s - shape
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n)
            printf("1");
            else
            printf(" ");
        }
        printf("\n");
    }

        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if( i==n || j==n)
            printf("1");
            else
            printf(" ");
        }
        printf("\n");

    }
    printf("\n");
    //this is end for s-shape
    // and start for t-shape

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=n/2;

            if(i==1 || j==x)
            printf("0");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    //this is end for t - shape
    // and start for e-shape
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=n/2;
            if(j==1 || i==1 || i==n || i==x)
            printf("1");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
    // this stage the program is end.
}

