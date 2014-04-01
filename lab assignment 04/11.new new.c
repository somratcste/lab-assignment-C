#include <stdio.h>
int main()
{
int x[100],i,n,k,j[20]={0};
printf("Enter n :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
x[i]=rand()%11;
printf("%d ",x[i]);
for(k = 0 ;k <= 10 ; k++){
{if(x[i] == k)
j[k]++;
}
}
}
    for(k=0;k<=10;k++)
    {
        printf("\n\t%d\t is exist for\t %d\t times",k,j[k]);
    }
}
