#include <stdio.h>
#include <conio.h>
int odd_even(int n)
{
     int x;
    printf("\n\nEnter your number : ");
    scanf("%d",&x);
    if(x%2==0)
    printf("\n\t%d The number is even.\n\n\n",x);
    else
    printf("\n\t%d The number is odd\n\n\n",x);
}
int leap_year(int n)
{
    int x;
    printf("\n\nEnter your year : ");
    scanf("%d",&x);
    if(x%4==0 && x%100!=0 || x%400==0)
    printf("\n\tThe year %d is a leap year.\n\n\n",x);
    else
    printf("\n\tThe year %d is not a leap year.\n\n\n",x);
}
int prime_num(int n)
{
    int x,i,y;
    printf("\n\nEnter your number : ");
    scanf("%d",&y);
    for(i=2;i<y;i++){
        x=y%i;
        if(x==0)
        break;
    }
        if(i==y)
        printf("\n\tThe number %d is prime number.\n\n\n",y);
        else
        printf("\n\tThe number %d is not prime number.\n\n\n",y);

}
int get_fact(int n)
{
    int i,z=1,x;
    printf("\nEnter your number : ");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    z=z*i;
    printf("\n\tThe factorial value is : %d\n\n\n",z);
}
int fibonacci_series(int n)
{
    int x,i,a=0,b=1,p;
    printf("\n\nHow longs for fibonacci series : ");
    scanf("%d",&x);
    printf("\n\t");
    for(i=0;i<x;i++)
    {
        p=a+b;
        a=p;
        b=p-b;
        printf("%d ",p);
    }
    printf("\n\n\n");
}
int main()
{
    int n,i;
    while(1){
    printf("\n\t\t\t\t1. Odd or Even \n\t\t\t\t2. Leap Year \n\t\t\t\t3. Prime or Not Prime \n\t\t\t\t4. Factorial \n\t\t\t\t5. Fibonacci Series \n\t\t\t\t6. Exit\n");
    printf("\nPlease enter what's type your operation : \n");
    scanf("%d",&n);
    switch(n)
    {

        case 1:
        printf("\nDear user you chose the operation for Odd-Even number.");
        odd_even(n);
        break;


        case 2:
        printf("\nDear user you chose the operation for leap year.");
        leap_year(n);
        break;

        case 3:
        printf("\nDear user you chose the operation for Prime or Not prime.");
        prime_num(n);
        break;

        case 4:
        printf("\nDear user you chose the operation for Factorial number.");
        get_fact(n);
        break;

        case 5:
        printf("\nDear user you chose the operation for Fibonacci series.");
        fibonacci_series(n);
        break;


        default:
        printf("\n\tYou chosing the program exit\n\tThanks a lot for using this\n\tGood Bye.");
        return 0;

        }
    }
    getch();

}
