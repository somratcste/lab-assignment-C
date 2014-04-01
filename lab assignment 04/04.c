#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,x[100],n,p=0,q=0;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x[i]=rand();
        printf("%d ",x[i]);
        if(x[i]%2==0)
        {
            p+=1;
        }
        else if(x[i]%2==1)
        {
            q+=1;
        }
    }
    printf("\nEven number is : %d\n",p);
    printf("Odd number is : %d",q);
    return 0;
}
