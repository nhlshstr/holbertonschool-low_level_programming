#include <stdio.h>
#include "holberton.h"
/**
 *
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int i;
	int newArr[5];

	for(i = 0; i < n; i++)
	{	
		if (i == (n - 1))
		{
		
		newArr[i] = *(a + i);
		printf("%d", newArr[i]);
		break;
		}

		newArr[i] = *(a + i);
		printf("%d ,", newArr[i]);
	}	

	printf("\n");
}
