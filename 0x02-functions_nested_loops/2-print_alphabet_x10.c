#include "main.h"

/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase
 */
void print_alphabet_x10(void)
{
	int m;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
		_putchar(m);
		}
		_putchar('\n');
	}
}

