#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,n,sum=0;
    printf("pls give the value: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d ", sum);
    getch();
    return 0;
}
