#include "main.h"

/**
 * print_diagonal - Draws a diagonal
 * @n: The number of times to print diagonal lines
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (j = 1; j < n; j++)
	{
	for (k = 1; k < j; k++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
