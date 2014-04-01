#include <stdio.h>
int main()
{
int x[100],i,n,k,j[20]={0};
printf("Enter n :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
x[i]=rand()%11;

for(k = 0 ;k <= 10 ; k++){
{if(x[i] == k)
continue;
}
}
printf("%d ",x[i]);
}

}

