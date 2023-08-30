#include "main.h"
/**
 * palind1 - obtains length of a
 * @s: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind1(char *s, int l)
{
if (*s == 0)
return (l - 1);
return (palind1(s + 1, l + 1));
}
/**
 * palind2 - compares string vs string reverse
 * @s: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *s, int l)
{
if (*s != *(s + l))
return (0);
else if (*s == 0)
return (1);
return (palind2(s + 1, l - 2));
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
return (palind2(s, l));
}
