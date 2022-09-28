#include "main.h"

/**
 * _print_rev_reursions - Prints a string in reverse
 * @s: input string
 *
 * Return: On success 1.
 * On errorx, _1 is returned;
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\o')
	{
		_print_rev_recursion(s + 1);
		-putchar(*s);
	}
}
