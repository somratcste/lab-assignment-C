#include <stdio.h>

main()
{
    int i,n,sum=0;
    i=1;
    printf("Enter the value : ");
    scanf("%d", &n);
    printf("The series value is : \n");
    while(i<=n)
    {
      printf("%d+",i);
      sum=sum+i;
      i++;
    }
    printf("\nThe sum of this series is : %d",sum);
    getch();
    return 0;
}
