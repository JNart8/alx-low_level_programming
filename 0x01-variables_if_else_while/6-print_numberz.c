#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: returns 0 for success
 */
int main(void)
{
	int n;

	for (n = 48 ; n < 58; n++)
		putchar(n);
	printf("\n");
	return (0);
}

