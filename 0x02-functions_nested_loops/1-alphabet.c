#include "holberton.h"
/**
 * print_alphabet- use only user defined variables to create ouput
 *
 * Return: print to stdout the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
char az = 'a';
while (az <= 'z')
{
_putchar (az);
az++;
}
_putchar ('\n');
}
