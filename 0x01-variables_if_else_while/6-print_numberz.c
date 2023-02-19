#include <stdio.h>

/**
 * main - print single digits using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 1;

	while (ch <= 9)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
