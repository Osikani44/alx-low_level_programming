#include "main.h"
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: nothing on success.
 */
void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}

