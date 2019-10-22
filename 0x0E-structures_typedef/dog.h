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
char *_strcpy(char *dest, char *src);
int _strlen(char *s)
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
