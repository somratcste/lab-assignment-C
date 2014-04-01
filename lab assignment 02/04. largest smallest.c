#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("Printf three integer number: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        printf("largest value %d", a);
        else
        printf("largest value %d", c);
    }
    else
    {
        if(b>c)
        printf("largest value %d",b);
        else
        printf("largest value %d",c);
    }

    getch();

    return 0;


}
