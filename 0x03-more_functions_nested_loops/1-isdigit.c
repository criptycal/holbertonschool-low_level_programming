#include "holberton.h"
/**
 * _isdigit - entry point
 * @c: varibale to check 
 * Description - checks for uppercase
 *
 * Return: variable to check
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
