#include <stdio.h>
main()
{
    int i=1,n;
    printf("Enter the value : ");
    scanf("%d", &n);
    printf("The series value is : \n");
    while(i<=n)
       {
        printf("%d+",i);
        i++;
    }
    getch();
    return 0;
}
