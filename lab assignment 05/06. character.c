#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],p[200]={0};
    int i,j,k;
    printf("Enter a line of text : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {

       for(k=48;k<=122;k++)
       {
           j=str[i];
        if(j==k)
        p[k]++;
       }
    }
    for(k=48;k<=122;k++)
    {

        printf("\n%c is times for %d times",(char)k,p[k]);
    }
    return 0;
}
