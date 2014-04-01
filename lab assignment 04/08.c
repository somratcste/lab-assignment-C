#include <stdio.h>
int main()
{
    int n,i,x[100],max,min;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(i==0)
        {
            max=x[0];
            min=x[0];
        }
        if(max<x[i])
        max=x[i];
        else if(min>x[i])
        min=x[i];
    }
    printf("The maximum value is : %d \nThe minimum value is : %d",max,min);
    return 0;
}
