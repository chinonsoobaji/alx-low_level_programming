#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always return 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
}
putchar (10);
return (0);
}
