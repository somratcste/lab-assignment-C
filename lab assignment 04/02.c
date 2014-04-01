#include <stdio.h>
int main()
{
    int i,n,x[100];
    float sum=0,average;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    average=sum/n;
    for(i=0;i<n;i++)
    {
        if(average<x[i])

        printf("This value large from average and this is :%d\n",x[i]);
    }
    return 0;

}
