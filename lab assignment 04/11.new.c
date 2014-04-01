#include <stdio.h>
int main()
{
    int x[100],i,n,j[20]={0};
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x[i]=rand()%11;
        printf("%d ",x[i]);
        if(x[i]==0)
        j[0]+=1;
        else if(x[i]==1)
        j[1]+=1;
        else if(x[i]==2)
        j[2]+=1;
        else if(x[i]==3)
        j[3]+=1;
        else if(x[i]==4)
        j[4]+=1;
        else if(x[i]==5)
        j[5]+=1;
        else if(x[i]==6)
        j[6]+=1;
        else if(x[i]==7)
        j[7]+=1;
        else if(x[i]==8)
        j[8]+=1;
        else if(x[i]==9)
        j[9]+=1;
        else if(x[i]==10)
        j[10]+=1;

}
           for(i=0;i<=10;i++)
           {
               printf("\n\t%d\t is exist for\t %d\t times",i,j[i]);
           }
              return 0;
}
