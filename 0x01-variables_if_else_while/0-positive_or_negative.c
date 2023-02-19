#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine whether the variable stored in n is a positive or a negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char (82);
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
