#include "holberton.h"

/**
 *print_alphabet - prints alphabet
 **/

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');

return;
}
