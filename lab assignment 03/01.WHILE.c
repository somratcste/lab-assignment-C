#include <stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {


    printf("%d ",i*i);
    sum+=i*i;
    }
    printf("\nThe sum of series : %d",sum);
    return 0;
}
