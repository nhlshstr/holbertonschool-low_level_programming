#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies 2 numbers
 *
 * @argc:  number of arguements
 * @argv: stored arguements as strings
 *
 * Return: 1 if error, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));

		printf("%d\n", (a * b));

		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}

