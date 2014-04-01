#include <stdio.h>
typedef int somrat;
somrat get_fact(somrat n)
{
    if(n<=1)
    return 1;
    else
    return(n*get_fact(n-1));
}
int main()
{
    somrat n;
    printf("Enter the value : ");
    scanf("%d",&n);
    printf("\nThe factorial number %d is %d",n,get_fact(n));
    return 0;
}
