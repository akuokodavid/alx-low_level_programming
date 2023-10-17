#include "main.h"
/**
 * _memset - add a value to memory
 * @s: initial address
 * @b: value needed
 * @n: bytes to be changed
 *
 * Return: new array with new value for n bytes
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
