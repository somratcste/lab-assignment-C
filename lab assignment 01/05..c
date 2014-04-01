#include <stdio.h>
#include <conio.h>
#define p=3.1416
void main()
{
    float r,h,volume;
    printf("The height value is : ");
    scanf("%d", &h);
    r=4;
    volume=p*r*r*h;
    printf("The volume is : %f", volume);
    return 0;
}
