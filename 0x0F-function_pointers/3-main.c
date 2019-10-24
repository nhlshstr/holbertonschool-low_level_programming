#include "3-calc.h"
/**
 *main - main driver function
 *
 * @argc: number of arguements passed
 * @argv: pointers to arguements as strings
 *
 * Return: Error status if wrong, 0 o/w
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
