#include <stdio.h>
#include <string.h>
char get_strcpy(char str1[],char str2[])
{

    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    puts("Enter your copy string : ");
    puts(str2);
}
int main()
{
    char str1[100],str2[100];
    puts("Enter the main strig : ");
     gets(str1);
    get_strcpy(str1,str2);
    return 0;
}
