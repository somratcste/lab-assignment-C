#include <stdio.h>
int main()
{
int a[100];
int i,j,n;
printf("Enter n : ");
scanf("%d", &n);
for( i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
for(j=n-1;j>=0;j--)
{
printf("%d ", a[j]);
}
return 0;
}

