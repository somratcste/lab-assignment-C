#include <stdio.h>
#include <conio.h>
void main ()
{
    float pi,r,h,volume,area;
    pi=3.1416;
    printf("The height value is h = ");
    scanf("%f",&h);
    printf("The radius value is r = ");
    scanf("%f", &r);
    volume=pi*r*r*h;
    printf("The volume of cylinder is : %f\n",volume);
    area=2*pi*r*(r+h);
    printf("The area of cylinder is : %f\n", area);
    return 0;

}
