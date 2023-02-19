#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'A')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
