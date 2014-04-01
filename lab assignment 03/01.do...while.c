#include <stdio.h>
main()
{
    int i,sum=0,n;
    printf("Enter n : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
     printf("%d ",i*i);
     sum+=i*i;
     i+=2;
    }
    printf("\nThe sum of series is : %d",sum);
}
