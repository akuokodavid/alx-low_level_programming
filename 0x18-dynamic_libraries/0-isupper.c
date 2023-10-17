#include "main.h"

/**
 * _isupper - letters in uppercase
 * @c: char that needs checking
 *
 * Return: 0 if failed or 1 if passed
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
