#include <stdio.h>
int prime_num(int n)
{
    int i,x;
    for(i=2;i<n;i++){
        x=n%i;
        if(x==0)
        break;
    }
        if(i==n)
        return 0;
        else
        return 1;

}
int main()
{
    int n,x;
    printf("Enter your number : ");
    scanf("%d",&n);
    x=prime_num(n);
    if(x==0)
    printf("%d is an prime number.",n);
    else
    printf("%d is not a prime number.",n);
    return 0;
}
