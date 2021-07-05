#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: char or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack)
	{
		a = haystack;
		b = needle;
		while (*b == *haystack && *b)
			haystack++, b++;
		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (0);
}
