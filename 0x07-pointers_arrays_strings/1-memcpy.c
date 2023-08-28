#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r, i = n;
for (r = 0; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
