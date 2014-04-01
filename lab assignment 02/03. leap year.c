#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Pls enter your year: ");
    scanf("%d", &a);
    if((a%4==0) && (a%100 !=0) || (a%400==0))
    printf("\nThis year is leap year .");
    else
    printf("\nThis year is not leap year. ");
    return 0;
}
