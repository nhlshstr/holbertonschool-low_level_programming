#include <stdio.h>
/**
 *main - prints the name of the commands called
 *@argc: number of arguements
 *@argv: array of strings of arguements
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
