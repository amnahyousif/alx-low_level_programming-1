#include "main.h"
/**
 * my_sqar -  function about the square root
 * @x: The entry is equal to n, of the before function
 * @y: sum
 * Return:  result
 */
int my_sqar(int x, int y)
{
if (x == (y * y))
return (y);
else if ((y * y) >= x)
return (-1);
else
return (my_sqar(x, y + 1));
}
/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 * Return: This is result of the function my_sqar
 */
int _sqrt_recursion(int n)
{
if (n <= 0)
return (-1);
return (my_sqar(n, 0));
}
