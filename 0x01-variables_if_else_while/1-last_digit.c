#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always return 0
 */
int main(void)
{
int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
{
printf("x than 5");
}
if (lastd == 0)
{
printf("lastd is 0");
}
if ("lastd < 6 && lastd != 0")
{
printf("lastd is less than 6 and not 0");
}
printf("\n");
return (0);
}
