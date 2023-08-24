#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: input value 
*@src: input value 
*Return: void
*/
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
for (b = 0; src[b]; b++)
{
dest[a] = scr[b];
}
return (dest);
}
