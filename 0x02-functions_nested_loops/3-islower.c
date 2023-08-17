#include "main.h"
/**
 * _islower: checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else 
 */
int _islower(int ch)
{
if (ch >= 97 && ch <= 122)
{
return (1);
}
return (0);
}
