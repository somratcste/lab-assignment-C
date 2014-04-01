#include <stdio.h>
#include <conio.h>
int main()
{
    int n,mod,q;
    printf("Enter the value : ");
    scanf("%d", &n);
    while(1)
    {
        mod=n%10;
        printf("%d",mod);
        q=n/10;
        if(q==0)
        {
            break;
        }
        n=q;


    }

    getch();
    return 0;
}
