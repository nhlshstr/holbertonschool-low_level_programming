#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Returns length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/**
 * new_dog - new dog function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *newName, *newOwner;
	int name2len, owner2len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name2len = _strlen(name);
	newName = malloc(sizeof(char) * (name2len + 1));
	if (newName == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner2len = _strlen(owner);
	newOwner = malloc(sizeof(char) * (owner2len + 1));
	if (newOwner == NULL)
	{
		free(newName);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(newName, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(newOwner, owner);
	return (new_dog);
}
