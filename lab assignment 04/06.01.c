#include <stdio.h>
int main()
{
    int i,j,x[10][10],y[10][10],z[10][10],n,sum=0;
    printf("Enter matrix size : ");
    scanf("%d",&n);
    printf("Enter your first Matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("Enter your second Matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    printf("Addition of two matrix :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           sum=0;
            sum+=x[i][j]+y[i][j];
            z[i][j]=sum;
            printf("%d\t",z[i][j]);
        }
        printf("\n\t\t\t");
    }
    return 0;

}
