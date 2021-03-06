#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: data
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
