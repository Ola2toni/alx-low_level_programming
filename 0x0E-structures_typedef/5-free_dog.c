#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function for freeing dogs
 * @d: pointer to dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
