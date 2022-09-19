#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len -1) / 2;
	for (i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
