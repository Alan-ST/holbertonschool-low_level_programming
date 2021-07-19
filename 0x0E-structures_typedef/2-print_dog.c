#include "dog.h"i
/**
 * print_dog - prints a struct dog
 * @d: data
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
