#ifndef _DOG_H_
#define _DOG_H_

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

#define dog_t struct dog

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif
