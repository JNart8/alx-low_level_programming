#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 * Return: returns 0 for success
 */
int main(void)
{
	int i = 48;
	int e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
					break;
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

