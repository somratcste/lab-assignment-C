#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,vcount=0,ccount=0,j;
    puts("Enter a line of text : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        j=str[i];
        if(j>=65 && j<=90 || j>=97 && j<=122)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
               || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
               vcount++;
               else
               ccount++;
        }
    }
    printf("Vowel numbers is : %d \nConsonant numbers is : %d",vcount,ccount);
    return 0;
}

