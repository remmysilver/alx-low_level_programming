#include <stdio.h>
#include "main.h"
/**
 *_isupper - checks for uppercase
 *@c: character to checked for case
 *Return: 1 if uppercase, 0 if not uppercase
 */



int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
