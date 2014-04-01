#include <stdio.h>
#include <string.h>
int get_strlen(char str1[])
{
    int i,count=0;

    for(i=0;str1[i]!='\0';i++)
    count+=1;
    return count;
}
void get_strcat(char str1[],char str2[])
{


    int n,i,j;
    i=get_strlen(str1);
    for(j=0;str2[j]!='\0';j++)
    {
        str1[i+j]=str2[j];

    }
    str1[i+j]='\0';
    return str1;
}
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    get_strcat(str1,str2);
    puts(str1);
    return 0;
}
