#include <stdarg.h>
#include "variadic_function.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: the number of parameters passed to function
 * @...: Avariable number of parameters to calculate the sum of
 *
 * Return: If n == 0 - 0
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
