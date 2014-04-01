#include <stdio.h>
#include <string.h>
char get_strcmp(char str1[],char str2[])
{
    int i=0;
    while(str1[i]==str2[i] && str1[i] !='\0' && str2[i]!='\0')
    i++;

    if(str1[i] == '\0' && str2[i]== '\0')
    puts("Two string are equal.");
    else
    puts("Two string are not equal.");
}
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    get_strcmp(str1,str2);
    return 0;
}
