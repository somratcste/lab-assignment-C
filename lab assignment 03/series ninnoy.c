#include <stdio.h>
#include <conio.h>
int main()
{
    int i,range;
    printf("pls give the range value: ");
    scanf("%d", &range);
    for(i=1;i<=range;i++)
    {
        printf("%d+", i*i);

    }
    getch();
    return 0;

}
