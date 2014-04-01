#include <stdio.h>
int main()
{
    int i,j,n,m,x[10][10],y[10][10];
    printf("Enter how many times row and column : ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
            y[j][i]=x[i][j];

        }
    }
    printf("The transpose matrix is : ");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
