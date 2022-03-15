#include "main.h"
/**
 *print_alphabet - prints the alphabet, in lowercase, follow by a new line
 */
void print_alphabet(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		_putchar(ap);
		ap++;
	}

	_putchar('\n');
}
