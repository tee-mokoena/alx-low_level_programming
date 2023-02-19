#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
