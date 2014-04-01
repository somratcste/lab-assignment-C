#include <stdio.h>
int main()
{
    int n,x[100],i;
    float p,q;
    float median;
    printf(" Enter n :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    if(n%2==1)
    {
       p=(n-1)/2;
       i=p;
       median=x[i];
    }
    else
    {
        i=(n/2-1);
        p=x[i];
        i=n/2;
        q=x[i];
        median=(p+q)/2;


    }
    printf("median =%.2f",median);
    return 0;

}
