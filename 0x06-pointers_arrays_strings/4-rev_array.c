#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
int p, y, i;
y = 0;
i = n - 1;
while (y < i)
{
p = *(a + y);
*(a + y) = *(a + i);
*(a + i) = p;
y++;
i--;
}
}
