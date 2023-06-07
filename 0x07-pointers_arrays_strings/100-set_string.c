#include "main.h"

/**
 * set_string - set the value of pointer to char
 * @s: pointer to pointer to a char
 * @to: the address to match
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
