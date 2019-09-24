#include "holberton.h"
/**
 * _abs - checks the abs value of the given number
 *
 * @a: integer to be checked
 *
 * Return: a if positive
 *		b if negative
*/
int _abs(int a)
{
	if (a > 0)
		return (a);
	else
		return (-a);
}
