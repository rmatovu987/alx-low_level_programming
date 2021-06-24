#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *@c: int
 *Return: 1 if upper, 0 other
 */

int _isupper(int c)
{
char alp;
for (alp = 'A'; alp <= 'Z'; alp++)
{
if (c == alp)
return (1);
}
return (0);
}
