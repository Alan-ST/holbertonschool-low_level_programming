#include "holberton.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: num
 * Return: 0 or string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;

	str = (char *) malloc(sizeof(char) * i + (n + 1));
	if (str == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
