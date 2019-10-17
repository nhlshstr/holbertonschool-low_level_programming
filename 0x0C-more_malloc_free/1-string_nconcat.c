#include "holberton.h"
/**
 *string_nconcat - function that concatenates 2 strings
 *
 * @s1: first string that is passed
 * @s2: second string that is passed
 * @n: no. of bytes of the 2nd string to include
 *
 * Return: Returns pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	p = malloc(sizeof(char) * (i + j + 1));
	for (x = 0; x < i; x++)
		p[x] = s1[x];

	if (n >= j)
	{
		for (y = 0; y < j; y++)
			p[x + y] = s2[y];
		p[j] = '\0';
	}
	else
	{
		for (y = 0; y < n; y++)
			p[x + y] = s2[y];
		p[x + n] = '\0';
	}
	return (p);
}
