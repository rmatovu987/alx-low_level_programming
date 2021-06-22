#include "holberton.h"

/**
 * print_sign - prints the sign of n
 * @n : int
 * Return: 1 if positive, 0 is 0, -1 is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);

}
}
