#include <stdio.h>
typedef int somrat;
int odd_even(int n)
{
    if(n%2==0)
    return 0;
    else
    return 1;
}
int main()
{
    somrat n,x;
    printf("Enter number : ");
    scanf("%d",&n);
    x=odd_even(n);
    if(x==0)
    printf("%d is an even number.",n);
    else
    printf("%d is an odd number.",n);
}
