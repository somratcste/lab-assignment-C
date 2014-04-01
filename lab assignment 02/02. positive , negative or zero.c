#include <stdio.h>
#include <conio.h>
int main()
{
    float x;
    printf("The value of x is : ");
    scanf("%f", &x);
    if(x==0)
    {
        printf("The value of x is zero.");
    }
    else if (x>0)
    {
        printf("The value of x is positive.");
    }
    else
    {
        printf("The value of x is negative.");
    }
    getch();
    return 0;
}
