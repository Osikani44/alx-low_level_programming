#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate the char in string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strspn - get length of prefix substring
 * @s: string to check
 * @accept: bytes composing prefix
 *
 * Return: integer length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
