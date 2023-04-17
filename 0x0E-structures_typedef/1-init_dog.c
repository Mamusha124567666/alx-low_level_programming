#include "dog.h"
/**
 * init: initialize the variable
 * @name: name of the dog
 * @age: age dog
 * @owner:owner of dog
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if(d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
