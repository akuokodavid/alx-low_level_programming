#include "main.h"
/**
 * _puts - prints unformatted string with new line
 * @str: source string
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}


