#include <stdio.h>

/**
 * main - print single digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i = i + 1)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
