
#include <stdio.h>
main()
{
    int i,j=0,n;
    printf("Enter n : ");
    scanf("%d", &n);
 for(i=1;i<=n;i+=2)
 {
     printf("%d+",i);
     j=j+i;
 }
 printf("\nThe sum of that series is : %d",j);
    return 0;
}
