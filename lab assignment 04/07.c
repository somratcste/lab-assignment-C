#include <stdio.h>
int main()
{
    int i,n,sum=0,x[100];
    float average;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    average=sum/n;
    printf("The sum of value is : %d \nThe average value is : %.2f",sum,average);
    return 0;
}
