#include "variadic_functions.h"
/**
 *print_numbers - prints numbers followed by new lines
 *
 * @separator: string to be put b/w each argument
 * @n: number of arguements passed
 *
 * Return: No return (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
