#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0 or dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_new_dog;

	my_new_dog = malloc(sizeof(dog_t));
	if (my_new_dog == NULL)
		return (NULL);
	if (name == NULL)
		my_new_dog->name = NULL;
	else
	{
		my_new_dog->name = (char *) malloc(_strlen(name) + 1);
		if (my_new_dog->name == NULL)
		{
			free(my_new_dog);
			return (NULL);
		}
		_strcpy(my_new_dog->name, name);
	}

	if (owner == NULL)
		my_new_dog->owner = NULL;
	else
	{
		my_new_dog->owner = (char *) malloc(_strlen(owner) + 1);
		if (my_new_dog->owner == NULL)
		{
			free(my_new_dog->name);
			free(my_new_dog);
			return (NULL);
		}
		_strcpy(my_new_dog->owner, owner);
	}
	my_new_dog->age = age;
	return (my_new_dog);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: st
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destiny
 * @src: source
 * Return: src
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	for (; *src != '\0'; src++, s++)
		*s = *src;
	*s = '\0';
	return (s);
}
