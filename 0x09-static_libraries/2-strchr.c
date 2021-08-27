#include "main.h"
/**
 * _strchr - main function
 * @s: string
 * @c: char
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : 0);
}