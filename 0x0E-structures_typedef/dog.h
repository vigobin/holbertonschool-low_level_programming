#ifndef DOG_H
#define DOG_H

/**
 *struct dog - new struct.
 *@name: First member.
 *@age: Second member.
 *@owner: Third member.
 *
 *Description: new struct named dog with char and float types.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
