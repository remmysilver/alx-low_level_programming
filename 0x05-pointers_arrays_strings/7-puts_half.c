#include "main.h"
/**
 *puts_half - prints half of a string
 *followed by a new line
 *@str: string to be printed
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	last = max / 2;
	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
