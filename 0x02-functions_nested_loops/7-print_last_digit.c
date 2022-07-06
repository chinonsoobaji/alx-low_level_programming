#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: The passed args
 *Return: The last digit
 */
int print_last_digit(int n);
{
int x;

n = -n;
x = n % 10;
if (n < 0)
_putchar(x + '0');
return (x);
}
