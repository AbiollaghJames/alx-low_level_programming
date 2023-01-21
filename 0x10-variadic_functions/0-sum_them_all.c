#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return sum of all params
 * @n: No of params passed to function
 * @...: No of params to calculate sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
