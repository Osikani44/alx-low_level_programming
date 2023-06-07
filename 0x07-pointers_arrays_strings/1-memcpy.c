#include "main.h"

/**
 * _memcpy - copy bytes from src to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source buffer
 * @n: number of bytes to copy
 *
 * Return: pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
