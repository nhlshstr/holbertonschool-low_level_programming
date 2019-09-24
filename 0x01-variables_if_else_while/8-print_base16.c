#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char notNum;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (notNum = 'a'; notNum < 'g'; notNum++)
		putchar(notNum);
	putchar('\n');

	return (0);
}
