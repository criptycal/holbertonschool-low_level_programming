#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);

			if (num2 != '9' || num1 != '9')
			{
				putchar(44);
				putchar(32);
			}
			num2 += 1;
		}
		num1 += 1;
		num2 = '0';
	}

	putchar ('\n');

	return (0);
}
