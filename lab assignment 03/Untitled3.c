
#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Enter n: ");
scanf("%d", &n);

for(i = 1; i <= n; i++){

for(k = n; k > i; k-- ){
printf(" ");
}
for(j = n; j > n-i; j--){
printf("%d", j);
}
printf("\n");
}

return 0;
}
