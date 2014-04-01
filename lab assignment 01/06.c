#include <stdio.h>
#include <conio.h>
int main()
{
    float pi,r,area,perimeter;
    pi=3.1416;
    printf("The Radius value is : ");
    scanf("%f", &r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf("The Area of circle : %f\n", area);
    printf("The perimeter of circle : %f\n", perimeter);
    return 0;
}
