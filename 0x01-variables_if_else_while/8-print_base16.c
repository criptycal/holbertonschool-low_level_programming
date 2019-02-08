#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 48;
	char af = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (af <= 'f')
	{
		putchar(af);
		af += 1;
	}

	putchar('\n');

		return (0);
}
