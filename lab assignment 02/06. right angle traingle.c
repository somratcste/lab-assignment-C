#include <stdio.h>

main()
{
    int a,b,c,x,y,z;
    printf("Pls enter the three integer value by space: ");
    scanf("%d %d %d", &a, &b, &c);
    x=a*a;
    y=b*b;
    z=c*c;
    if(x==y+z || y==x+z || z==x+y)
    printf("This is possible for right angle traingle. ");
    else
    printf("This is not a right a right angle traingle. ");
    getch ();
    return 0;
}

