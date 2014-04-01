#include <stdio.h>
#include <string.h>
void get_strrev(char str[])
{
    int i=0,n,j;
    char x;

    n=strlen(str);
    j=n-1;
    while(i<j)
    {
       x=str[i];
       str[i]=str[j];
       str[j]=x;
       i++;
       j--;
    }
    puts(str);
}
int main()
{
    char str[100];
     gets(str);
    get_strrev(str);
    return 0;
}
