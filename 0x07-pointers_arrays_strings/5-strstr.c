#include "main.h"
#include <stddef.h>

/**
 * _strstr - searches the string for a substring
 * @haystack: the string to search
 * @needle: substring to find
 *
 * Return: pointer to the first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; *(needle + i); i++)
			if (*(needle + i) != *(haystack + i))
				break;
		if (!*(needle + i))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
