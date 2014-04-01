#include <stdio.h>
#include <string.h>
char get_strupr(char str1[])
{
    int i,j=0;
    gets(str1);
    for(i=0;str1[i]!='\0';i++){
    str1[j]=str1[i]-32;
    j++;
    }
    puts(str1);
}
int main()
{
    char str1[100];
    get_strupr(str1);
    return 0;
}
