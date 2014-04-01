#include <stdio.h>
#include <conio.h>
int main()
{
    float pi,r,area,volume;
    pi=3.1416;
    printf("The radius value is : ");
    scanf("%f", & r);
    area=4*pi*r*r;
    volume =(4*pi*r*r*r)/3;
    printf("The area of sphere is : %f\n", area);
    printf("The volume of sphere is : %f\n", volume);
    return 0;
}
