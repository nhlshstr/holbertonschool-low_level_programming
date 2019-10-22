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
/**
 *dog_t - new struct for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
