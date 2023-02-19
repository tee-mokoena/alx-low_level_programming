#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	int d;

	c = 'a';
	d = '0';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
}

