#include <stdio.h>
main()
{
    int i=1,sum=0,n;
    printf("Enter n : ");
    scanf("%d",&n);
    do{
    printf("%d ",i*i);
    sum+=i*i;
    i+=2;


    }while(i<=n);

    printf("\nThe sum of series is :%d",sum);


}
