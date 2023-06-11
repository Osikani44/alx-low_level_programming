#include <stdio.h>

/**
 * main - print name of the program
 * @argc: number of arguments given to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
