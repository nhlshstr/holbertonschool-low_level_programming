#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - outputs the sums of all the numbers passed
 *
 * @argc: number of arguements
 * @argv: strings of all arguements
 *
 * Return: REturn 1 if error, 0 if success.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
