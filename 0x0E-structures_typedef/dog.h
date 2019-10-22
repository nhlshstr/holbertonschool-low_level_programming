#ifndef DOG
#define DOG
/**
 *struct dog - a structure named dog
 *@name: Name
 *@age: The age
 *@owner: Owner
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
