#include <stdio.h>
main()
{
    int i,j=0,n,x;
    printf("Enter n : ");
    scanf("%d", &n);
    for(i=1;i<=n;i+=2)
    {
        x=i*i;
        printf("%d ",x);
        j=j+x;
    }
    printf("\nThe sum of this series : %d",j);
}
