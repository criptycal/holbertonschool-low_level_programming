#include "holberton.h"

/**
 *print_alphabet_x10 - use function to build ouput
 *Return: print to stdout the alphabet 10 timesm folowed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
