#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    puts("Enter first string : ");
    gets(str1);
    puts("Enter second string : ");
    gets(str2);
    puts("The result is : ");
    if(strcmp(str1,str2)==0)
    puts(str1);
    else
    {
        strcat(str1," ");
        strcat(str1,str2);
        puts(str1);
    }
    return 0;
}
