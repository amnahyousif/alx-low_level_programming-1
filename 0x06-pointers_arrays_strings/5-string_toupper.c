#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *a)
{
int i = 0;
while (*(a + i) != '\0')
{
if (*(a + i) >= 'a' && *(a + i) <= 'z')
{
*(a + i) = *(a + i) - 32;
}
i++;
}
return (a);
}
