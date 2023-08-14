#include <stdlib.h>
#include <time.h>
#include <srdio.h>

/*
 * Function main - print a text according number
 * Return: 0(success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
	       printf("last digit of %d is %d and is less than 6 and not 0\n",
	 n, last);
	}	       
	return (0);
}
