#include <stdio.h>
int main()
{
    int i=0,n,j[100],p,q=-1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(;;)
    {
        j[i]=n%2;
        q+=1;
        p=n/2;
        if(p==0)
        {
            break;
        }
        n=p;
        i++;
    }

    for(i=q;i>=0;i--)
    {
    printf("%d",j[i]);

    }
        return 0;
}
