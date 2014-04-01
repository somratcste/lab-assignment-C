#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    printf("Pls enter your marks: ");
    scanf("%d", &x);
    if(x<0 || x>100)
    printf("HOw funny");
    else
    {


    switch (y=x/10)
    {
        case 10:
        case 9:
        case 8:
        printf("Your grade is A+");
        break;

        case 7:
        printf("Your grade is A");
        break;

        case 6:
        printf("Your grade is B+");
        break;

        case 5:
        printf("Your grade is B");
        break;

        case 4:
        printf("Your grade is C");
        break;

        default :
        printf("Your grade is F");
        break;
    }
    }
    getch();
    return 0;
}
