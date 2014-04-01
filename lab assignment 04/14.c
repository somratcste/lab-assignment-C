#include<stdio.h>
#include<conio.h>
void Union(int set1[10],int set2[10],int m,int n);
void Intersection(int set1[10],int set2[10],int m,int n);
void main()
{
{
int a[10],b[10],m,n,i,j;
int ch;
clrscr();
printf("\nEnter the no of elements in first set:");
scanf("%d",&m);
printf("\nEnter the elements:");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("\nElement of First set:\n");
for(i=0;i<m;i++)
{
printf("\t%d",a[i]);
}

printf("\nEnter the no of elements in second set:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("\nElement of second set\n");
for(i=0;i<n;i++)
{
printf("\t%d",b[i]);
}
while(1)
{
printf("\n\tMenu\n\n1.Union\n2.Intersection");
printf("\n3.exit");
printf("\nenter your choice:-");
scanf("%d",&ch);
switch(ch)
case 1:
union(a,b,m,n);
break;
case 2:
intersection(a,b,m,n);
break;
case 3:
exit(0);
}
getch();
}
}
void union(int a[10],int b[10],int m,int n)
{
int c[20],i,j,k=0,flag=0;
for(i=0;i<m;i++)
{
c[k]=a[i];
k++;
}
for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<m;j++)
{
if(b[i]==c[j])
{
flag=1;
break;
}
}
if(flag==0)
{
c[k]=b[i];
k++;
}
}
printf("\nElement of resultant set\n");
for(i=0;i<k;i++)
{
printf("\t%d",c[i]);
}
}
void intersection(int a[10],int b[10],int m,int n)
{
int c[20],i,j,k=0,flag=0;
for(i=0;i<m;i++)
{
flag=0;
for(j=0;j<n;j++)
{
if(a[i]==b[j])
{
flag=1;
break;
}
}
if(flag==1)
{
c[k]=a[i];
k++;
}
}
printf("\nElement of resultant set\n");
for(i=0;i<k;i++)
{
printf("\t%d",c[i]);
}
}
