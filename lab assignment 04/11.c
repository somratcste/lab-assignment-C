#include <stdio.h>
int main()
{
    int x[100],i,n,count0=0,count1=0,count2=0,count3=0,count4=0,
    count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x[i]=rand()%11;
        printf("%d ",x[i]);
        if(x[i]==0)
        count0+=1;
        else if(x[i]==1)
        count1+=1;
        else if(x[i]==2)
        count2+=1;
        else if(x[i]==3)
        count3+=1;
        else if(x[i]==4)
        count4+=1;
        else if(x[i]==5)
        count5+=1;
        else if(x[i]==6)
        count6+=1;
        else if(x[i]==7)
        count7+=1;
        else if(x[i]==8)
        count8+=1;
        else if(x[i]==9)
        count9+=1;
        else if(x[i]==10)
        count10+=1;

}

            printf("\n0 is exist for %d times\n",count0);
             printf("1 is exist for %d times\n",count1);
              printf("2 is exist for %d times\n",count2);
             printf("3 is exist for %d times\n",count3);
               printf("4 is exist for %d times\n",count4);
             printf("5 is exist for %d times\n",count5);
              printf("6 is exist for %d times\n",count6);
             printf("7 is exist for %d times\n",count7);
               printf("8 is exist for %d times\n",count8);
             printf("9 is exist for %d times\n",count9);
              printf("10 is exist for %d times\n",count10);
              return 0;
}
