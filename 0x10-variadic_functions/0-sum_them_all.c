#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all the parameters
 * @n: number of parameters passed
 * @...: variable number of parameters
 * Return: 0 if n is 0, otherwise return the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
