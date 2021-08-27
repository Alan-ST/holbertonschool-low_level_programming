#include "main.h"
/**
 * _strstr - main function
 * @haystack: string
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (needle[i])
	{
		while (*haystack)
		{
			if (*haystack == needle[i])
				return (haystack);
			haystack++;
		}
		if (needle == 0 || *needle == '\0')
			return (0);
		i++;
	}
	return (0);
}