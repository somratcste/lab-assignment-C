#include <stdio.h>
int main()
{
int time;

printf("How long would you like the timer set for?\n");
printf("Enter the number of seconds here:");
scanf(" %d", &time);
while (0 <= time)
{
printf("%d\n", time);
time--;
}
printf("Your food is now burnt!!!\n");
}
