#include <stdio.h>
int main()
{
    int i,j,x[100],n,e;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }


    while(i=0,j=n-1,i<j)
    {



       e=i;
       i=j;
       j=e;
        printf("%d",x[i]);
       i++;
       j--;

    }

}
