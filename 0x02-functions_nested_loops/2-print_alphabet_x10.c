#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ap = 'a';

		while (ap < 'z')
		{
			_putchar(ap);
			ap++;
		}
		_putchar('\n');
		i++;
	}
}
