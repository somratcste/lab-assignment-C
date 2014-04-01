#include<stdio.h>
int  main()
{
    int i,j,n,x;
    printf(" Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    for (j=1;j<=n;j++)
    {
        if(j==1 ||  i==j || j==n)
        printf("\a*");
    else
      printf(" ");

    }
    printf("\n");
    }
    // this is for N shape
    // this is start for S shape

for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n)
            printf("\a*");
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
            printf("\a*");
            else
            printf(" ");
        }
        printf("\n");

    }

    // this is for S- shape
    // this is start for t shape

for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=n/2;


            if(i==1 || j==x)
            printf("\a*");
            else
            printf(" ");
        }
        printf("\n");
    }
    // this is for T-shape
    // and start for u shape

for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || i==n || j==n)
            printf("\a*");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
    // this is for u shpae
    // and the programme is finish.
}
