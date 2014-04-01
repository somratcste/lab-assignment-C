#include<stdio.h>
int  main()
{
    int i,j,n,x,k;
    printf(" Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    for (j=1;j<=n;j++)
    {
        if(j==1 ||  i==j || j==n)
        printf("*");
    else
      printf(" ");

    }
    printf("\n");
    }
    printf("\n\n\n");// that is used for the end n
    //and print next after the three new line.
    // this is for N shape
    // this is start for S shape

for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n)
            printf("*");
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
            printf("*");
            else
            printf(" ");
        }
        printf("\n");

    }
    printf("\n\n\n");

    // this is for S- shape
    // this is start for t shape

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
    printf("\n\n\n");
    // this is for T-shape
    // and start for u shape

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
    printf("\n\n\n");
//this is end for u shape
// and start for cste shape

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
    printf("\n\n\n");
    //this is end for c-shape
    // this is start for s - shape
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n)
            printf("*");
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
            printf("*");
            else
            printf(" ");
        }
        printf("\n");

    }
    printf("\n\n\n");
    //this is end for s-shape
    // and start for t-shape

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
    printf("\n\n\n");

    //this is end for t - shape
    // and start for e-shape
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
     printf("\n\n\n");
    //this is start for 7-shape

    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            if(i==1)
            printf("*");
            else


            printf(" ");
        }

        for(k=n;k>n-i;k--)
        {
            if( k==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");

    }
    getch();
    return 0;

}
