#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int min(int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("Maximum number is : %d\n",max(a,b));
    printf("Minimum number is : %d\n",min(a,b));
}
