#include "variadic_functions.h"

/**
* sum_them_all - calculates the sum of all its parameters
* @n: int
* Returns: sum
*/

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

unsigned int i;
int sum = 0;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
