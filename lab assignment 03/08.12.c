#include <stdio.h>
int main()
{
    int i,j,range,k;
    printf("Enter n : ");
    scanf("%d", &range);
    for(i=1;i<=range;i++)
    {
        for(j=i;j<=range;j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
    }
    return 0;
}
