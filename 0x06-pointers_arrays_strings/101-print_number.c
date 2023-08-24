#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
int i, j, digit, digits, power;
unsigned int a, b, c;
digit = 0;
if (n < 0)
{
_putchar('-');	
a = -n;
}
else
{
a = n;
}
c = a;
while (c >= 10)
{
c = c / 10;
digit++;
}
digits = digit + 1;
power = 1;
i = 1;
while (i < digits)
{
power = power * 10;
i++;
}
j = power;
while (j >= 1)
{
b = (a / j) % 10;
_putchar(b + '0');
j = j / 10;
}
}
