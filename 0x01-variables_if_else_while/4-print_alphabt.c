#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'q' && az != 'e')
		{
			putchar(az);
		}
		az += 1;
	}

	putchar('\n');

	return (0);
}
