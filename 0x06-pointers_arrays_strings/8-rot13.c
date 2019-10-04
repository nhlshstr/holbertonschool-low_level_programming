#include "holberton.h"
/**
 *rot13 - rotates the string by 13
 *
 *@string: string that is passed
 *
 *Return: returns the string pointer
 */
char *rot13(char *string)
{
	int i, j;
	char rota[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotb[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; string[i] != '\0'; i++)
		for (j = 0; rota[j] != '\0'; j++)
		{
			if (string[i] == rota[j])
			{
				string[i] = rotb[j];
				break;
			}
		}
	return (string);
}
