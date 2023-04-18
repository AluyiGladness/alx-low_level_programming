#ifndef DOG_H_
#define DOG_H_


/**
 * struct dog - struct containing info on dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
