#include "holberton.h"
/**
 *leet - function to convert to leet
 *
 *@string: trng that is passed for conversion
 *
 * Return: pointer is returned
 */
char *leet(char *string)
{
	int i, j;
	char leeta[] = "aeotlAEOTL";
	char leetb[] = "4307143071";

	for (i = 0; string[i]; i++)
	{
		for (j = 0; leeta[j] != '\0'; j++)
		{
			if (string[i] == leeta[j])
			{
				string[i] = leetb[j];
			}
		}
	}
	return (string);
}
