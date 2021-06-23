#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main -entry point
 *
 *Return: Always 0
 **/

int positive_or_negative (int n)
{

if (n > 0)
{
printf("%d%s\n", n, " is positive");
}

else if (n == 0)
{
printf("%d%s\n", n, " is zero");
}

else
{
printf("%d%s\n", n, " is negative");
}
return (0);
}
