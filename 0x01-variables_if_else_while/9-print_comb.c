#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
