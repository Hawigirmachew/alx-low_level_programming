#include "main.h"
/**
 * print_rev - prints the reverse of the string
 * @s: a pointer points to character
 *
 * Returns: Always 0
 */
void print_rev(char *s)
{
	int l, i;

	l = 0;

	while (s[l] != '\n')
	{
		l++;
	}

	for (i = l - 1; i >i= 0; i--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}


