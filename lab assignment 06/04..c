#include <stdio.h>
char get_grade(int n)
{
    if(n>=80 && n<=100)
    return 'A';
    else if(n>=70 && n<=79)
    return 'B';
    else if(n>=60 && n<=69)
    return 'C';
    else if(n>=50 && n<=59)
    return 'D';
    else if(n>=40 && n<=49)
    return 'E';
    else if (n<40)
    return 'F';
}
int main()
{
    int n;
    printf("Enter you number : ");
    scanf("%d",&n);
    if(n>=0 && n<=100)
    printf("Your grade is : %c",get_grade(n));
    else
    printf("You have limit exceed.");
    return 0;

}
