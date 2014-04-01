
#include <stdio.h>

int main()
{



int i, j, n, k;




printf("Enter n: ");



scanf("%d", &n);




for(i = 1; i <= n; i++){

for(j = i; j <= n; j++){
printf("%d", j);



}



printf("\n");




for(k = 1; k <= i; k++){



printf(" ");



}
}




return 0;
}
