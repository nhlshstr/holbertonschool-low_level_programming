#include "variadic_functions.h"
/**
 *print_all - prints anything
 *
 * @format: list of arguements
 *
 * Return: No return type
 */
void print_all(const char * const format, ...)
{
	va_list mouse;
	int i = 0;
	int count = 0;

	while (format[count] != '\0')
		count++;
	va_start(mouse, format);
	while (format[i] != '\0')
	{
		switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(mouse, int));
					break;
				case 'c':
					printf("%c", (char)va_arg(mouse, int));
					break;
				case 'f':
					printf("%f", (float)va_arg(mouse, double));
					break;
				case 's':
					if (format == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", va_arg(mouse, char *));
					break;
				default:
					break;
			}
			if ((i != count - 1) && (format[i] == 'i' || format[i] == 'c' ||
						format[i] == 'f' || format[i] == 's'))
				printf(", ");
			i++;
	}
	va_end(mouse);
	printf("\n");
}
