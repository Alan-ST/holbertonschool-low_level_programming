#include "main.h"
/**
 * _strcmp - main function
 * @s1: string
 * @s2: string
 * Return: str
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 > *s2 ? 1 : -1);
}