#include <stdio.h>

/** 
 * main - print signle digits of base 10 using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	return (0);
}
