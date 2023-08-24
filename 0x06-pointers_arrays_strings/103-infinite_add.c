#include "main.h"
/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a1 = 0, b1 = 0, c = 0, a, b, sum, biggest;	
while (n1[a1] != '\0')
a1++;
while (n2[b1] != '\0')
b1++;
if (a1 > b1)
biggest = a1;
else
biggest = b1;
if ((biggest + 1) >= size_r)
return (0);
r[biggest + 1] = '\0';	
while (biggest >= 0)
{
a = (n1[a1 - 1] - '0');
b = (n1[b1 - 1] - '0');
if (a1 > 0 && b1 > 0)
sum = a + b + c;
else if (a1 < 0 && b1 > 0)
sum = b + c;
else if (a1 > 0 && b1 < 0)
sum = a + c;
else
sum = c;
if (sum > 9)
{
c = sum / 10;
sum = (sum % 10) + '0';
}
else
{
c = 0;
sum = sum + '0';
}
r[biggest] = sum;
a1--;
b1--;
biggest--;
}
if (*(r) != 0)
return (r);
else
return (r + 1);
}
