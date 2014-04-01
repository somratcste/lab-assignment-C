#include <stdio.h>
#include <string.h>
char get_strlen(char str[])
{
    int i,count=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    count++;
    printf("The length of string is : %d",count);
}
int main()
{
    char str[100];
    get_strlen(str);
    return 0;
}
