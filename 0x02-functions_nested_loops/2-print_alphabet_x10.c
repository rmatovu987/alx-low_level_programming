#include "holberton.h"

/**
 *print_alphabet_x10 - prints the alphabet 10 times
 **/

void print_alphabet_x10(void)
{
int x;
char alp;

for (x = 1; x <= 10; x++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
return;
}
