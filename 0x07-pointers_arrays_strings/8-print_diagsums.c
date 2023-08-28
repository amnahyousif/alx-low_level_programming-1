#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int n, x, y;
n = 0;
x = 0;
for (y = 0; y < size; y++)
{
n = n + a[y * size + y];
}
for (y = size - 1; y >= 0; y--)
{
x += a[y * size + (size - y - 1)];
}
printf("%d, ", n);
printf("%d\n", x);
}
