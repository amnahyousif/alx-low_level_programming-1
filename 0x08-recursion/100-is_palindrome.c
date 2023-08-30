#include "main.h"
/**
 * palind1 - obtains length of a
 * @s: string
 * @n: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind1(char *s, int n)
{
if (*s == 0)
return (n - 1);
return (palind1(s + 1, n + 1));
}
/**
 * palind2 - compares string vs string reverse
 * @s: string
 * @n: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *s, int n)
{
if (*s != *(s + n))
return (0);
else if (*s == 0)
return (1);
return (palind2(s + 1, n - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
int n;
n = palind1(s, 0);
return (palind2(s, n));
}
