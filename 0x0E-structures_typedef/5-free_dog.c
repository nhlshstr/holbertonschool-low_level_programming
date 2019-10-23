#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - function to free dog
 *
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
