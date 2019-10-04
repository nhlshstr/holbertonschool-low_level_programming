#include "holberton.h"
/**
 * string_toupper - function to change the case to uppercase
 *
 * @string: string of which the case is to be changed
 *
 * Return: returns the string
 */
char *string_toupper(char *string)
{
	while (*string != '\0')
	{
		if (*string >= 'a' && *string <= 'z')
		{
			*string = *string - 32;
		}
		string++;
	}
	return (string);
}

