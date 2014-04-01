#include <stdio.h>
typedef int somrat;
int get_fact(int n)
{
    somrat i,z=1;
    for(i=n;i>=1;i--)
    z=z*i;
    return z;
}
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    printf("\nThe factorial number %d is %d",n,get_fact(n));
    return 0;
}
