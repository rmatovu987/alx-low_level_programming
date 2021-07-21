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
printf("Error98\n");
exit(98);
}
if ((strcmp(argv[2], "+") == -1) || (strcmp(argv[2], "-") == -1) ||
(strcmp(argv[2], "'*'") == -1) || (strcmp(argv[2], "/") == -1) ||
(strcmp(argv[2], "%") == -1))
{
printf("Error99\n");
exit(99);
}
if ((strcmp(argv[2], "/") == 0 || (strcmp(argv[2], "%") == 0)) &&
atoi(argv[3]) == 0)
{
printf("Error100\n");
exit(100);
}
val = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", val);
return (0);
}
