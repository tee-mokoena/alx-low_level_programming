#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int c;
	int d = 0;
	
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != c && c != d && d < c && c < a)
				{
					putchar('0' + d);
					putchar('0' + c);
					putchar('0' + a);
				}
				a++;
			}
			c++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
