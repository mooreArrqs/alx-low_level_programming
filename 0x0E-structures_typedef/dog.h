#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type defining a dog.
 *
 * @name: The name of a dog.
 * @age: The age of a dog.
 * @owner: The owner of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef struct dog_t - Typedef for struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
