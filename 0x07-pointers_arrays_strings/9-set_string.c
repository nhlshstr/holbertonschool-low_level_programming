#include "holberton.h"
/**
 *set_string - function to set the value of a pointer to a char
 *
 * @s: double pointer to the string
 * @to: string which is to be changed to
 *
 * Return: No return type
 */
void set_string(char **s, char *to)
{
	*s = to;
}
