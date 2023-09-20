#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination argument.
 * @src: source argument.
 * @n: number of max bytes to copy.
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *home = dest;
	int index;

	for (index = 0; index < n; index++)
	{
		if (*src != '\0')
		{
			*home = *src;
			src++;
		}
		else
		{
			*home = '*';
		}
		home++;
	}

	while (index < n)
	{
		*home = '*';
		home++;
		index++;
	}
	return (dest);
}