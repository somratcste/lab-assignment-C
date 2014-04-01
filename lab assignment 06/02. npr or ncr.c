#include <stdio.h>
get_fact(int n)
{
    int i,z=1;
    for(i=n;i>=1;i--)
    z=z*i;
    return z;
}
int get_npr(int n,int r)
{
    int x,y,z;
    x=get_fact(n);
    y=get_fact(n-r);
    z=x/y;
    return z;
}
int get_ncr(int n,int r)
{
    int x,y,z,p;
    x=get_fact(n);
    y=get_fact(r);
    p=get_fact(n-r);
    z=x/(y*p);
    return z;
}
int main()
{
    int n,r;
    printf("Enter the value for n and r : ");
    scanf("%d %d",&n,&r);
    printf("The n p r value is : %d\n",get_npr(n,r));
    printf("The n c r value is : %d\n",get_ncr(n,r));
    return 0;
}
