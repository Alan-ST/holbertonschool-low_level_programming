#include "holberton.h"
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == 0)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
		s[i] = '\0';
		return (s);
	}
}
