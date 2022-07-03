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
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("x than 5");
}
if (x == 0)
{
printf("x is 0");
}
if (x < 6 && x != 0)
{
printf("x is less than 6 and not 0");
}
printf("\n");
return (0);
}
