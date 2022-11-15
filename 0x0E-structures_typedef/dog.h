#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 *struct dog - dog type
 *@name: string
 *@age: integer
 *@owner: string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);

#endif
