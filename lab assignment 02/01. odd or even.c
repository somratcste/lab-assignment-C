#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Pls enter a integer number : ");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("NUMBER IS EVEN.");
    }
    else
    {
        printf("NUMBER IS ODD.");
    }
    getch();
    return 0;
}
