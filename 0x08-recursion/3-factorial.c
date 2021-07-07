#include "holberton.h"

/**
 *factorial - returns the factorial of a given number
 *@n: int
 * Return: int
 */

int factorial(int n)
{
if (n > 0)
{
int fact = 0;

fact = n * (factorial(n - 1));
return (fact);
}
else if (n == 0)
return (1);
else
return (-1);

}
