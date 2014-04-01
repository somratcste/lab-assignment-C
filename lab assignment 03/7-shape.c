#include <stdio.h>
main()
{
    int i,j,n,k;
    printf("Enter n : ");
    scanf("%d", &n);
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
