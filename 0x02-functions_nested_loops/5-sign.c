#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: the number to be checked
 *
 * Return: 1 for positive num, -1 for negative num and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
