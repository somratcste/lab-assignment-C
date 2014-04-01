#include <stdio.h>

int main()
{
    int i,j=1,n;
    printf("Enter the integer value : ");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        j=j*i;

    }
    printf("The factorial value is : %d",j);
}
