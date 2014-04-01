#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],p[200]={0};
    int i,j,k,s;
    printf("Enter a line of text : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)

    {
        j=str[i];
        if(j>=65 && j<=90 || j>=97 && j<=122){
        for(s=65; s<=122 ; s++){
           {


        if(j==s)
        p[s]++;
           }
        }
        }
    }
    for(s=65; s<=122 ; s++)
    {
        if(s>=65 && s<=90 || s>=97 && s<=122){



        printf("\n%c is times for %d times",(char)s,p[s]);

          }

    }

    return 0;

}
