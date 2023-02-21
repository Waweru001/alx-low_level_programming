#include <stdio.h>

/**
 *  list all the natural numbers below 10
 *
 * Return: void
*/

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++ 0)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
