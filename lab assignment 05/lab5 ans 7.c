#include<stdio.h>
#include<string.h>

void main(){
    int n,x,y,z,c;
char onetotwen[23][15]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven",
                        "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eightteen",
                        "nineteen","twenty"};

char hd[11][10]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","nienty","hundred"};

printf("enter your number ");

scanf("%d",&n);
printf("\n\n");
if(n>=1000)
printf("you have exited limit\n");
if(n<=20){

printf("%d -> %s\n",n,onetotwen[n-1]);


}
if(n>20&&n<100){

x=n%10;

 if(x==0){
    z=n/10;
printf("%d ->%s\n",n,hd[z-1]);

}

else{
y=n/10;
printf("%d ->%s %s\n",n,hd[y-1],onetotwen[x-1]);
}
}

if(n>=100&&n<1000){
x=n%10;

if(x==0){
y=n/10;
z=y/10;
c=y%10;
printf("%d ->%s %s %s\n",n,onetotwen[z-1],hd[9],hd[c-1]);
}

else{
y=n/10;
z=y/10;
c=y%10;

if(c>1||c==0)
printf("%d ->%s %s %s %s\n",n,onetotwen[z-1],hd[9],hd[c-1],onetotwen[x-1]);

if(c==1)
printf("%d ->%s %s %s\n ",n,onetotwen[z-1],hd[9],onetotwen[x+9]);

}
}
}
