#include <stdio.h>
main()
{
    int i,j,n,x;
    printf("\n\nEnter n : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            if( i==j  )
            printf("0");
            else
            printf("1");
        }
        printf("\n");
    }
    getch();
    return 0;
}
