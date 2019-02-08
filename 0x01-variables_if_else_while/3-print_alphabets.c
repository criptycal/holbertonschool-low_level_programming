#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		az += 1;
	}

	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ += 1;
	}

	putchar('\n');

	return (0);
}
