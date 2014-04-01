#include <stdio.h>
int leap_year(int n)
{
    if(n%4==0 && n%100!=0 || n%400==0)
    return 0;
    else
    return 1;
}
int main()
{
    int n,x;
    printf("Enter your year : ");
    scanf("%d",&n);
    x=leap_year(n);
    if(x==0)
    printf("%d is a leap year.",n);
    else
    printf("%d is not a leap year.",n);
    return 0;
}
