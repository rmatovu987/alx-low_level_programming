#include "3-calc.h"
/**
 *main - main function
 *@argc:int
 *@argv:arguments in command line
 *Return:int
 */
int main(int argc, char *argv[])
{
int val;

if (argc - 1 > 3 || argc - 1 < 3)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}

if ((strcmp(argv[2], "/") == 0 || (strcmp(argv[2], "%") == 0)) &&
atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}
val = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", val);
return (0);
}
