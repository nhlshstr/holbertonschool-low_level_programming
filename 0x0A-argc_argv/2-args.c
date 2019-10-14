#include <stdio.h>
/**
 *main - prints all arguements
 *
 * @argc: contains the number of arguements
 * @argv: contains all the arguements as strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n = 0;

	for ( ; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
