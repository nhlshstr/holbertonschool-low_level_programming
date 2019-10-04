#include "holberton.h"
/**
 * cap_string - function to change the case to uppercase
 *
 * @string: string of which the case is to be changed
 *
 * Return: returns the string pointer p
 */
char *cap_string(char *string)
{
	int i, j;
	char arr[] = " \t\n,;.!?\"(){}";
	char *p = string;

	if (string[0] >= 'a' && string[0] <= 'z')
	{
		string[0] -= 32;
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (string[i] == arr[j])
			{
				if (string[i + 1] >= 'a' && string[i + 1] <= 'z')
					string[i + 1] -= 32;
			}
		}
	}
	return (p);
}
