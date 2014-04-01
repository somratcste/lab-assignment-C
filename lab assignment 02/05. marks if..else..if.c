#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Pls enter your marks: ");
    scanf("%d", &x);
    if(x<=100 && x>=80)
    printf("Your grade is A+");
    else if(x<=7934 && x>=70)
    printf("Your grade is A");
    else if(x<=69 && x>=60)
    printf("Your grade is B+");
    else if(x<=59 && x>=50)
    printf("Your grade is B");
    else if(x<=49 && x>=40)
    printf("Your grade is C");
    else
    printf("Your grade is F");
    getch();
    return 0;
}
