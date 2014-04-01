#include <stdio.h>
#include <string.h>
char get_strstr(char str1[],char str2[])
{
    char pos;
    pos=strstr(str1,str2);
    if(pos)
    printf("%s found.",str2);
    else
    printf("Not fonde %s",str2);
}
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    get_strstr(str1,str2);
    return 0;
}
