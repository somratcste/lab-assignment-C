#include<stdio.h>
void main()
{
int n,m,a,b,gcd;
printf("\n enter two numbers ");
scanf("%d %d",&a,&b);
n=a;
m=b;
while(n!=m)
{
if(n>m)
n=n-m;
else
m=m-n;
}
gcd=n;

printf("\n GCD of %d and %d is=%d",a,b,gcd);
}
