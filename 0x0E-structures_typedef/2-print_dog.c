#include<stdio.h>
#include "dog.h"
#include<stdlib.h>

/**
 * print_dog, print_name, print_age, print_owner if not null
 * @d:pointer to struct dog
 **/

void print_dog(struct dog *d)
{
	
	if (d)
	{
	if(!((*d).name))
	{
		printf("name:(nil)\n");
	}
	else
	{
		printf("name: %s", (*d).name);
	}
	printf("age: %f",(*d).age);
	if(!((*d).owner))
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("owner: %s", (*d).owner);
	}
	}
}
