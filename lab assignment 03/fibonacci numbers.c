#include <stdio.h>

main()
{
    int a=0,b=1,x,n,i;
    printf("enter n :");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
  {
      x=a+b;
      printf("%d ",x);
      a=x;
      b=x-b;

    }
    return 0;
}
