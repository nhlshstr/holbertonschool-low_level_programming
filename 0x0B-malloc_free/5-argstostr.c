#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - concatenates all arguements of a program
 *
 * @ac: no of arguements passed to main
 * @av: arguements passed to main
 *
 * Return: char pointer to newly allocated string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j;
	int length = 0;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, length++)
		{
			;
		}
	}

	p = malloc(sizeof(char) * (length + ac + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[count++] = av[i][j];
		}

		p[count++] = '\n';
	}

	p[count] = '\0';

	return (p);
}
